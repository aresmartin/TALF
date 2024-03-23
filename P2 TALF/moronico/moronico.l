%x comentarioLinea
%x comentarioMultilinea
%x comentarioMulti



%{
  #include <string.h>
  #include <stdlib.h>
  #include <stdio.h>
  #include "C:\Users\Yo\Desktop\moronico\moronico.h"
  int numLinea = 1;

%}

 /*PROBLEMA SI CADENA O COMENTARIOMULTILINEA NO RECONOCE QUE HAY QUE SUMAR UNA LINEA*/
 
IDENTIFICADOR  [a-zA-Z_]([0-9a-zA-Z_])*
CONSTANTE_NUM_ENTERA1 (0[0-7]*)|([1-9][0-9]*)|((0[xX])?[0-9a-fA-F]+)
CONSTANTE_NUM_ENTERA  [0-9]+|\\[0-7]+|\\[xX][0-9a-fA-F]+
CONSTANTE_NUM_REAL  (([0-9]+)?'[0-9]+)|(([0-9]+(\'[0-9]*)?|\'[0-9]+)(^[-+]?[0-9]+)?)
CARACTER \'([^\'\"\n\?\\])\'|(\'(\\[\'\"\?\\abfnrtv]|[^\'\n\\])\')|(\'([0-9]|([0-9]{2})|([0-1][0-9]{2})|2[0-4][0-9]|25[0-5])\')|(\'(\\[0-3]?[0-7]{1,2})\')|(\'(\\x[0-9a-fA-F]{1,2})\')|(\'\\\')
PATH (\"[/./../][^\n\"]+\")
CADENA\"(([^\'\"\n\?\\])|([0-9]|(\\[\'\"\?\\abfnrtv]|[^\'\n\\])|([0-9]{2})|([0-1][0-9]{2})|2[0-4][0-9]|25[0-5])|(\\[0-3]?[0-7]{1,2})|(\\x[0-9a-fA-F]{1,2})|(\\|\n))+\"
COMENTARIO \/\/.*
COMENTARIOMULTILINEA "/*"([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+"/" 
ESPACIO " "+
TABULADOR	"\t"+



%%

\n { numLinea++; }



[aA][bB][sS][tT][rR][aA][cC][tT][oO]  { printf("\nLinea %d - Palabra Reservada: %s\n",numLinea,yytext); return ABSTRACTO; }
[aA][sS][oO][cC][iI][aA][tT][iI][vV][aA] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return ASOCIATIVA; }
[bB][oO][oO][lL][eE][aA][nN][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return BOOLEANO; }
[cC][aA][bB][eE][cC][eE][rR][aA] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CABECERA; }
[cC][aA][dD][eE][nN][aA] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CADENA; }
[cC][aA][sS][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CASO; }
[cC][aA][rR][aA][cC][tT][eE][rR] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CARACTER; }
[cC][aA][rR][gG][aA] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CARGA; }
[cC][lL][aA][sS][eE] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CLASE; }
[cC][oO][nN][jJ][uU][nN][tT][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CONJUNTO; }
[cC][oO][nN][sS][tT][aA][nN][tT][eE] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CONSTANTE; }
[cC][uU][eE][rR][pP][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CUERPO; }
[cC][oO][nN][sS][tT][rR][uU][cC][tT][oO][rR] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CONSTRUCTOR; }
[cC][uU][aA][nN][dD][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CUANDO; }
[dD][eE][sS][cC][eE][nN][dD][eE][nN][tT][eE] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return DESCENDENTE; }
[dD][eE][sS][tT][rR][uU][cC][tT][oO][rR] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return DESTRUCTOR; }
[dD][eE] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return DE; }
[dD][eE][vV][oO][lL][vV][eE][rR] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return DEVOLVER; }
[eE][jJ][eE][cC][uU][tT][aA] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return EJECUTA; }
[eE][lL][eE][mM][eE][nN][tT][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return ELEMENTO; }
[eE][nN] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return EN; }
[eE][nN][tT][eE][rR][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return ENTERO; }
[eE][nN][tT][oO][nN][cC][eE][sS] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return ENTONCES; }
[eE][sS][pP][eE][cC][iI][fF][iI][cC][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return ESPECIFICO; }
[eE][xX][cC][eE][pP][tT][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return EXCEPTO; }
[fF][iI][cC][hH][eE][rR][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return FICHERO; }
[fF][iI][nN][aA][lL] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return FINAL; }
[fF][iI][nN][aA][lL][mM][eE][nN][tT][eE] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return FINALMENTE; }
[fF][uU][nN][cC][iI][oO][nN] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return FUNCION; }
[gG][eE][nN][eE][rR][iI][cC][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return GENERICO; }
[hH][aA][sS][tT][aA] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return HASTA; }
[iI][nN][tT][eE][rR][fF][aA][zZ] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return INTERFAZ; }
[lL][aA][nN][zZ][aA][rR] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return LANZAR; }
[lL][iI][sS][tT][aA] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return LISTA; }
[mM][iI][eE][nN][tT][rR][aA][sS] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return MIENTRAS; }
[mM][oO][dD][iI][fF][iI][cC][aA][bB][lL][eE] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return MODIFICABLE; }
[oO][tT][rR][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return OTRO; }
[pP][aA][qQ][uU][eE][tT][eE] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return PAQUETE; }
[pP][aA][rR][aA] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return PARA; }
[pP][rR][iI][vV][aA][dD][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return PRIVADO; }
[pP][rR][oO][bB][aA][rR] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return PROBAR; }
[pP][rR][oO][cC][eE][dD][iI][mM][iI][eE][nN][tT][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return PROCEDIMIENTO; }
[pP][rR][oO][gG][rR][aA][mM][aA] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return PROGRAMA; }
[pP][uU][bB][lL][iI][cC][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return PUBLICO; }
[rR][eE][gG][iI][sS][tT][rR][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return REGISTRO; }
[rR][eE][aA][lL] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return REAL; }
[rR][eE][pP][iI][tT][eE] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return REPITE; }
[sS][eE][aA] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return SEA; }
[sS][aA][lL][iI][rR] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return SALIR; }
[sS][eE][mM][iI][pP][uU][bB][lL][iI][cC][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return SEMIPUBLICO; }
[sS][iI] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return SI; }
[sS][iI][nN][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return SINO; }
[tT][iI][pP][oO] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return TIPO; }
[vV][aA][rR][iI][aA][bB][lL][eE] { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return VARIABLE; }

