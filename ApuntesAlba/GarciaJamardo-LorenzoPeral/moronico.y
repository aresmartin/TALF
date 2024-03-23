%{

  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1
  int yyerror(char *s);

%}


%token ABSTRACTO AND ASOCIATIVA BOOLEANO CABECERA CADENA CASO CARACTER CARGA CLASE CONJUNTO CONSTANTE CUERPO CTC_BOOLEANA CTC_CADENA CTC_CARACTER CTC_ENTERA CTC_REAL CONSTRUCTOR CUANDO CUATRO_PTOS DESCENDENTE  DESPI DESPD  DESTRUCTOR DE DEVOLVER DOS_PTOS EJECUTA ELEMENTO EN ENTERO ENTONCES EQ ESPECIFICO EXCEPTO FICHERO FINAL FINALMENTE FLECHA_DOBLE FUNCION GEQ GENERICO HASTA IDENTIFICADOR INTERFAZ LANZAR LEQ LISTA MIENTRAS MODIFICABLE NEQ OTRO OR PAQUETE PARA PATH POTENCIA PRIVADO PROBAR PROCEDIMIENTO PROGRAMA PUBLICO REAL REGISTRO REPITE SEA SALIR SEMIPUBLICO SI SINO TIPO VARIABLE

/*
%nonassoc '-' MENOS_UNITARIO
%right  '**' POTENCIA 
//%left '*' '/' '%'
%left  DESPI 
%left  DESPD
%left LEQ GEQ EQ NEQ 
%nonassoc '!' NEGLOG 
%right  '/\\' AND
%right '\\/' OR*/


//() con coma [] sin coma revisar y por ejemplo hacer lista nombres para ()+ comas y para sin comas []+


%%
/*****************************************PROGRAMA****************************************/
programa : definicion_programa {printf("programa -> definicion_programa \n"); } 
        | definicion_paquete {printf("programa -> definicion_paquete \n"); } 
        ;


definicion_programa : PROGRAMA nombre ';' bloque_programa {printf("definicion_programa -> PROGRAMA nombre ';' bloque_programa \n"); };

nombre : IDENTIFICADOR CUATRO_PTOS  IDENTIFICADOR {printf("nombre -> IDENTIFICADOR CUATRO_PTOS  IDENTIFICADOR \n"); };
        | IDENTIFICADOR {printf("nombre -> IDENTIFICADOR \n"); };
        | error IDENTIFICADOR {yyerror("Error de Identificador");}
        ;

//echar un vistazo
bloque_programa:
    bloque_instrucciones
    { printf("bloque_programa -> bloque_instrucciones\n"); }
    | declaracion_cargas bloque_instrucciones
    { printf("bloque_programa -> declaracion_cargas bloque_instrucciones\n"); }
    | declaracion_tipos bloque_instrucciones
    { printf("bloque_programa -> declaracion_tipos bloque_instrucciones\n"); }
    | declaracion_constantes bloque_instrucciones
    { printf("bloque_programa -> declaracion_constantes bloque_instrucciones\n"); }
    | declaracion_variables bloque_instrucciones
    { printf("bloque_programa -> declaracion_variables bloque_instrucciones\n"); }
    | declaracion_cargas declaracion_tipos bloque_instrucciones
    { printf("bloque_programa -> declaracion_cargas declaracion_tipos bloque_instrucciones\n"); }
    | declaracion_cargas declaracion_constantes bloque_instrucciones
    { printf("bloque_programa -> declaracion_cargas declaracion_constantes bloque_instrucciones\n"); }
    | declaracion_cargas declaracion_variables bloque_instrucciones
    { printf("bloque_programa -> declaracion_cargas declaracion_variables bloque_instrucciones\n"); }
    | declaracion_tipos declaracion_constantes bloque_instrucciones
    { printf("bloque_programa -> declaracion_tipos declaracion_constantes bloque_instrucciones\n"); }
    | declaracion_tipos declaracion_variables bloque_instrucciones
    { printf("bloque_programa -> declaracion_tipos declaracion_variables bloque_instrucciones\n"); }
    | declaracion_constantes declaracion_variables bloque_instrucciones
    { printf("bloque_programa -> declaracion_constantes declaracion_variables bloque_instrucciones\n"); }
    | declaracion_cargas declaracion_tipos declaracion_constantes bloque_instrucciones
    { printf("bloque_programa -> declaracion_cargas declaracion_tipos declaracion_constantes bloque_instrucciones\n"); }
    | declaracion_cargas declaracion_tipos declaracion_variables bloque_instrucciones
    { printf("bloque_programa -> declaracion_cargas declaracion_tipos declaracion_variables bloque_instrucciones\n"); }
    | declaracion_cargas declaracion_constantes declaracion_variables bloque_instrucciones
    { printf("bloque_programa -> declaracion_cargas declaracion_constantes declaracion_variables bloque_instrucciones\n"); }
    | declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones
    { printf("bloque_programa -> declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones\n"); }
    | declaracion_cargas declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones
    { printf("bloque_programa -> declaracion_cargas declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones\n"); }
    ;



// 1 O + VECES

bloque_instrucciones : '{'  lista_instrucciones  '}' { printf("bloque_instrucciones -> lista_instrucciones ';'\n"); }
                      ;

lista_instrucciones: lista_instrucciones  instruccion {printf("lista_instrucciones -> lista_instrucciones instruccion ");}
                  | instruccion {printf("lista_instrucciones -> instruccion"); } /*1 o + veces poner , y con corchetes no*/
;


definicion_paquete : PAQUETE nombre ';' seccion_cabecera seccion_cuerpo { printf("definicion_paquete -> PAQUETE nombre ';' seccion_cabecera seccion_cuerpo \n"); }
                    ;

/*
seccion_cabecera : CABECERA
                    [ declaracion_cargas ]?
                    [ declaracion_tipos ]?
                    [ declaracion_constantes ]?
                    [ declaracion_variables ]?
                    [ declaracion_interfaces ]?*/
                    ;
                
