 
%{

  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

%}

%token ABSTRACTO AND ASOCIATIVA BOOLEANO CABECERA CADENA CASO CARACTER CARGA CLASE CONJUNTO CONSTANTE CUERPO CTC_BOOLEANA CTC_CADENA CTC_CARACTER CTC_ENTERA CTC_REAL CONSTRUCTOR CUANDO CUATRO_PTOS DESCENDENTE DESPD DESPI DESTRUCTOR DE DEVOLVER DOS_PTOS EJECUTA ELEMENTO EN ENTERO ENTONCES EQ ESPECIFICO EXCEPTO FICHERO FINAL FINALMENTE FLECHA_DOBLE FUNCION GEQ GENERICO HASTA IDENTIFICADOR INTERFAZ LANZAR LEQ LISTA MIENTRAS MODIFICABLE NEQ OTRO OR PAQUETE PARA PATH POTENCIA PRIVADO PROBAR PROCEDIMIENTO PROGRAMA PUBLICO REAL REGISTRO REPITE SEA SALIR SEMIPUBLICO SI SINO TIPO VARIABLE

%right '\\/' AND
%right '/\\' OR
%left '=<' LEQ
%left '>=' GEQ
%left ':=' EQ
%left '!=' NEQ 
%left '<-' DESPI 
%left '->' DESPD 
%right  '**' POTENCIA


%%
/*************************************INSTRUCCIONES***************************************/
instruccion : ';'
              | instruccion_asignacion { printf("instruccion -> instruccion_asignacion"); }
              | instruccion_salir { printf("instruccion -> instruccion_salir"); }
              | instruccion_devolver { printf("instruccion -> instruccion_devolver"); }
              | instruccion_llamada { printf("instruccion -> instruccion_llamada"); }
              | instruccion_si { printf("instruccion -> instruccion_si"); }
              | instruccion_casos { printf("instruccion -> instruccion_casos"); }
              | instruccion_bucle { printf("instruccion -> instruccion_bucle"); }
              | instruccion_probar_excepto { printf("instruccion -> instruccion_probar_excepto"); }
              | instruccion_lanzar { printf("instruccion -> instruccion_lanzar");}

bloque_instrucciones : bloque_instrucciones ',' instruccion  { printf("instruccion -> bloque_instrucciones"); }
                      | instruccion  { printf("instruccion -> instruccion"); }
                      ;
instruccion_asignacion : objeto '=' expresion ';'{ printf("instruccion_asignacion -> objeto '=' expresion ';'"); }

instruccion_salir : SALIR { printf("instruccion_salir -> SALIR ';'\n"); }
                  | SALIR SI expresion ';' { printf("instruccion_salir -> SALIR SI expresion ';'\n"); }
                  ;


instruccion_devolver : DEVOLVER expresion ';' { printf("instruccion_devolver -> DEVOLVER expresion ';'\n"); };

instruccion_llamada : llamada_subprograma ';' { printf("instruccion_llamada -> llamada_subprograma ';'\n"); };
llamada_subprograma : nombre '(' expresion ')' { printf("llamada_subprograma -> nombre '(' (expresion)* ')'\n"); };

instruccion_si : SI expresion ENTONCES bloque_instrucciones  { printf("instruccion_si -> ENTONCES bloque_instrucciones\n -> SINO bloque_instrucciones"); } 
                |SINO bloque_instrucciones { printf("instruccion_si -> SINO bloque_instrucciones\n "); }   
              ;



instruccion_casos : EN CASO expresion SEA '[' caso ']' ';' { printf("instruccion_casos -> EN CASO expresion SEA '[' caso ']' ';' "); }
caso : entradas '=>' bloque_instrucciones { printf("caso -> entradas '=>' bloque_instrucciones"); }
entradas : '[' entrada '|' ']' entrada { printf("entradas -> '[' entrada '|' ']' entrada "); }
entrada : expresion | rango | OTRO { printf("entrada -> expresion | rango | OTRO"); }
;

rango : expresion '..' expresion '[' '..' expresion ']' { printf("rango -> expresion '..' expresion '[' '..' expresion ']'"); };

instruccion_bucle : clausula_iteracion bloque_instrucciones { printf("instruccion_bucle -> clausula_iteracion bloque_instrucciones"); }
;

