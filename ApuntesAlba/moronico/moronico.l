%x comentarioLinea
%x comentarioMultilinea


%{
  #include <string.h>
  #include <stdlib.h>
  #include <stdio.h>
  #include "C:\Users\Yo\Desktop\moronico\moronico.h"
  int numLinea = 1;

%}

 
 
IDENTIFICADOR [A-Za-z_][A-Za-z0-9_]*
CONSTANTE_NUM_ENTERA [0-9]+|0[0-7]+|0[xX][0-9a-fA-F]+
CONTANTE_NUM_REAL ((([0-9]*\.[0-9]+)|(0[xX][0-9a-fA-F]*\.[0-9a-fA-F]+))([eE][+-]?[0-9]+)?)|(([0-9]+)|(0[Xx][0-9a-fA-F]+))([eE][+-]?[0-9]+)
CAR [^\n'\\]
CARCADENA [^\n\\"]
ESCAPADOS (\\'|\\\"|\\\?|\\\\|\\n|\\r|\\t|\\v)



OCTAL (\\[0-3]?[0-7]{1,2})
HEX (\\x[0-9a-fA-F]{1,2})
CARACTER ({CAR})|({ESCAPADOS})|({OCTAL})|({HEX})
CADENA1 ({CARCADENA})|({ESCAPADOS})|({OCTAL})|({HEX})
DELIMITADOR [.,:;(){}\[\]]



 
SP [ \t]

%%



\n { numLinea++; }

abstracto  { printf("\nLinea %d - Palabra Reservada: %s\n",numLinea,yytext); return ABSTRACTO; }
and { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return AND; }
asociativa { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return ASOCIATIVA; }
booleano { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return BOOLEANO; }
cabecera { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CABECERA; }
cadena { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CADENA; }
caso { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CASO; }
caracter { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CARACTER; }
carga { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CARGA; }
clase { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CLASE; }
conjunto { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CONJUNTO; }
constante { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CONSTANTE; }
cuerpo { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CUERPO; }
ctc_booleana { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CTC_BOOLEANA; }
ctc_cadena { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CTC_CADENA; }
ctc_caracter { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CTC_CARACTER; }
ctc_entera { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CTC_ENTERA; }
ctc_real { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CTC_REAL; }
constructor { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CONSTRUCTOR; }
cuando { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CUANDO; }
cuatro_ptos { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CUATRO_PTOS; }
descendente { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return DESCENDENTE; }
despd { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return DESPD; }
despi { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return DESPI; }
destructor { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return DESTRUCTOR; }
de { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return DE; }
devolver { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return DEVOLVER; }
dos_ptos { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return DOS_PTOS; }
ejecuta { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return EJECUTA; }
elemento { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return ELEMENTO; }
en { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return EN; }
entero { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return ENTERO; }
entonces { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return ENTONCES; }
eq { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return EQ; }
especifico { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return ESPECIFICO; }
excepto { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return EXCEPTO; }
fichero { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return FICHERO; }
final { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return FINAL; }
finalmente { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return FINALMENTE; }
flecha_doble { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return FICHERO; }
funcion { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return FUNCION; }
geq { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return GEQ; }
gnerico { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return GENERICO; }
hasta { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return HASTA; }
identificador { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return IDENTIFICADOR; }
interfaz { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return INTERFAZ; }
lanzar { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return LANZAR; }
leq { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return LEQ; }
lista { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return LISTA; }
mientras { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return MIENTRAS; }
modificable { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return MODIFICABLE; }
neq { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return NEQ; }
otro { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return OTRO; }
or { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return OR; }
paquete { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return PAQUETE; }
para { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return PARA; }
path { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return PATH; }
potencia { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return POTENCIA; }
privado { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return PRIVADO; }
probar { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return PROBAR; }
procedimiento { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return PROCEDIMIENTO; }
programa { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return PROGRAMA; }
publico { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return PUBLICO; }
registro { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return REGISTRO; }
real { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return REAL; }
repite { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return REPITE; }
sea { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return SEA; }
salir { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return SALIR; }
semipublico { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return SEMIPUBLICO; }
si { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return SI; }
sino { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return SINO; }
tipo { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return TIPO; }
variable { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return VARIABLE; }

[a-zA-Z](_[0-9]*|[a-zA-Z])*  {printf("linea %d - Identificador: %s\n",numLinea,yytext); return IDENTIFICADOR;}



\{ {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return CTC_CARACTER;}
\} {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return CTC_CARACTER;}
\( {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return CTC_CARACTER;}
\) {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return CTC_CARACTER;}
\[ {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return CTC_CARACTER;}
\] {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return CTC_CARACTER;}
\| {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return CTC_CARACTER;}
: {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return CTC_CARACTER;}
\; {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return CTC_CARACTER;}
,  {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return CTC_CARACTER;}
-> {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return DESPD;}
\.\. {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return CTC_CARACTER;}

  /*Reglas para Operadores*/  
  
\+ {printf("linea %d,Operador: %s\n",numLinea,yytext);return DOS_PTOS;}
-  {printf("linea %d,Operador: %s\n",numLinea,yytext);return DOS_PTOS;}
\* {printf("linea %d,Operador: %s\n",numLinea,yytext);return DOS_PTOS;}
%  {printf("linea %d,Operador: %s\n",numLinea,yytext);return DOS_PTOS;}
@  {printf("linea %d,Operador: %s\n",numLinea,yytext);return DOS_PTOS;}
&  {printf("linea %d,Operador: %s\n",numLinea,yytext);return DOS_PTOS;} 
=  {printf("linea %d,Operador: %s\n",numLinea,yytext);return DOS_PTOS;}
\. {printf("linea %d,Operador: %s\n",numLinea,yytext);return DOS_PTOS;}
\< {printf("linea %d,Operador: %s\n",numLinea,yytext);return DOS_PTOS;}
\> {printf("linea %d,Operador: %s\n",numLinea,yytext);return DOS_PTOS;}
\/= {printf("linea %d,Operador: %s\n",numLinea,yytext);return OR;}
\:: {printf("linea %d,Operador: %s\n",numLinea,yytext);return CUATRO_PTOS;}
\<= {printf("linea %d,Operador: %s\n",numLinea,yytext);return DOS_PTOS;}
\>= {printf("linea %d,Operador: %s\n",numLinea,yytext);return DOS_PTOS;}
:=  {printf("linea %d,Operador: %s\n",numLinea,yytext);return DOS_PTOS;}
\*\* {printf("linea %d,Operador: %s\n",numLinea,yytext);return DOS_PTOS;}


%%
/*Seccion de rutinas de usuario*\


/*nos indica que el analisis se ha terminado:*\
int yywrap()
{
  return(1);
}

int main(int argc, char *argv[]) {

  //lee el archivo 
  if (argc < 2) {
    printf("Uso: ./moronico NombreArchivo\n");
    exit(1);
    }

  yyin = fopen(argv[1],"r");

  /*recorrer todo el archivo:*\
  while (yylex());
  }
