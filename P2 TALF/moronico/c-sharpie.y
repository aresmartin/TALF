%{
  #include <stdlib.h>
  #include <stdio.h>
  extern FILE *yyin;
  extern int linea;

  #define YYDEBUG 1
   void yyerror(char *s);
%}

%token ABSTRACT BASE BOOLEAN BREAK CASE CATCH CHAR CLASS CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FINALLY
%token FLOAT FOR GOTO IF INT INTERFACE INTERNAL LONG NAMESPACE NEW OVERRIDE PRIVATE PROTECTED PUBLIC RETURN
%token SEALED SHORT SIGNED STATIC STRUCT SWITCH THIS THROW TRY TYPEDEF UNION UNSIGNED USING VIRTUAL VOID
%token WHILE

%token TRUE FALSE SIZEOF IDENTIFICADOR ENTERO CADENA REAL CARACTER PTR_ACCESO INC DEC DESPI DESPD LE GE EQ
%token NEQ AND OR MULT_ASIG DIV_ASIG MOD_ASIG SUMA_ASIG RESTA_ASIG DESPI_ASIG DESPD_ASIG AND_ASIG XOR_ASIG
%token OR_ASIG
%start modulo
%%



/************/
/* PROGRAMA */
/************/

declaracionMasUno: declaracionMasUno declaracion { printf ("declaracionMasUno-> declaracionMasUno  declaracion\n");}
| declaracion { printf ("declaracionMasUno-> declaracion\n");} 
;
directiva_usoMasUno:  directiva_usoMasUno directiva_uso { printf ("directiva_usoMasUno-> directiva_usoMasUno directiva_uso \n");}
| directiva_uso { printf ("directiva_usoMasUno-> directiva_uso \n");}
;

modulo : directiva_usoMasUno declaracionMasUno
{ printf (" modulo -> directiva_usoMasUno declaracionMasUno\n");}
| declaracionMasUno
{ printf (" modulo -> declaracionMasUno\n");}
;
declaracion: declaracion_espacio_nombres
| declaracion_variable { printf ("declaracion-> declaracion_variable\n");}
| declaracion_tipo { printf ("declaracion-> declaracion_tipo \n");}
| declaracion_funcion { printf ("declaracion-> declaracion_funcion \n");}
;

directiva_uso : USING  IDENTIFICADOR '='  nombre_tipo_o_espacio_nombres ';' 
{ printf ("directiva_uso-> IDENTIFICADOR '='  nombre_tipo_o_espacio_nombres ';'  \n");}
| USING nombre_tipo_o_espacio_nombres ';' { printf ("directiva_uso-> nombre_tipo_o_espacio_nombres ';'  \n");}
;

identificador_con_tiposMasUno:  identificador_con_tiposMasUno IDENTIFICADOR  '.' { printf ("identificador_con_tiposMasUno-> identificador_con_tiposMasUno IDENTIFICADOR '.' \n");}
| IDENTIFICADOR '.' { printf ("identificador_con_tiposMasUno-> IDENTIFICADOR '.'\n");}
;

nombre_tipo_o_espacio_nombres :  identificador_con_tiposMasUno  identificador_con_tipos { printf ("nombre_tipo_o_espacio_nombres-> identificador_con_tiposMasUno '.' identificador_con_tipos\n");}
| identificador_con_tipos { printf ("nombre_tipo_o_espacio_nombres-> identificador_con_tipos\n");}
;

nombre_tipo_o_espacio_nombresMasUno: nombre_tipo_o_espacio_nombresMasUno ',' nombre_tipo_o_espacio_nombres  { printf ("nombre_tipo_o_espacio_nombresMasUno-> nombre_tipo_o_espacio_nombresMasUno ',' nombre_tipo_o_espacio_nombres \n");}
| nombre_tipo_o_espacio_nombres { printf ("nombre_tipo_o_espacio_nombresMasUno:-> nombre_tipo_o_espacio_nombres \n");}
;


identificador_con_tipos : IDENTIFICADOR   { printf ("identificador_con_tipos-> IDENTIFICADOR \n");}
| IDENTIFICADOR '(' nombre_tipo_o_espacio_nombresMasUno ')'  { printf ("identificador_con_tipos-> IDENTIFICADOR '(' nombre_tipo_o_espacio_nombresMasUno ')' \n");}
;