clausula_iteracion : PARA nombre EN objeto { printf("clausula_iteracion -> PARA nombre EN objeto"); }
                    | REPITE ELEMENTO nombre EN rango '[' DESCENDENTE ']' { printf("clausula_iteracion -> REPITE ELEMENTO nombre EN rango '[' DESCENDENTE ']' "); }
                    | MIENTRAS expresion { printf("clausula_iteracion -> MIENTRAS expresion"); }
                    | REPITE HASTA expresion { printf("clausula_iteracion -> REPITE HASTA expresion "); }
                    ;

instruccion_probar_excepto : PROBAR bloque_instrucciones { printf("instruccion_probar_excepto -> PROBAR bloque_instrucciones "); }
                            EXCEPTO '[' clausula_excepcion ']' { printf("instruccion_probar_excepto -> EXCEPTO '[' clausula_excepcion ']'  "); }
                            '[' FINALMENTE bloque_instrucciones ']' { printf("instruccion_probar_excepto -> '[' FINALMENTE bloque_instrucciones ']'  "); }
                            ;

clausula_excepcion : CUANDO nombre EJECUTA bloque_instrucciones  { printf("clausula_excepcion -> CUANDO nombre EJECUTA bloque_instrucciones"); };


instruccion_lanzar : LANZAR nombre ';' { printf("instruccion_lanzar ->  LANZAR nombre ';'"); };

/***************/
/* expresiones */
/***************/
/*lineas: /* cadena vacia *//*
| lineas linea
;
linea: '\n'
    | IDENTIFICADOR '=' expresion '\n' {insertar_diccionario(&diccionario, $1, $3);}
    | expresion_primaria '\n' { printf ("resultado: %f\n", $1); }
    | error '\n' { yyerrok;}
;*/

//NOS FALTA PROGRAMA

expresion_primaria : expresion_constante | objeto  | '(' expresion ')'
nombre : IDENTIFICADOR '::'  IDENTIFICADOR
objeto : nombre
| objeto '[' expresiones ']' //tiene que llegar a la regla de no terminales.
| objeto '.' IDENTIFICADOR
 
expresiones: expresiones ',' expresion {printf("expresion -> expresiones ',' expresion ");}
            | expresion {printf("expresiones -> expresion"); }
            ;

expresion_constante : CTC_ENTERA { printf("expresion_constante -> CTC_ENTERA\n"); }
                    | CTC_REAL { printf("expresion_constante -> CTC_REAL\n"); }
                    | CTC_CADENA { printf("expresion_constante -> CTC_CADENA\n"); }
                    | CTC_CARACTER { printf("expresion_constante -> CTC_CARACTER\n"); }
                    | CTC_BOOLEANA { printf("expresion_constante -> CTC_BOOLEANA\n"); }

expresion: expresion_primaria;
                   
expresion: '-' expresion %prec UMINUS { printf("", $$); }
          | expresion 'POTENCIA' expresion {printf("expresion -> expresion 'POTENCIA' expresion"); }
          | expresion '*' expresion { printf("expresion -> expresion '*' expresion"); }
          | expresion '/' expresion { printf("expresion -> expresion '/' expresion"); }
          | expresion '+' expresion { printf("expresion -> expresion  '+' expresion"); }
          | expresion '-' expresion { printf("expresion -> expresion '-' expresion"); }
          | expresion 'DESPI' expresion { printf("expresion -> expresion '<-' expresion"); }
         /* | expresion 'DESPD' expresion { printf("expresion -> expresion '->' expresion"); }   */       
          | expresion '&' expresion {  printf("expresion -> expresion '&' expresion"); }
          | expresion '^' expresion {  printf("expresion -> expresion  '^' expresion"); }
          | expresion '@' expresion {  printf("expresion -> expresion '@' expresion"); }
          | expresion '<' expresion {  printf("expresion -> expresion '<' expresion"); }
          | expresion '>' expresion {  printf("expresion -> expresion '>' expresion"); }
          | expresion 'LEQ' expresion { printf("expresion -> expresion '=<' expresion"); }
          | expresion 'GEQ' expresion { printf("expresion -> expresion '>=' expresion"); }
          | expresion 'EQ' expresion { printf("expresion -> expresion ':=' expresion"); }
          | expresion 'NEQ' expresion {printf("expresion -> expresion '!=' expresion"); }
          | '!' expresion {printf("expresion -> expresion '!' expresion"); };










%%

int yyerror(char *s) {
  fflush(stdout);
  printf("***************** %s\n",s);
  }

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./moronico NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