//echar un vistazo
seccion_cabecera: CABECERA declaracion_cargas declaracion_tipos declaracion_constantes declaracion_variables declaracion_interfaces
                    { printf("seccion_cabecera -> CABECERA declaracion_cargas declaracion_tipos declaracion_constantes declaracion_variables declaracion_interfaces\n"); }
                    | CABECERA declaracion_cargas declaracion_tipos declaracion_constantes declaracion_variables
                    { printf("seccion_cabecera -> CABECERA declaracion_cargas declaracion_tipos declaracion_constantes declaracion_variables\n"); }
                    | CABECERA declaracion_cargas declaracion_tipos declaracion_constantes
                    { printf("seccion_cabecera -> CABECERA declaracion_cargas declaracion_tipos declaracion_constantes\n"); }
                    | CABECERA declaracion_cargas declaracion_tipos
                    { printf("seccion_cabecera -> CABECERA declaracion_cargas declaracion_tipos\n"); }
                    | CABECERA declaracion_cargas
                    { printf("seccion_cabecera -> CABECERA declaracion_cargas\n"); }
                    | CABECERA
                    { printf("seccion_cabecera -> CABECERA\n"); }
                    |error CABECERA {yyerror; }                    
                    ;

/*
seccion_cuerpo : CUERPO
                    [ declaracion_tipos ]?
                    [ declaracion_constantes ]?
                    [ declaracion_variables ]?
                     lista_declaracion_subprograma
                    ;*/

//echar un vistazo
seccion_cuerpo: CUERPO declaracion_tipos declaracion_constantes declaracion_variables lista_declaracion_subprograma
                { printf("seccion_cuerpo -> CUERPO declaracion_tipos declaracion_constantes declaracion_variables lista_declaracion_subprograma\n"); }
                | CUERPO declaracion_tipos declaracion_constantes declaracion_variables
                 { printf("seccion_cuerpo -> CUERPO declaracion_tipos declaracion_constantes declaracion_variables\n"); }
                | CUERPO declaracion_tipos declaracion_constantes lista_declaracion_subprograma
                  { printf("seccion_cuerpo -> CUERPO declaracion_tipos declaracion_constantes lista_declaracion_subprograma\n"); }
                | CUERPO declaracion_tipos lista_declaracion_subprograma
                  { printf("seccion_cuerpo -> CUERPO declaracion_tipos lista_declaracion_subprograma\n"); }
                | CUERPO declaracion_tipos declaracion_constantes
                    { printf("seccion_cuerpo -> CUERPO declaracion_tipos declaracion_constantes\n"); }
                | CUERPO declaracion_tipos
                    { printf("seccion_cuerpo -> CUERPO declaracion_tipos\n"); }
                | CUERPO declaracion_constantes declaracion_variables lista_declaracion_subprograma
                    { printf("seccion_cuerpo -> CUERPO declaracion_constantes declaracion_variables lista_declaracion_subprograma\n"); }
                | CUERPO declaracion_constantes lista_declaracion_subprograma
                    { printf("seccion_cuerpo -> CUERPO declaracion_constantes lista_declaracion_subprograma\n"); }
                | CUERPO declaracion_variables lista_declaracion_subprograma
                    { printf("seccion_cuerpo -> CUERPO declaracion_variables lista_declaracion_subprograma\n"); }
                | CUERPO declaracion_constantes declaracion_variables
                    { printf("seccion_cuerpo -> CUERPO declaracion_constantes declaracion_variables\n"); }
                | CUERPO declaracion_constantes
                    { printf("seccion_cuerpo -> CUERPO declaracion_constantes\n"); }
                | CUERPO declaracion_variables
                    { printf("seccion_cuerpo -> CUERPO declaracion_variables\n"); }
                | CUERPO lista_declaracion_subprograma
                    { printf("seccion_cuerpo -> CUERPO lista_declaracion_subprograma\n"); }
                | CUERPO
                    { printf("seccion_cuerpo -> CUERPO\n"); }
                //|error {yyerror; }    
                ;


lista_declaracion_subprograma : lista_declaracion_subprograma  declaracion_subprograma {printf("lista_declaracion_subprograma -> lista_declaracion_subprograma  declaracion_subprograma");}
                           | declaracion_subprograma {printf("lista_declaracion_subprograma -> declaracion_subprograma"); } 
                           ;


declaracion_cargas : CARGA  lista_declaracion_carga  ';' {printf("declaracion_cargas -> CARGA  lista_declaracion_carga  ';'"); } 
                            ;

lista_declaracion_carga : lista_declaracion_carga ',' declaracion_carga {printf("lista_declaracion_carga -> lista_declaracion_carga ',' declaracion_carga");}
                           | declaracion_carga {printf("lista_declaracion_carga -> declaracion_carga"); } 
                           ;

declaracion_carga : nombre EN PATH '(' lista_nombres ')'  {printf("declaracion_carga -> nombre EN PATH '(' lista_nombres ')'"); } 
                |nombre  EN PATH  {printf("declaracion_carga -> nombre  EN PATH "); } 
                |nombre   '(' lista_nombres ')' {printf("declaracion_carga -> nombre   '(' lista_nombres ')'"); } 
                |nombre {printf("declaracion_carga -> nombre"); } 

lista_nombres  :  lista_nombres ',' nombre {printf("lista_nombres -> lista_nombres ',' nombre");}
                  | nombre {printf("lista_nombres -> nombre"); } /*1 o + veces poner , y con corchetes no*/
;

/****************************************TIPOS******************************************/
declaracion_tipos : TIPO lista_declaraciones_tipo  {printf("declaracion_tipos -> TIPO declaracion_tipo "); } 
                    ;

