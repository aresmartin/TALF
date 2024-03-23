%{ 
   #include <string.h>
   #include <stdlib.h> 

   int mays = 0, min = 0, mix = 0, enteros = 0, reales = 0;
   int suma_enteros = 0;
   double suma_reales = 0;
%}

%%

[a-z]+                             min++;

[A-Z]+                             mays++;

[a-zA-Z]+                          mix++;

[0-9]+                             enteros++; suma_enteros += atoi(yytext);

[0-9]*\.?[0-9]+([eE][+-]?[0-9]+)?  reales++; suma_reales += atof(yytext);

.                                  ;
\n                                 ;

%%

int yywrap() 
{ 
    return 1; 
}

int main(int argc, char *argv []) 
{
    yyin = fopen(argv[1],"r");
    yylex(); 
    printf("No. mays = %d\nNo. main = %d\nNo. mix = %d\n\n", mays, min, mix);
    printf("No. enteros = %d\nNo. reales = %d\n\n", enteros, reales);
    printf("Suma enteros = %d\nSuma reales = %f\n\n", suma_enteros, suma_reales);
}