/*******************/
/* ESPACIO NOMBRES */
/*******************/

declaracion_espacio_nombres : NAMESPACE identificador_anidado bloque_espacio_nombres 
{ printf ("declaracion_espacio_nombres-> NAMESPACE identificador_anidado bloque_espacio_nombres  \n");}
| error ';' { printf("Bad declaracion_espacio_nombres \n"); yyerrok; }
;

identificador_anidado: identificador_con_tiposMasUno IDENTIFICADOR
{ printf ("identificador_anidado -> Identificador_con_tiposMasUno IDENTIFICADOR  \n");}
| IDENTIFICADOR { printf ("identificador_anidado ->  IDENTIFICADOR  \n");}
;






bloque_espacio_nombres : '{' declaracionMasUno '}' { printf ("bloque_espacio_nombres-> '{' declaracionMasUno '}' \n");}
| '{' directiva_usoMasUno  declaracionMasUno '}'  { printf ("bloque_espacio_nombres-> '{' directiva_usoMasUno declaracionMasUno '}' \n");}
;


/*************/
/* VARIABLES */
/*************/
nombreMasUno :  nombreMasUno ',' nombre
{ printf (" nombreMasUno -> nombreMasUno , nombre\n");}
| nombre
{ printf (" nombreMasUno -> nombre\n");}

;

declaracion_variable : tipo nombreMasUno ';'
{ printf (" declaracion_variable -> tipo nombreMasUno ';'\n");}
;

tipo : '<' nombre_tipo_o_espacio_nombres '>'
{ printf (" tipo -> '<' nombre_tipo_o_espacio_nombres '>'\n");}
| tipo_escalar
{ printf (" tipo -> tipo_escalar\n");}
;

tipo_escalar : signo longitud tipo_basico { printf (" tipo_escalar -> signo longitud tipo_basico\n");}
| signo tipo_basico { printf (" tipo_escalar -> signo tipo_basico\n");}
| longitud tipo_basico { printf (" tipo_escalar -> longitud tipo_basico\n");}
| tipo_basico { printf (" tipo_escalar -> tipo_basico\n");}
;

longitud : SHORT
{ printf (" longitud -> 'short'\n");}
| LONG
{ printf (" longitud -> 'long'\n");}
;

signo : SIGNED
{ printf (" signo -> 'signed'\n");}
| UNSIGNED
{ printf (" signo -> 'unsigned'\n");}
;

tipo_basico : CHAR
{ printf (" tipo_basico -> 'char'\n");}
| INT
{ printf (" tipo_basico -> 'int'\n");}
| FLOAT
{ printf (" tipo_basico -> 'float'\n");}
| DOUBLE
{ printf (" tipo_basico -> 'double'\n");}
| BOOLEAN
{ printf (" tipo_basico -> 'boolean'\n");}
;

nombre : dato '=' valor
{ printf (" nombre -> dato '=' valor\n");}
| dato
{ printf (" nombre -> dato\n");}
| error ';' { printf("nombre\n"); yyerrok; }
;

asteriscoMasUno: asteriscoMasUno '*' 
{ printf (" asteriscoMasUno-> asteriscoMasUno '*' \n");}
| '*'  { printf (" asteriscoMasUno-> '*' \n");}
;
dato : asteriscoMasUno dato_indexado
{ printf (" dato -> asteriscoMasUno dato_indexado\n");}
| dato_indexado
{ printf (" dato -> dato_indexado\n");}
;




corchetesMasUnoCon0OMasexpr : '[' expresionMasUno ']'
{ printf (" corchetesMasUnoCon0OMasexpr -> '[' expresionMasUno ']'\n");}
| corchetesMasUnoCon0OMasexpr '[' expresionMasUno ']'
{ printf (" corchetesMasUnoCon0OMasexpr -> corchetesMasUnoCon0OMasexpr '[' expresionMasUno ']'\n");}
;

dato_indexado : IDENTIFICADOR corchetesMasUnoCon0OMasexpr 
{ printf (" dato_indexado -> IDENTIFICADOR corchetesMasUnoCon0OMasexpr\n");}
| IDENTIFICADOR
{ printf (" dato_indexado -> IDENTIFICADOR\n");}
;