lista_declaraciones_tipo : lista_declaraciones_tipo  declaracion_tipo {printf("lista_declaraciones_tipo -> lista_declaraciones_tipo  declaracion_tipo");}
                           | declaracion_tipo {printf("lista_declaraciones_tipo -> declaracion_tipo"); } 
                           ;

declaracion_tipo :  nombre '=' tipo_no_estructurado_o_nombre_tipo ';' {printf("declaracion_tipo ->nombre '=' tipo_no_estructurado_o_nombre_tipo ';'"); } 
                   | nombre '=' tipo_estructurado  {printf("declaracion_tipo ->nombre '=' tipo_estructurado "); } 
                   ;

tipo_no_estructurado_o_nombre_tipo :   nombre {printf("tipo_no_estructurado_o_nombre_tipo -> nombre "); } 
                                      | tipo_escalar {printf("tipo_no_estructurado_o_nombre_tipo -> tipo_escalar "); } 
                                      | tipo_fichero {printf("tipo_no_estructurado_o_nombre_tipo -> tipo_fichero "); } 
                                      | tipo_enumerado {printf("tipo_no_estructurado_o_nombre_tipo -> tipo_enumerado "); } 
                                      | tipo_lista {printf("tipo_no_estructurado_o_nombre_tipo -> tipo_lista "); } 
                                      | tipo_lista_asociativa {printf("tipo_no_estructurado_o_nombre_tipo -> tipo_lista_asociativa "); } 
                                      | tipo_conjunto {printf("tipo_no_estructurado_o_nombre_tipo -> tipo_conjunto "); } 
                                      ;


tipo_estructurado : tipo_registro { printf("tipo_estructurado -> tipo_registro \n"); } 
                    | declaracion_clase { printf("tipo_estructurado -> declaracion_clase \n"); } 
                    ;

tipo_escalar :  ENTERO { printf("tipo_escalar -> ENTERO \n"); } 
                | REAL { printf("tipo_escalar -> REAL \n"); } 
                | BOOLEANO { printf("tipo_escalar -> BOOLEANO \n"); } 
                | CARACTER { printf("tipo_escalar -> CARACTER \n"); } 
                | CADENA { printf("tipo_escalar -> CADENA \n"); } 
                ;


tipo_fichero : FICHERO { printf("tipo_fichero -> FICHERO \n"); } 
              ;

tipo_enumerado : '(' lista_expresion_constante ')' { printf("tipo_enumerado -> '(' lista_expresion_constante ')' \n"); }
                |error ';' {yyerror; }
                ;
             
lista_expresion_constante  :  lista_expresion_constante ',' expresion_constante {printf("lista_expresion_constante -> lista_expresion_constante ',' expresion_constante");}
                              | expresion_constante {printf("lista_expresion_constante -> expresion_constante"); } 
                              ;

tipo_lista : LISTA  '[' lista_rangos  ']' DE tipo_no_estructurado_o_nombre_tipo {printf("tipo_lista -> LISTA  '[' lista_rangos  ']' DE tipo_no_estructurado_o_nombre_tipo ");}
            | LISTA DE tipo_no_estructurado_o_nombre_tipo {printf("tipo_lista ->  LISTA  DE tipo_no_estructurado_o_nombre_tipo ");}

lista_rangos  :  lista_rangos ',' rango {printf("lista_rangos -> lista_rangos ',' rango");}
                | rango {printf("lista_expresion_constante -> expresion_constante"); } 
                ;

rango : expresion DOS_PTOS expresion { printf("rango -> expresion DOS_PTOS expresion \n"); }
      | expresion DOS_PTOS expresion DOS_PTOS expresion  { printf("rango -> expresion DOS_PTOS expresion DOS_PTOS expresion \n"); }
      ;

tipo_lista_asociativa : LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo 
                        {printf("tipo_lista_asociativa -> LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo "); } 
                        ;

tipo_conjunto : CONJUNTO DE tipo_no_estructurado_o_nombre_tipo
                {printf("tipo_conjunto -> CONJUNTO DE tipo_no_estructurado_o_nombre_tipo"); } 
                ;

tipo_registro : REGISTRO '{'  lista_declaracion_campo  '}'{printf("tipo_registro -> REGISTRO '{'  lista_declaracion_campo  '}'"); } 
                | error REGISTRO {yyerror; }
                ;

lista_declaracion_campo  :  lista_declaracion_campo  declaracion_campo {printf("lista_declaracion_campo -> lista_declaracion_campo  declaracion_campo");}
                            | declaracion_campo {printf("lista_declaracion_campo -> lista_declaracion_campo"); } 
                            ;

declaracion_campo :  lista_nombresSC ':' tipo_no_estructurado_o_nombre_tipo ';' 
                    {printf("declaracion_campo -> lista_nombresSC ':' tipo_no_estructurado_o_nombre_tipo ';'"); } 
                  |error ';' {yyerror; }
                    ;

lista_nombresSC  :  lista_nombresSC  nombre {printf("lista_nombresSC -> lista_nombresSC  nombre");}
                  | nombre {printf("lista_nombresSC -> nombre"); } /*1 o + veces poner , y con corchetes no*/
;                    


/***************************************CONSTANTES****************************************/
declaracion_constantes : CONSTANTE lista_declaracion_constante {printf("declaracion_constantes -> CONSTANTE lista_declaracion_constante \n");}
                      ;

lista_declaracion_constante : lista_declaracion_constante  declaracion_constante {printf("lista_declaracion_constante -> lista_declaracion_constante  declaracion_constante");}
                           | declaracion_constante {printf("lista_declaracion_constante -> declaracion_constante"); } 
                           ;

declaracion_constante : nombre ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';' {printf("declaracion_constante -> nombre ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'");}
                      | error ';' {yyerror; }
                      ;

valor_constante : expresion {printf("valor_constante -> expresion \n");}
                    | '[' lista_valor_constante  ']'
                    | '[' lista_clave_valor  ']'
                    | '[' lista_campo_valor  ']'
                    ;