ctc_cadena { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CTC_CADENA; }
ctc_caracter { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CTC_CARACTER; }
ctc_entera { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CTC_ENTERA; }
ctc_real { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return CTC_REAL; }
identificador { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return IDENTIFICADOR; }
path { printf("linea %d, palabra reservada: %s\n", numLinea, yytext); return PATH; }
[vV][eE][rR][dD][aA][dD][eE][rR][oO] {printf("linea %d,palabra reservada: %s\n",numLinea,yytext);return CTC_BOOLEANA ;}
[fF][aA][lL][sS][oO] {printf("linea %d,palabra reservada: %s\n",numLinea,yytext);return CTC_BOOLEANA;}


{IDENTIFICADOR}  {printf("linea %d,Identificador: %s\n",numLinea,yytext); return IDENTIFICADOR;}
{CONSTANTE_NUM_ENTERA}  {printf("linea %d,Entero: %s\n",numLinea,yytext); return CTC_ENTERA;}
{CONSTANTE_NUM_REAL}  {printf("linea %d,Real: %s\n",numLinea,yytext); return CTC_REAL;}
{CARACTER} {printf("linea %d,Caracter: %s\n",numLinea,yytext); return CTC_CARACTER;}
{PATH} {printf("linea %d,Path: %s\n",numLinea,yytext); return PATH;}
{CADENA} {printf("linea %d,Cadena: %s\n",numLinea,yytext); return CTC_CADENA;}

{COMENTARIO} {printf("linea %d,comentario: %s\n",numLinea,yytext); return comentarioLinea;}
{COMENTARIOMULTILINEA} {printf("linea %d,comentarioMultilinea: %s\n",numLinea,yytext); return comentarioMultilinea;}





\:: {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return CUATRO_PTOS;}
\.. {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return DOS_PTOS;}
\{ {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return yytext[0];}
\} {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return yytext[0];}
\( {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return yytext[0];}
\) {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return yytext[0];}
\: {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return yytext[0];}
\; {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return yytext[0];}
\,  {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return yytext[0];}
\| {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return yytext[0];}
\=> {printf("linea %d,Delimitador: %s\n",numLinea,yytext);return FLECHA_DOBLE;}

  
\= {printf("linea %d,Operador: %s\n",numLinea,yytext);return yytext[0];}  

\+ {printf("linea %d,Operador: %s\n",numLinea,yytext);return yytext[0];}
\- {printf("linea %d,Operador: %s\n",numLinea,yytext);return yytext[0];}
\* {printf("linea %d,Operador: %s\n",numLinea,yytext);return yytext[0];}
\/ {printf("linea %d,Operador: %s\n",numLinea,yytext);return yytext[0];}
\% {printf("linea %d,Operador: %s\n",numLinea,yytext);return yytext[0];}
\** {printf("linea %d,Operador: %s\n",numLinea,yytext);return POTENCIA;}

\. {printf("linea %d,Operador: %s\n",numLinea,yytext);return yytext[0];}
\[ {printf("linea %d,Operador: %s\n",numLinea,yytext);return yytext[0];}
\] {printf("linea %d,Operador: %s\n",numLinea,yytext);return yytext[0];}

\<- {printf("linea %d,Operador: %s\n",numLinea,yytext);return DESPI;}
\-> {printf("linea %d,Operador: %s\n",numLinea,yytext);return DESPD;}
\@ {printf("linea %d,Operador: %s\n",numLinea,yytext);return yytext[0];}
\~ {printf("linea %d,Operador: %s\n",numLinea,yytext);return yytext[0];}
\& {printf("linea %d,Operador: %s\n",numLinea,yytext);return yytext[0];}

\< {printf("linea %d,Operador: %s\n",numLinea,yytext);return yytext[0];}
\> {printf("linea %d,Operador: %s\n",numLinea,yytext);return yytext[0];}
\=< {printf("linea %d,Operador: %s\n",numLinea,yytext);return LEQ;}
\>= {printf("linea %d,Operador: %s\n",numLinea,yytext);return GEQ;}
:=  {printf("linea %d,Operador: %s\n",numLinea,yytext);return EQ;}
\!= {printf("linea %d,Operador: %s\n",numLinea,yytext);return NEQ;}

\/\\ {printf("linea %d,Operador: %s\n",numLinea,yytext);return AND;}
\/= {printf("linea %d,Operador: %s\n",numLinea,yytext);return OR;}
\! {printf("linea %d,Operador: %s\n",numLinea,yytext);return CTC_CARACTER;}




{ESPACIO}	;
{TABULADOR}	;

.	printf("Error en la linea %d, No reconocido: %s\n",numLinea,yytext);



%%
//Seccion de rutinas de usuario


//nos indica que el analisis se ha terminado:
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

  //recorrer todo el archivo:
  while (yylex());
  }