valorMasUno : valorMasUno ',' valor
{ printf (" valorMasUno -> valorMasUno , valor\n");}
| valor
{ printf (" valorMasUno -> valor\n");}
| 
;

valor : expresion
{ printf (" valor -> expresion\n");}
| '[' valorMasUno ']'
{ printf (" valor -> '[' valorMasUno ']'\n");}
;



/*********/
/* TIPOS */
/*********/
declaracion_tipo : nombramiento_tipo { printf ("declaracion_tipo -> nombramiento_tipo\n");}
| declaracion_struct_union { printf ("declaracion_tipo -> declaracion_struct_union\n");}
| declaracion_interfaz { printf ("declaracion_tipo -> declaracion_interfaz\n");}
| declaracion_enum { printf ("declaracion_tipo -> declaracion_enum\n");}
| declaracion_clase  { printf ("declaracion_tipo -> declaracion_clase\n");}
;

nombramiento_tipo : TYPEDEF tipo IDENTIFICADOR ';' 
{ printf ("nombramiento_tipo -> TYPEDEF tipo ID\n");}
;


 
declaracion_campoMasUno: declaracion_campoMasUno declaracion_campo  
{ printf ("declaracion_campoMasUno-> declaracion_campoMasUno declaracion_campo  \n");}
| declaracion_campo  { printf ("declaracion_campoMasUno-> declaracion_campo   \n");};

declaracion_struct_union :
 struct_union  '{' declaracion_campoMasUno '}'
 { printf ("declaracion_struct_union->  struct_union  '{' declaracion_campoMasUno '}'\n");}
| struct_union IDENTIFICADOR '{' declaracion_campoMasUno '}'
{printf ("declaracion_struct_union-> IDENTIFICADOR struct_union lavesMasUnoConCeroOVariasDeclaracion_campoMasUno\n");}
| modificadorMasUno   struct_union '{' declaracion_campoMasUno '}'
{printf ("declaracion_struct_union-> modificadorMasUno struct_union lavesMasUnoConCeroOVariasDeclaracion_campoMasUno\n");}
| modificadorMasUno IDENTIFICADOR   '{' declaracion_campoMasUno '}' 
{printf ("declaracion_struct_union->modificadorMasUno IDENTIFICADOR   '{' declaracion_campoMasUno '}'\n");}
;

modificador : 
NEW { printf ("modificador ->  NEW \n");}
| PUBLIC { printf ("modificador ->  PUBLIC \n");}
| PROTECTED{ printf ("modificador ->  PROTECTED \n");}
| INTERNAL { printf ("modificador ->  INTERNAL \n");}
| PRIVATE{ printf ("modificador ->  PRIVATE \n");}
| STATIC{ printf ("modificador ->  STATIC \n");}
| VIRTUAL{ printf ("modificador ->  VIRTUAL \n");}
| SEALED{ printf ("modificador ->  SEALED \n");}
| OVERRIDE{ printf ("modificador ->  OVERRIDE \n");}
| ABSTRACT { printf ("modificador ->  ABSTRACT \n");}
| EXTERN{ printf ("modificador ->  EXTERN \n");}
;
struct_union : 
STRUCT  { printf ("struct_union ->  STRUCT \n");}
| UNION { printf ("modificador ->  UNION \n");}
;

declaracion_campo : tipo nombreMasUno ';' { printf ("declaracion_campo ->   tipo nombreMasUno ';'\n");}
| declaracion_struct_union nombreMasUno ';' { printf ("declaracion_campo -> declaracion_struct_union nombreMasUno ';'\n");}
;
modificadorMasUno: modificadorMasUno modificador  { printf ("modificadorMasUno -> modificadorMasUno modificador \n");}
| modificador  { printf ("modificadorMasUno -> modificador \n");}
;
declaracion_interfaz : INTERFACE IDENTIFICADOR  cuerpo_interfaz
{ printf ("declaracion_interfaz -> INTERFACE IDENTIFICADOR  cuerpo_interfaz \n");}
| INTERFACE IDENTIFICADOR  herencia  cuerpo_interfaz
{ printf ("declaracion_interfaz -> INTERFACE IDENTIFICADOR  herencia  cuerpo_interfaz\n");}
| modificadorMasUno INTERFACE IDENTIFICADOR cuerpo_interfaz
{ printf ("declaracion_interfaz -> modificadorMasUno INTERFACE IDENTIFICADOR cuerpo_interfaz\n");}
| modificadorMasUno INTERFACE IDENTIFICADOR herencia cuerpo_interfaz
{ printf ("declaracion_interfaz -> modificadorMasUno INTERFACE IDENTIFICADOR herencia cuerpo_interf\n");}
;