lista_valor_constante : lista_valor_constante ','  valor_constante {printf("lista_valor_constante -> lista_valor_constante ','  valor_constante");}
                           | valor_constante {printf("lista_valor_constante -> valor_constante"); } 
                           ;

lista_clave_valor : lista_clave_valor ','  clave_valor {printf("lista_clave_valor -> lista_clave_valor ','  clave_valor");}
                           | clave_valor {printf("lista_clave_valor -> clave_valor"); } 
                           ;

lista_campo_valor : lista_campo_valor ','  campo_valor {printf("lista_campo_valor -> lista_campo_valor ','  campo_valor");}
                           | campo_valor {printf("lista_campo_valor -> campo_valor"); } 
                           ; 

clave_valor : CTC_CADENA FLECHA_DOBLE valor_constante {printf("clave_valor -> CTC_CADENA FLECHA_DOBLE valor_constante \n");}

campo_valor : nombre FLECHA_DOBLE valor_constante {printf("campo_valor -> nombre FLECHA_DOBLE valor_constante \n");}

/***************************************VARIABLES***************************************/
declaracion_variables : VARIABLE lista_declaracion_variable {printf("declaracion_variables -> VARIABLE lista_declaracion_variable \n");} 

lista_declaracion_variable : lista_declaracion_variable  declaracion_variable {printf("lista_declaracion_variable -> lista_declaracion_variable   declaracion_variable");}
                           | declaracion_variable {printf("lista_declaracion_variable -> declaracion_variable \n"); } 
                           ; 


declaracion_variable : lista_nombres 
                        ':'
                        tipo_no_estructurado_o_nombre_tipo
                        '=' valor_constante 
                        ';' {printf("declaracion_variable -> lista_nombres ':'tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'\n"); } 
                        |lista_nombres 
                        ':'
                        tipo_no_estructurado_o_nombre_tipo
                        ';' {printf("declaracion_variable -> lista_nombres ':'tipo_no_estructurado_o_nombre_tipo ';'\n"); } 
                        |error ';' {yyerror; }
                        ;

/**************************************INTERFACES***************************************/
declaracion_interfaces : INTERFAZ lista_cabecera_subprogramaComi  {printf("declaracion_interfaces -> INTERFAZ lista_cabecera_subprogramaComi ';' \n"); } 

lista_cabecera_subprogramaComi : lista_cabecera_subprogramaComi  cabecera_subprograma ';' {printf("lista_cabecera_subprogramaComi -> lista_cabecera_subprogramaComi cabecera_subprograma ';'\n");}
                           | cabecera_subprograma ';' {printf("lista_cabecera_subprogramaComi -> cabecera_subprograma ';' \n"); } 
                           | error ';' {yyerror; }
                           ; 

/***************************************CLASES****************************************/

declaracion_clase : CLASE FINAL '(' lista_nombres ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'
                    {printf("declaracion_clase -> CLASE FINAL '(' lista_nombres ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}' "); } 
                    | CLASE FINAL '(' lista_nombres ')' '{' declaraciones_publicas declaraciones_privadas '}'
                    {printf("declaracion_clase -> CLASE FINAL '(' lista_nombres ')' '{' declaraciones_publicas declaraciones_privadas '}' "); } 
                    | CLASE FINAL '(' lista_nombres ')' '{' declaraciones_publicas declaraciones_semi '}'
                    {printf("declaracion_clase -> CLASE FINAL '(' lista_nombres ')' '{' declaraciones_publicas declaraciones_semi '}' "); } 
                    | CLASE FINAL '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'
                    {printf("declaracion_clase -> CLASE FINAL '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}' "); } 
                    | CLASE FINAL '{' declaraciones_publicas declaraciones_privadas '}'
                    {printf("declaracion_clase -> CLASE FINAL '{' declaraciones_publicas declaraciones_privadas '}' "); } 
                    | CLASE FINAL '{' declaraciones_publicas declaraciones_semi '}'
                    {printf("declaracion_clase -> CLASE FINAL '{' declaraciones_publicas declaraciones_semi '}' "); } 
                    | CLASE '(' lista_nombres ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'
                    {printf("declaracion_clase -> CLASE '(' lista_nombres ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}' "); }
                    | CLASE '(' lista_nombres ')' '{' declaraciones_publicas declaraciones_privadas '}'
                    {printf("declaracion_clase -> CLASE '(' lista_nombres ')''{' declaraciones_publicas declaraciones_privadas '}' "); }
                    | CLASE '(' lista_nombres ')' '{' declaraciones_publicas declaraciones_semi '}'
                    {printf("declaracion_clase -> CLASE '(' lista_nombres ')' '{' declaraciones_publicas declaraciones_semi '}' "); }
                    | CLASE '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'
                    {printf("declaracion_clase -> CLASE '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}' "); }
                    | CLASE '{' declaraciones_publicas declaraciones_privadas '}'
                    {printf("declaracion_clase -> CLASE '{' declaraciones_publicas declaraciones_privadas '}' "); }
                    | CLASE '{' declaraciones_publicas declaraciones_semi '}'
                    {printf("declaracion_clase -> CLASE '{' declaraciones_publicas declaraciones_semi '}'"); }
                    | error CLASE {yyerror; }
                    ;
                    
                    
/*declaracion_clase : CLASE
                        FINAL 
                         '(' lista_nombres ')'
                        '{'
                        declaraciones_publicas
                        declaraciones_semi 
                        declaraciones_privadas 
                        '}'  {printf("declaracion_clase -> CLASE "); }
                        ;*/


declaraciones_publicas :  PUBLICO  lista_declaracion_componente {printf("declaraciones_publicas -> PUBLICO  lista_declaracion_componente"); } 
                        | lista_declaracion_componente {printf("declaraciones_publicas -> lista_declaracion_componente"); } 
                        ;