herencia : ':' nombre_tipo_o_espacio_nombresMasUno
{ printf ("herencia -> ':' nombre_tipo_o_espacio_nombresMasUno\n");}
;

declaracion_metodo_interfazMasUno: declaracion_metodo_interfazMasUno declaracion_metodo_interfaz
{ printf ("declaracion_metodo_interfazMasUno -> declaracion_metodo_interfazMasUno declaracion_metodo_interfaz\n");}
| declaracion_metodo_interfaz { printf ("declaracion_metodo_interfaz -> declaracion_metodo_interfaz\n");}
;

cuerpo_interfaz : '{' declaracion_metodo_interfazMasUno '}' { printf ("cuerpo_interfaz -> '{' declaracion_metodo_interfazMasUno'}'\n");}
|  '{' '}' { printf ("cuerpo_interfaz -> '{''}'\n");}

;
declaracion_metodo_interfaz :  firma_funcion ';' { printf ("declaracion_metodo_interfaz -> firma_funcion\n");}

| NEW firma_funcion ';' { printf ("declaracion_metodo_interfaz -> firma_funcion\n");}

;




declaracion_enum :  ENUM IDENTIFICADOR  ':' tipo_escalar  cuerpo_enum { printf ("declaracion_enum -> ENUM IDENTIFICADOR ':' tipo_escalar cuerpo_enum\n");}
|  ENUM IDENTIFICADOR cuerpo_enum { printf ("declaracion_enum -> ENUM IDENTIFICADOR cuerpo_enum\n");}
| modificadorMasUno ENUM IDENTIFICADOR  ':' tipo_escalar  cuerpo_enum 
{ printf ("declaracion_enum -> modificadorMasUno ENUM IDENTIFICADOR\n");}
|  modificadorMasUno ENUM IDENTIFICADOR  ':'  cuerpo_enum { printf ("declaracion_enum -> ENUM IDENTIFICADOR\n");}

;


declaracion_miembro_enumMasUno: declaracion_miembro_enumMasUno declaracion_miembro_enum
 { printf ("declaracion_miembro_enumMasUno -> declaracion_miembro_enumMasUno declaracion_miembro_enum\n");}
|declaracion_miembro_enum  { printf ("declaracion_miembro_enumMasUno -> declaracion_miembro_enum\n");}
;


cuerpo_enum : '{'  declaracion_miembro_enumMasUno  '}'
{ printf ("cuerpo_enum -> '{'  declaracion_miembro_enumMasUno  '}'\n");}
;

declaracion_miembro_enum : IDENTIFICADOR  '=' expresion 
{ printf ("declaracion_miembro_enum -> IDENTIFICADOR  '=' expresion\n");}
|  IDENTIFICADOR { printf ("declaracion_miembro_enum -> IDENTIFICADOR\n");}
;


/**********/
/* CLASES */
/**********/


declaracion_clase : modificadorMasUno CLASS IDENTIFICADOR  cuerpo_clase
{ printf ("declaracion_clase -> modificadorMasUno CLASS IDENTIFICADOR  cuerpo_clase\n");}
| CLASS IDENTIFICADOR  cuerpo_clase
{ printf ("declaracion_clase -> CLASS IDENTIFICADOR  cuerpo_clase\n");}
| modificadorMasUno CLASS IDENTIFICADOR  herencia cuerpo_clase
{ printf ("declaracion_clase -> modificadorMasUno CLASS IDENTIFICADOR  herencia cuerpo_clase\n");}
| CLASS IDENTIFICADOR  herencia cuerpo_clase
{printf ("declaracion_clase -> modificadorMasUno CLASS IDENTIFICADOR  herencia cuerpo_clase\n");}

;

declaracion_elemento_claseMasUno : declaracion_elemento_clase
{ printf (" declaracion_elemento_claseMasUno -> declaracion_elemento_clase\n");}
| declaracion_elemento_claseMasUno declaracion_elemento_clase
{ printf (" declaracion_elemento_claseMasUno -> declaracion_elemento_claseMasUno declaracion_elemento_clase\n");}
;


cuerpo_clase : '{' declaracion_elemento_claseMasUno '}'
{ printf (" cuerpo_clase -> '{' declaracion_elemento_claseMasUno '}'\n");}
;

declaracion_elemento_clase : declaracion_tipo
{ printf (" declaracion_elemento_clase -> declaracion_tipo\n");}
| declaracion_atributo
{ printf (" declaracion_elemento_clase -> declaracion_atributo\n");}
| declaracion_metodo
{ printf (" declaracion_elemento_clase -> declaracion_metodo\n");}
| declaracion_constructor
{ printf (" declaracion_elemento_clase -> declaracion_constructor\n");}
| declaracion_destructor
{ printf (" declaracion_elemento_clase -> declaracion_destructor\n");}
;

declaracion_atributo : modificadorMasUno declaracion_variable
{ printf (" declaracion_atributo -> modificadorMasUno declaracion_variable\n");}
| declaracion_variable
{ printf (" declaracion_atributo -> declaracion_variable\n");}
;

declaracion_metodo : modificadorMasUno firma_funcion bloque_instrucciones
{ printf (" declaracion_metodo -> modificadorMasUno firma_funcion bloque_instrucciones\n");}
| firma_funcion bloque_instrucciones
{ printf (" declaracion_metodo -> firma_funcion bloque_instrucciones\n");}
;




declaracion_constructor : modificadorMasUno cabecera_constructor bloque_instrucciones
{ printf (" declaracion_constructor -> modificadorMasUno cabecera_constructor bloque_instrucciones\n");}
| cabecera_constructor bloque_instrucciones
{ printf (" declaracion_constructor -> cabecera_constructor bloque_instrucciones\n");}
;

cabecera_constructor : IDENTIFICADOR parametros inicializador_constructor
{ printf (" cabecera_constructor -> IDENTIFICADOR parametros inicializador_constructor\n");}
| IDENTIFICADOR inicializador_constructor
{ printf (" cabecera_constructor -> IDENTIFICADOR inicializador_constructor\n");}
| IDENTIFICADOR parametros
{ printf (" cabecera_constructor -> IDENTIFICADOR parametros\n");}

;

inicializador_constructor : ':' BASE parametros
{ printf (" inicializador_constructor -> ':' BASE parametros\n");}
| ':' THIS parametros
{ printf (" inicializador_constructor -> ':' THIS parametros\n");}
;

declaracion_destructor : modificadorMasUno cabecera_destructor bloque_instrucciones
{ printf (" declaracion_destructor -> modificadorMasUno cabecera_destructor bloque_instrucciones\n");}
| cabecera_destructor bloque_instrucciones
{ printf (" declaracion_destructor -> cabecera_destructor bloque_instrucciones\n");}
;

cabecera_destructor : '~' IDENTIFICADOR '(' ')'
{ printf (" cabecera_destructor -> '~' IDENTIFICADOR '(' ')'\n");}
;




/*************/
/* FUNCIONES */
/*************/
declaracion_funcion : firma_funcion bloque_instrucciones
{ printf (" declaracion_funcion-> firma_funcion bloque_instrucciones\n");}
;

firma_funcion : VOID IDENTIFICADOR parametros
{ printf (" firma_funcion-> VOID IDENTIFICADOR parametros\n");}
| tipo asteriscoMasUno IDENTIFICADOR parametros
{ printf (" firma_funcion -> tipo asteriscoMasUno IDENTIFICADOR parametros\n");}
| tipo IDENTIFICADOR parametros
{ printf (" firma_funcion -> tipo IDENTIFICADOR parametros\n");}
;

argumentosMasUno : argumentosMasUno argumentos ';'
{ printf (" argumentosMasUno -> argumentosMasUno argumentos ';'\n");}
 |argumentos ';'
{ printf (" argumentosMasUno ->  argumentos ';'\n");}

;

parametros : '(' argumentosMasUno argumentos ')'
{ printf (" parametros -> '(' argumentosMasUno argumentos ')'\n");}
| '(' argumentos ')'
{ printf (" parametros -> '(' argumentosMasUno argumentos ')'\n");}
| '(' ')'
{ printf (" parametros -> '(' argumentosMasUno argumentos ')'\n");}
;