lista_declaracion_componente  :  lista_declaracion_componente  declaracion_componente {printf("lista_declaracion_componente -> lista_declaracion_componente declaracion_componente");}
                                | declaracion_componente {printf("lista_declaracion_componente -> declaracion_componente"); } 
                                ;

declaraciones_semi : SEMIPUBLICO  lista_declaracion_componente {printf("declaraciones_semi -> SEMIPUBLICO  lista_declaracion_componente"); }
                    ;


declaraciones_privadas : PRIVADO declaracion_componente {printf("declaraciones_privadas -> PRIVADO  lista_declaracion_componente"); }
                        ;

declaracion_componente :  declaracion_tipo_anidado {printf("declaracion_componente -> declaracion_tipo_anidado"); }
                          | declaracion_constante_anidada {printf("declaracion_componente -> declaracion_constante_anidada"); }
                          | declaracion_atributos {printf("declaracion_componente -> declaracion_atributos"); }
                          | cabecera_subprograma ';' modificadores ';' {printf("declaracion_componente -> cabecera_subprograma ';' modificadores ';' "); }
                          | cabecera_subprograma ';' {printf("declaracion_componente -> cabecera_subprograma ';' "); }
                          ;

declaracion_tipo_anidado : TIPO declaracion_tipo {printf("declaracion_tipo_anidado -> TIPO declaracion_tipo "); }
                          ;

declaracion_constante_anidada : CONSTANTE declaracion_constante {printf("declaracion_constante_anidada -> CONSTANTE declaracion_constante "); }
                              ;

declaracion_atributos : lista_nombres ':' tipo_no_estructurado_o_nombre_tipo ';' {printf("declaracion_atributos -> lista_nombres ':' tipo_no_estructurado_o_nombre_tipo ';' "); }
                      ;

modificadores :  lista_modificadores {printf("modificadores -> lista_modificadores");}
                  ;

lista_modificadores : lista_modificadores  ',' modificador {printf("lista_modificadores -> lista_modificadores ',' modificador");}
                      | modificador {printf("lista_modificadores -> modificador"); } 
                      ;

modificador : GENERICO {printf("modificador -> GENERICO");}
              | ABSTRACTO {printf("modificador -> ABSTRACTO");}
              | ESPECIFICO {printf("modificador -> ESPECIFICO");}
              | FINAL {printf("modificador -> FINAL");}
              ;



/***********SUBPROGRAMAS************/

declaracion_subprograma : cabecera_subprograma bloque_subprograma { printf("declaracion_subprograma -> cabecera_subprograma bloque_subprograma"); };

bloque_subprograma: declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones { printf("bloque_subprograma -> declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones "); }
                    | declaracion_tipos declaracion_variables bloque_instrucciones { printf("bloque_subprograma -> declaracion_tipos declaracion_variables bloque_instrucciones "); }
                    | declaracion_constantes declaracion_variables bloque_instrucciones  { printf("bloque_subprograma -> declaracion_constantes declaracion_variables bloque_instrucciones "); }
                    | declaracion_tipos declaracion_constantes bloque_instrucciones  { printf("bloque_subprograma -> declaracion_tipos declaracion_constantes  bloque_instrucciones "); }
                    | declaracion_tipos bloque_instrucciones  { printf("bloque_subprograma -> declaracion_tipos bloque_instrucciones "); }
                    | declaracion_constantes bloque_instrucciones  { printf("bloque_subprograma ->  declaracion_constantes  bloque_instrucciones "); }
                    | declaracion_variables bloque_instrucciones  { printf("bloque_subprograma ->  declaracion_variables bloque_instrucciones "); }
                    | bloque_instrucciones  { printf("bloque_subprograma -> bloque_instrucciones "); }
                    ;


cabecera_subprograma :   cabecera_funcion  { printf("cabecera_subprograma -> cabecera_funcion "); }
                        | cabecera_procedimiento { printf("cabecera_subprograma -> cabecera_procedimiento "); }
                        | cabecera_constructor { printf("cabecera_subprograma -> cabecera_constructor "); }
                        | cabecera_destructor { printf("cabecera_subprograma -> cabecera_destructor "); }
                        ;

cabecera_funcion :  FUNCION 
                    nombre 
                    declaracion_parametros 
                    FLECHA_DOBLE
                    tipo_no_estructurado_o_nombre_tipo 
                    { printf("cabecera_funcion -> FUNCION nombre declaracion_parametros  FLECHA_DOBLE tipo_no_estructurado_o_nombre_tipo"); }
                    | FUNCION 
                    nombre 
                    FLECHA_DOBLE
                    tipo_no_estructurado_o_nombre_tipo { printf("cabecera_funcion -> FUNCION nombre FLECHA_DOBLE tipo_no_estructurado_o_nombre_tipo"); }
                    ;
                  
declaracion_parametros : '(' lista_parametros_formales ')' { printf("declaracion_parametros ->'(' lista_parametros_formales ')'"); }
                        | error ';' {yyerror; }
                          ;

lista_parametros_formales :    parametros_formales  { printf("lista_parametros_formales ->parametros_formales"); }
                              | lista_parametros_formales ';' parametros_formales  
                              { printf("lista_parametros_formales ->lista_parametros_formales ';' parametros_formales "); }
                              ;


parametros_formales : lista_nombres ':' tipo_no_estructurado_o_nombre_tipo MODIFICABLE  { printf("parametros_formales ->lista_nombres ':' tipo_no_estructurado_o_nombre_tipo MODIFICABLE"); }
                      | lista_nombres ':' tipo_no_estructurado_o_nombre_tipo { printf("parametros_formales ->lista_nombres ':' tipo_no_estructurado_o_nombre_tipo "); }
                      ;



cabecera_procedimiento : PROCEDIMIENTO nombre declaracion_parametros { printf("cabecera_procedimiento ->  PROCEDIMIENTO nombre declaracion_parametros  "); }
                        | PROCEDIMIENTO nombre  { printf("cabecera_procedimiento ->  PROCEDIMIENTO nombre   "); }
                        ;