variableMasUno :  variableMasUno ',' variable
{ printf (" variableMasUno ->variableMasUno ',' variable\n");}
| variable
{ printf (" variableMasUno -> variable\n");}

;

argumentos : nombre_tipo variableMasUno
{ printf ("argumentos -> nombre_tipo variableMasUno\n");}
;

nombre_tipo : tipo asteriscoMasUno
{ printf (" nombre_tipo -> tipo asteriscoMasUno\n");}
| tipo
{ printf (" nombre_tipo ->tipo\n");}
;

variable : IDENTIFICADOR '=' expresion
{ printf (" variable -> IDENTIFICADOR '=' expresion\n");}
| IDENTIFICADOR
{ printf (" variable -> IDENTIFICADOR\n");}
;



/***************/
/* INSTRUCCIONES */
/***************/
instruccion : bloque_instrucciones
{ printf (" instruccion -> bloque_instrucciones\n");}
| instruccion_expresion
{ printf (" instruccion -> instruccion_expresion\n");}
| instruccion_bifurcacion
{ printf (" instruccion -> instruccion_bifurcacion\n");}
| instruccion_bucle
{ printf (" instruccion -> instruccion_bucle\n");}
| instruccion_salto
{ printf (" instruccion -> instruccion_salto\n");}
| instruccion_destino_salto
{ printf (" instruccion -> instruccion_destino_salto\n");}
| instruccion_retorno
{ printf (" instruccion -> instruccion_retorno\n");}
| instruccion_lanzamiento_excepcion
{ printf (" instruccion -> instruccion_lanzamiento_excepcion\n");}
| instruccion_captura_excepcion
{ printf (" instruccion -> instruccion_captura_excepcion\n");}
| instruccion_vacia
{ printf (" instruccion -> instruccion_vacia\n");}
;

instruccionMasUno: instruccionMasUno instruccion
{ printf (" instruccionMasUno-> instruccionMasUno instruccion\n");}
| instruccion
{ printf (" instruccionMasUno->  instruccion\n");}
;

bloque_instrucciones : '{' declaracionMasUno instruccionMasUno '}'
{ printf (" bloque_instrucciones -> '{' declaracionMasUno instruccionMasUno '}'\n");}
| '{' declaracionMasUno '}'
{ printf (" bloque_instrucciones -> '{' declaracionMasUno '}'\n");}
| '{' instruccionMasUno '}'
{ printf (" bloque_instrucciones -> '{' instruccionMasUno '}'\n");}
| '{' '}'
{ printf (" bloque_instrucciones -> '{' '}'\n");}
;

instruccion_expresion : expresion_funcional ';'
{ printf (" instruccion_expresion -> expresion_funcional ';'\n");}
| asignacion ';'
{ printf (" instruccion_expresion -> asignacion ';'\n");}
;

asignacion : expresion_indexada operador_asignacion expresion
{ printf (" asignacion -> expresion_indexada operador_asignacion expresion\n");}
;


operador_asignacion : EQ
{ printf (" operador_asignacion -> EQ\n");}
| MULT_ASIG
{ printf (" operador_asignacion -> MULT_ASIG\n");}
| DIV_ASIG
{ printf (" operador_asignacion -> DIV_ASIG\n");}
| MOD_ASIG
{ printf (" operador_asignacion -> MOD_ASIG\n");}
| SUMA_ASIG
{ printf (" operador_asignacion -> SUMA_ASIG\n");}
| RESTA_ASIG
{ printf (" operador_asignacion -> RESTA_ASIG\n");}
| DESPI_ASIG
{ printf (" operador_asignacion -> DESPI_ASIG\n");}
| DESPD_ASIG
{ printf (" operador_asignacion -> DESPD_ASIG\n");}
| AND_ASIG
{ printf (" operador_asignacion -> AND_ASIG\n");}
| XOR_ASIG
{ printf (" operador_asignacion -> XOR_ASIG\n");}
| OR_ASIG
{ printf (" operador_asignacion -> OR_ASIG\n");}
;




 instruccion_casoMasUno :  instruccion_casoMasUno ',' instruccion_caso
{ printf (" instruccion_casoMasUno -> instruccion_casoMasUno ',' instruccion_caso\n");}
 | instruccion_caso
{ printf ("  instruccion_casoMasUno -> instruccion_caso\n");}
;

instruccion_bifurcacion : IF '(' expresion ')' instruccion
{ printf (" instruccion_bifurcacion ->  IF '(' expresion ')' instruccion\n");}
|  IF '(' expresion ')' instruccion ELSE instruccion
{ printf (" instruccion_bifurcacion -> IF '(' expresion ')' instruccion ELSE instruccion\n");}
| SWITCH '(' expresion ')' '{' instruccion_casoMasUno '}'
{ printf (" instruccion_bifurcacion -> SWITCH '(' expresion ')' '{' instruccion_casoMasUno '}'\n");}
;
instruccion_caso : CASE expresion ':' instruccion {printf (" instruccion_caso -> CASE expresion ':' instruccion \n");}
| DEFAULT ':' instruccion {printf (" instruccion_caso -> DEFAULT ':' instruccion \n");}
;

asignacionMasUno: asignacionMasUno  asignacion {printf ("asignacionMasUno -> asignacionMasUno asignacion \n");}
| asignacion {printf ("asignacionMasUno -> asignacion\n");}
;
instruccion_bucle : WHILE '(' expresion ')' instruccion {printf ("instruccion_bucle -> WHILE '('expresion')'\n");}
| DO instruccion WHILE '(' expresion ')' ';' {printf ("instruccion_bucle -> DO instruccion WHILE '('expresion')'\n");}
| FOR '('';' expresion ';'  ')' instruccion {printf ("instruccion_bucle -> FOR '(' ';' expresion';' ')' instruccion\n");}
| FOR '(' asignacionMasUno ';' expresion ';'  expresionMasUno  ')' instruccion {printf ("instruccion_bucle -> FOR '(' asignacionMasUno';' expresion';' expresionMasUno ')' instruccion\n\n");}
| FOR '(' ';' expresion ';'  expresionMasUno  ')' instruccion {printf ("instruccion_bucle -> FOR '(' ';' expresion';' expresionMasUno')' instruccion\n");}
| FOR '(' asignacionMasUno ';' expresion ';'   ')' instruccion {printf ("instruccion_bucle -> FOR '('asignacionMasUno ';' expresion';' ')' instruccion\n");}
;

instruccion_salto : GOTO IDENTIFICADOR ';'  {printf ("instruccion_salto -> GOTO IDENTIFICADOR ';'\n");}
|CONTINUE ';' {printf ("instruccion_salto -> CONTINUE ';'\n");}
| BREAK ';'{printf ("instruccion_salto -> BREAK ';'\n");}
;
instruccion_destino_salto : IDENTIFICADOR ':' instruccion ';' {printf ("instruccion_destino_salto -> IDENTIFICADOR ':' instruccion ';'\n");}
;

instruccion_retorno : RETURN ';' {printf ("instruccion_retorno -> RETURN ';'\n");}
| RETURN  expresion ';' {printf ("instruccion_retorno -> RETURN expresion ';'\n");}
;

instruccion_lanzamiento_excepcion : THROW expresion ';' {printf ("instruccion_lanzamiento_excepcion -> THROW expresion ';'\n");}
;

instruccion_captura_excepcion : TRY bloque_instrucciones clausulas_catch {printf ("instruccion_captura_excepcion -> TRY bloque_instrucciones clausulas_catch\n");}
| TRY bloque_instrucciones clausula_finally {printf ("instruccion_captura_excepcion -> TRY bloque_instrucciones clausula_finally\n");}
| TRY bloque_instrucciones  clausulas_catch  clausula_finally {printf ("instruccion_captura_excepcion -> TRY bloque_instrucciones clausulas_catch clausula_finally\n");}
;

clausula_catch_especificaMasUno: clausula_catch_especificaMasUno clausula_catch_especifica {printf ("clausula_catch_especificaMasUno -> clausula_catch_especificaMasUno clausula_catch_especifica\n");}
|clausula_catch_especifica {printf ("clausula_catch_especificaMasUno -> clausula_catch_especifica\n");}
;

clausulas_catch :  clausula_catch_especificaMasUno {printf ("clausulas_catch -> clausula_catch_especificaMasUno\n");}
|  clausula_catch_general {printf ("clausulas_catch -> clausula_catch_general\n");}
|  clausula_catch_especificaMasUno clausula_catch_general {printf ("clausulas_catch -> clausula_catch_especificaMasUno clausula_catch_general\n");}
| error ';' { printf("clausulas_catch\n"); yyerrok; }
;