cabecera_constructor : CONSTRUCTOR nombre declaracion_parametros { printf("cabecera_constructor -> CONSTRUCTOR nombre declaracion_parametros "); }
                      | CONSTRUCTOR nombre  { printf("cabecera_constructor -> CONSTRUCTOR nombre "); }
                      ;

cabecera_destructor : DESTRUCTOR nombre  { printf("cabecera_destructor -> DESTRUCTOR nombre "); }


/***********INSTRUCCIONES*************/
//preguntar errores y desplazamientos conflictos
instruccion : ';' { printf("instruccion -> ';'"); }
              | instruccion_asignacion { printf("instruccion -> instruccion_asignacion"); }
              | instruccion_salir { printf("instruccion -> instruccion_salir"); }
              | instruccion_devolver { printf("instruccion -> instruccion_devolver"); }
              | instruccion_llamada { printf("instruccion -> instruccion_llamada"); }
              | instruccion_si { printf("instruccion -> instruccion_si"); }
              | instruccion_casos { printf("instruccion -> instruccion_casos"); }
              | instruccion_bucle { printf("instruccion -> instruccion_bucle"); }
              | instruccion_probar_excepto { printf("instruccion -> instruccion_probar_excepto"); }
              | instruccion_lanzar { printf("instruccion -> instruccion_lanzar");}
              | error ';' {yyerror;}
              ;



instruccion_asignacion : objeto '=' expresion ';'{ printf("instruccion_asignacion -> objeto '=' expresion ';'"); }
                      

 
instruccion_salir : SALIR ';' { printf("instruccion_salir -> SALIR ';'\n"); }
                  | SALIR SI expresion ';' { printf("instruccion_salir -> SALIR SI expresion ';'\n"); }
                  ;


instruccion_devolver : DEVOLVER ';' { printf("\t instruccion_devolver ->   DEVOLVER ';'\n"); }
                    | DEVOLVER expresion ';' { printf("\t instruccion_devolver -> DEVOLVER expresion ';'\n"); }
                    ;


//* 0 O +*/

instruccion_llamada : llamada_subprograma ';' { printf("instruccion_llamada -> llamada_subprograma ';'\n"); };

llamada_subprograma : nombre '(' lista_expresiones ')' { printf("llamada_subprograma -> nombre '(' (expresion)* ')'\n"); };
                  |  nombre '('')' { printf("llamada_subprograma -> nombre '(' ')'\n"); };
                    ;


//una o mas veces
instruccion_si : SI expresion 
                ENTONCES bloque_instrucciones  { printf("instruccion_si -> SI expresion ENTONCES bloque_instrucciones\n "); } 
                
              | SI expresion 
                ENTONCES bloque_instrucciones  
                SINO bloque_instrucciones { printf("instruccion_si -> SI expresion ENTONCES bloque_instrucciones SINO bloque_instrucciones\n "); }   
              | error SI {yyerror; }
              ;


instruccion_casos : EN CASO expresion SEA lista_casos ';'  { printf("instruccion_casos -> EN CASO expresion SEA lista_casos ';'\n "); }   
                  |error EN CASO {yyerror; }
                  ;

caso : entradas FLECHA_DOBLE bloque_instrucciones  { printf("caso -> entradas FLECHA_DOBLE bloque_instrucciones \n"); } 

//entrada o vacio porque es 0 o mas
entradas : lista_entradas  entrada { printf("entradas -> lista_entradas  entrada \n"); } 
          | entrada { printf("entradas -> entrada  \n"); } 
          ;

lista_entradas: lista_entradas entrada '|' { printf("lista_entradas -> lista_entradas entrada '|' \n"); } 
              | entrada '|' { printf("lista_entradas -> lista_entradas entradas '|' \n"); } 
              ;

entrada : expresion { printf("entrada -> expresion  \n"); } 
        | rango { printf("entrada -> rango \n"); } 
        | OTRO { printf("entrada -> OTRO \n"); } 
        ;

lista_casos: lista_casos  caso {printf("lista_casos -> caso instruccion ");}
                  | caso {printf("lista_casos -> caso"); } /*1 o + veces poner , y con corchetes no*/
;





instruccion_bucle : clausula_iteracion bloque_instrucciones { printf("instruccion_bucle -> clausula_iteracion bloque_instrucciones"); }
                    ;


//Descendente es opcional 

clausula_iteracion : PARA nombre EN objeto { printf("clausula_iteracion -> PARA nombre EN objeto"); }
                    | REPITE ELEMENTO nombre EN rango DESCENDENTE { printf("clausula_iteracion -> REPITE ELEMENTO nombre EN rango DESCENDENTE "); }
                    | REPITE ELEMENTO nombre EN rango { printf("clausula_iteracion -> REPITE ELEMENTO nombre EN rango "); }
                    | MIENTRAS expresion { printf("clausula_iteracion -> MIENTRAS expresion "); }
                    | REPITE HASTA expresion { printf("clausula_iteracion -> REPITE HASTA expresion "); }
                    ;


//Hasta aqui esta bucle 
instruccion_probar_excepto : PROBAR bloque_instrucciones
                             EXCEPTO  lista_clausulas   //Una o mas veces  
                             FINALMENTE bloque_instrucciones 
                             { printf("instruccion_probar_excepto -> PROBAR bloque_instrucciones EXCEPTO '[' lista_clausulas ']' FINALMENTE bloque_instrucciones "); }//OPCIONAL
                            | PROBAR bloque_instrucciones 
                             EXCEPTO '[' lista_clausulas ']' { printf("instruccion_probar_excepto -> PROBAR bloque_instrucciones EXCEPTO '[' lista_clausulas ']'"); } 
                             ;

lista_clausulas: lista_clausulas  clausula_excepcion {printf("lista_clausulas -> lista_clausulas clausula_excepcion");}
                  | clausula_excepcion {printf("lista_clausulas -> clausula_excepcion"); } /*1 o + veces poner , y con corchetes no*/
                  ;