clausula_catch_especifica : CATCH '(' nombre_tipo ')' bloque_instrucciones {printf ("clausula_catch_especifica -> CATCH '(' nombre_tipo ')' bloque_instrucciones\n");}
;

clausula_catch_general : CATCH bloque_instrucciones {printf ("clausula_catch_general -> CATCH bloque_instrucciones\n");}
;

clausula_finally : FINALLY bloque_instrucciones {printf ("clausula_finally -> FINALLY bloque_instrucciones\n");}
;
instruccion_vacia : ';' {printf ("instruccion_vacia -> ';'\n");}
;

/***************/
/* EXPRESIONES */
/***************/


expresion_logica
  : expresion_cast {printf("\texpresion_logica ->  expresion_cast\n");}
;


expresion : expresion_logica '?' expresion ':' expresion
{ printf (" expresion-> expresion_logica '?' expresion ':' expresion\n");}
| expresion_logica
{ printf (" expresion -> expresion_logica\n");}
;

expresionMasUno :expresionMasUno ',' expresion
{ printf (" expresionMasUno -> expresionMasUno , expresion\n");}
 | expresion
{ printf (" expresionMasUno -> expresion\n");}
;


expresion_constante : ENTERO
{ printf (" expresion_constante -> ENTERO\n");}
| REAL
{ printf (" expresion_constante -> REAL\n");}
| CADENA
{ printf (" expresion_constante -> CADENA\n");}
| CARACTER
{ printf (" expresion_constante -> CARACTER\n");}
| TRUE
{ printf (" expresion_constante -> TRUE\n");}
| FALSE
{ printf (" expresion_constante -> FALSE\n");}
;

expresion_parentesis : '(' expresion ')'
{ printf (" expresion_parentesis-> '(' expresion ')'\n");}
;

expresion_funcional : identificador_anidado '(' expresionMasUno ')'
{ printf (" expresion_funcional -> identificador_anidado '(' expresionMasUno ')'\n");}
| identificador_anidado '(' ')'
{ printf (" expresion_funcional -> identificador_anidado '(' expresionMasUno ')'\n");}
;

expresion_creacion_objeto : NEW identificador_anidado '(' expresionMasUno ')'
{ printf (" expresion_creacion_objeto -> NEW identificador_anidado '(' expresionMasUno ')'\n");}
| NEW identificador_anidado '(' ')'
{ printf (" expresion_creacion_objeto -> NEW identificador_anidado '(' ')'\n");}
;

expresion_indexada : identificador_anidado
{ printf (" expresion_indexada -> identificador_anidado\n");}
| expresion_indexada '[' expresion ']'
{ printf (" expresion_indexada -> expresion_indexada '[' expresion ']'\n");}
| expresion_indexada PTR_ACCESO identificador_anidado
{ printf (" expresion_indexada -> expresion_indexada PTR_ACCESO identificador_anidado\n");}
;

expresion_postfija : expresion_constante
{ printf (" expresion_postfija -> IDENTIFICADOR '=' expresion\n");}
| expresion_parentesis
{ printf (" expresion_postfija -> IDENTIFICADOR '=' expresion\n");}
| expresion_funcional
{ printf (" expresion_postfija -> IDENTIFICADOR '=' expresion\n");}
| expresion_creacion_objeto
{ printf (" expresion_postfija -> IDENTIFICADOR '=' expresion\n");}
| expresion_indexada
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
| expresion_postfija INC
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
| expresion_postfija DEC
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
;

expresion_prefija : expresion_postfija
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
| SIZEOF expresion_prefija
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
| SIZEOF '(' nombre_tipo ')'
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
| operador_prefijo expresion_cast
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
;

operador_prefijo : INC
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
| DEC
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
| '&'
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
| '*'
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
| SUMA_ASIG
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
| '-'
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
| '~'
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
| NEQ
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
;

expresion_cast : expresion_prefija
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
| '(' nombre_tipo ')' expresion_prefija
{ printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");}
;

%%

void yyerror(char *s) {
  fflush(stdout);
  printf("Error linea %d, %s\n", linea,s);
  }

int yywrap() {
  return 1;
  }

int main(int argc, char *argv[]) {

  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./c-sharpie NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