clausula_excepcion : CUANDO nombre EJECUTA bloque_instrucciones { printf("clausula_excepcion ->  CUANDO nombre EJECUTA bloque_instrucciones"); };

//Lanzar 
instruccion_lanzar : LANZAR nombre ';' { printf("instruccion_lanzar ->  LANZAR nombre ';'"); };

/*****/
/* expresiones */
/*****/

expresion_primaria : expresion_constante { printf("expresion_primaria ->  expresion_constante \n"); };
                    | objeto  { printf("expresion_primaria ->  expresion_constante \n"); };
                    | llamada_subprograma  { printf("expresion_primaria ->  llamada_subprograma \n"); };
                    | '(' expresion ')' { printf("expresion_primaria ->  '(' expresion ')' \n"); };
                    ;

objeto : nombre { printf("objeto -> nombre \n"); }
                | objeto '[' lista_expresiones ']' { printf("objeto -> objeto  '[' lista_expresiones ']' \n"); }; //tiene que llegar a la regla de no terminales./1 o + veces poner , y con corchetes no/
              | objeto '.' IDENTIFICADOR  { printf("objeto -> objeto '.' IDENTIFICADOR \n"); }
              ;
 
lista_expresiones: lista_expresiones ',' expresion {printf("lista_expresiones -> lista_expresiones ',' expresion ");}
                  | expresion {printf("lista_expresiones -> expresion"); } /*1 o + veces poner , y con corchetes no*/
;


expresion_constante : CTC_ENTERA { printf("expresion_constante -> CTC_ENTERA\n"); }
                    | CTC_REAL { printf("expresion_constante -> CTC_REAL\n"); }
                    | CTC_CADENA { printf("expresion_constante -> CTC_CADENA\n"); }
                    | CTC_CARACTER { printf("expresion_constante -> CTC_CARACTER\n"); }
                    | CTC_BOOLEANA { printf("expresion_constante -> CTC_BOOLEANA\n"); }
                    ;

/*expresion: expresion_or// es la hoja y tengo que llegar al tronco*/

expresion:expresion_and OR expresion { printf("expresion_or -> expresion_and '*' expresion"); }
              |expresion_and { printf("expresion -> expresion_and"); };


expresion_and: expresion_neglog AND expresion_and { printf("expresion_and -> expresion_neglog '*' expresion_and"); }
              | expresion_neglog{ printf("expresion_and -> expresion_neglog"); }
              ;

expresion_neglog: '!' expresion_operadores { printf("expresion_neglog ->'!' expresion_operadores"); }
                  | expresion_operadores { printf("expresion_neglog -> expresion_operadores"); }
                  ;

expresion_operadores: expresion_operadores '<' expresion_xorbin { printf("expresion_operadores -> expresion_operadores '<' expresion_xorbin "); }
                | expresion_operadores '>' expresion_xorbin { printf("expresion_operadores -> expresion_operadores '>' expresion_xorbin "); }
                | expresion_operadores LEQ expresion_xorbin { printf("expresion_operadores -> expresion_operadores LEQ expresion_xorbin "); }
                | expresion_operadores GEQ expresion_xorbin { printf("expresion_operadores -> expresion_operadores GEQ expresion_xorbin "); }
                | expresion_operadores EQ expresion_xorbin { printf("expresion_operadores -> expresion_operadores EQ expresion_xorbin "); }
                | expresion_operadores NEQ expresion_xorbin { printf("expresion_operadores -> expresion_operadores NEQ expresion_xorbin "); }
                | expresion_xorbin { printf("expresion_operadores -> expresion_xorbin "); }
                ;

expresion_xorbin: expresion_xorbin '@' expresion_orbin { printf("expresion_xorbin -> expresion_xorbin '@' expresion_orbin "); }
                | expresion_orbin { printf("expresion_xorbin -> expresion_orbin "); }
                ;

expresion_orbin: expresion_orbin '^' expresion_andbin { printf("expresion_orbin -> expresion_orbin '^' expresion_andbin "); }
                | expresion_andbin { printf("expresion_orbin -> expresion_andbin "); }
                ;

expresion_andbin: expresion_andbin '&' expresion_despla { printf("expresion_andbin -> expresion_andbin '&' expresion_despla "); }
                | expresion_despla { printf("expresion_andbin -> expresion_despla "); }
                ;      
     
expresion_despla : expresion_despla DESPI expresion_sum { printf("expresion_despla -> expresion_despla DESPI expresion_sum  "); }
                | expresion_despla DESPD expresion_sum { printf("expresion_despla -> expresion_despla DESPD expresion_sum "); }
                | expresion_sum { printf("expresion_despla -> expresion_sum "); }
                ;                      

expresion_sum: expresion_sum '+' expresion_res { printf("expresion_sum -> expresion_sum '+' expresion_res "); }
                | expresion_res { printf("expresion_sum -> expresion_res "); }
                ; 

expresion_res: expresion_res '-' expresion_multidivmod { printf("expresion_res -> expresion_res '-' expresion_multidivmod "); }
                | expresion_multidivmod { printf("expresion_res -> expresion_multidivmod "); }
                ; 

expresion_multidivmod: expresion_multidivmod '*' expresion_pot { printf("expresion_multidivmod -> expresion_multidivmod '*' expresion_pot "); }
                | expresion_multidivmod '/'expresion_pot { printf("expresion_multidivmod -> expresion_multidivmod '/' expresion_pot "); }
                | expresion_multidivmod '%' expresion_pot { printf("expresion_multidivmod -> expresion_multidivmod '%' expresion_pot "); }
                | expresion_pot { printf("expresion_multidivmod -> expresion_pot "); }
                ;
               

expresion_pot: expresion_unario POTENCIA expresion_pot  { printf("expresion_pot -> expresion_pot 'POTENCIA' expresion_unario"); }
              |expresion_unario { printf("expresion_pot -> expresion_unario"); };

expresion_unario: '-' expresion_primaria  { printf("expresion_unario ->'-' expresion_primaria"); }
                  |expresion_primaria  { printf("expresion_unario -> expresion_primaria"); }
                  ;



//******* AQUI SON COMENTARIOS DE COMO LO FUIMOS HACIENDO Y DE LA MANERA AMBIGUA HASTA COMO LLEGAMOS A LO QUE TENEMOS AHORA ES PARA GUIARNOS SOLAMENTE *****//
/*
deriva OR
          
          expresion_or:expresionor or expresion AND
                      expresion AND //lo mismo para todos y mirar precedencias
          or deriva or y AND
          y sucesivan
                   
*/

/*       
expresion: expresion_primaria 
          |'-' expresion %prec UMINUS { printf("expresion -> expresion '-' expresion");; }
          | expresion 'POTENCIA' expresion {printf("expresion -> expresion 'POTENCIA' expresion"); }
          | expresion '' expresion { printf("expresion -> expresion '' expresion"); }
          | expresion '/' expresion { printf("expresion -> expresion '/' expresion"); }
          | expresion '+' expresion { printf("expresion -> expresion  '+' expresion"); }
          | expresion '-' expresion { printf("expresion -> expresion '-' expresion"); }
          | expresion 'DESPI' expresion { printf("expresion -> expresion 'DESPI' expresion"); }
          | expresion 'DESPD' expresion { printf("expresion -> expresion 'DESPD' expresion"); }          
          | expresion '&' expresion {  printf("expresion -> expresion '&' expresion"); }
          | expresion '^' expresion {  printf("expresion -> expresion  '^' expresion"); }
          | expresion '@' expresion {  printf("expresion -> expresion '@' expresion"); }
          | expresion '<' expresion {  printf("expresion -> expresion '<' expresion"); }
          | expresion '>' expresion {  printf("expresion -> expresion '>' expresion"); }
          | expresion 'LEQ' expresion { printf("expresion -> expresion '=<' expresion"); }
          | expresion 'GEQ' expresion { printf("expresion -> expresion '>=' expresion"); }
          | expresion 'EQ' expresion { printf("expresion -> expresion ':=' expresion"); }
          | expresion 'NEQ' expresion {printf("expresion -> expresion '!=' expresion"); }
          | '!' expresion {printf("expresion -> expresion '!' expresion"); };*/

/*
expresion_neglog: '!' expresion_menor { printf("expresion_neglog ->'!' expresion_menor"); }
                  | expresion_menor { printf("expresion_neglog -> expresion_menor"); }
                  ;

expresion_menor: expresion_menor '<' expresion_mayor { printf("expresion_menor -> expresion_menor '<' expresion_mayor "); }
                | expresion_mayor { printf("expresion_menor -> expresion_mayor "); }
                ;

expresion_mayor: expresion_mayor '>' expresion_LEQ { printf("expresion_mayor -> expresion_mayor '>' expresion_LEQ "); }
                | expresion_LEQ { printf("expresion_mayor -> expresion_LEQ "); }
                ;


expresion_LEQ: expresion_LEQ LEQ expresion_GEQ { printf("expresion_LEQ -> expresion_LEQ LEQ expresion_GEQ "); }
                | expresion_GEQ { printf("expresion_LEQ -> expresion_GEQ "); }
                ;

expresion_GEQ: expresion_GEQ GEQ expresion_EQ { printf("expresion_GEQ -> expresion_GEQ GEQ expresion_EQ "); }
                | expresion_EQ { printf("expresion_GEQ -> expresion_EQ "); }
                ;

expresion_EQ: expresion_EQ EQ expresion_NEQ { printf("expresion_EQ -> expresion_EQ EQ expresion_NEQ "); }
                | expresion_NEQ { printf("expresion_EQ -> expresion_NEQ "); }
                ;

expresion_NEQ: expresion_NEQ NEQ expresion_xorbin { printf("expresion_NEQ -> expresion_NEQ NEQ expresion_xorbin "); }
                | expresion_xorbin { printf("expresion_NEQ -> expresion_xorbin "); }
                ;
*/
/*
expresion_res: expresion_res '-' expresion_mult { printf("expresion_res -> expresion_res '-' expresion_mult "); }
                | expresion_mult { printf("expresion_res -> expresion_mult "); }
                ; 

expresion_mult: expresion_mult '*' expresion_div { printf("expresion_mult -> expresion_mult '*' expresion_div "); }
                | expresion_div { printf("expresion_mult -> expresion_div "); }
                ;

expresion_div: expresion_div '/' expresion_mod { printf("expresion_div -> expresion_div '/' expresion_mod "); }
                | expresion_mod { printf("expresion_div -> expresion_mod "); }
                ; 

expresion_mod: expresion_mod '%' expresion_pot { printf("expresion_mod -> expresion_mod '%' expresion_pot "); }
                | expresion_pot { printf("expresion_mod -> expresion_pot "); }
                ;         */

/*
expresion_andbin: expresion_andbin '&' expresion_idespi { printf("expresion_andbin -> expresion_andbin '&' expresion_idespi "); }
                | expresion_idespi { printf("expresion_andbin -> expresion_idespi "); }
                ;      

expresion_idespi: expresion_idespi DESPI expresion_despd { printf("expresion_idespi -> expresion_idespi DESPI expresion_despd "); }
                | expresion_despd { printf("expresion_idespi -> expresion_despd "); }
                ;     

expresion_despd: expresion_despd DESPD expresion_sum { printf("expresion_despd -> expresion_despd DESPD expresion_sum "); }
                | expresion_sum { printf("expresion_despd -> expresion_sum "); }
                ;   
                */

%%

int yyerror(char *s) {
  fflush(stdout);
  printf("Error %s\n",s);
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