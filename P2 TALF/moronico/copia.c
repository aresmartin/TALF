%type <nombre_token> definicion_programa
%type <nombre_token> programa
%token <nombre_token> bloque_programa
%token <nombre_token> definicion_paquete


/********************************/
/* programas, paquetes y cargas */
/********************************/
programa : definicion_programa | definicion_paquete;

definicion_programa : PROGRAMA nombre ';' bloque_programa

programa : definicion_programa | definicion_paquete;

bloque_programa  : [ declaracion_cargas ]?
                  [ declaracion_tipos ]?
                  [ declaracion_constantes ]?
                  [ declaracion_variables ]?
                    bloque_instrucciones

bloque_instrucciones : '{' [ instruccion ]+ '}'

definicion_paquete : PAQUETE nombre ';' seccion_cabecera seccion_cuerpo
seccion_cabecera : CABECERA
                  [ declaracion_cargas ]?
                  [ declaracion_tipos ]?
                  [ declaracion_constantes ]?
                  [ declaracion_variables ]?
                  [ declaracion_interfaces ]?

seccion_cuerpo : CUERPO
          [ declaracion_tipos ]?
          [ declaracion_constantes ]?
          [ declaracion_variables ]?
          [ declaracion_subprograma ]+
          
declaracion_cargas : CARGA ( declaracion_carga )+ ';'
declaracion_carga :nombre [ EN PATH ]? [ '(' ( nombre )+ ')']?



/************************/
/* tipos (incl. clases) */
/************************/
declaracion_tipos : TIPO [ declaracion_tipo ]+
declaracion_tipo : nombre '=' tipo_no_estructurado_o_nombre_tipo ';'
| nombre '=' tipo_estructurado
tipo_no_estructurado_o_nombre_tipo : nombre
                                    | tipo_escalar
                                    | tipo_fichero
                                    | tipo_enumerado
                                    | tipo_lista
                                    | tipo_lista_asociativa
                                    | tipo_conjunto

tipo_estructurado : tipo_registro | declaracion_clase
tipo_escalar : ENTERO | REAL | BOOLEANO | CARACTER | CADENA

tipo_fichero : FICHERO
tipo_enumerado : '(' ( expresion_constante )+ ')'
tipo_lista : LISTA [ '[' ( rango )+ ']' ]? DE tipo_no_estructurado_o_nombre_tipo
rango : expresion '..' expresion [ '..' expresion ]?
tipo_lista_asociativa : LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo
tipo_conjunto = CONJUNTO DE tipo_no_estructurado_o_nombre_tipo
tipo_registro : REGISTRO '{' [ declaracion_campo ]+ '}'
declaracion_campo : ( nombre )+ ':' tipo_no_estructurado_o_nombre_tipo ';'

/*************************************/
/* constantes, variables, interfaces */
/*************************************/
declaracion_constantes : CONSTANTE [ declaracion_constante ]+
declaracion_constante : nombre ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'
valor_constante : expresion
| '[' ( valor_constante )+ ']'
| '[' ( clave_valor )+ ']'
| '[' ( campo_valor )+ ']'
clave_valor : CTC_CADENA '=>' valor_constante
campo_valor : nombre '=>' valor_constante

declaracion_variables : VARIABLE [ declaracion_variable ]+

declaracion_variable : ( nombre )+
                    ':'
                    tipo_no_estructurado_o_nombre_tipo
                    [ '=' valor_constante ]?
                    ';'

declaracion_interfaces : INTERFAZ [ cabecera_subprograma ';' ]+

/****CLASESSSSSSSS****/////
declaracion_clase : CLASE
                  [ FINAL ]?
                  [ '(' ( nombre )+ ')' ]?
                  '{'
                  declaraciones_publicas
                  [ declaraciones_semi ]?
                  [ declaraciones_privadas ]?
                  '}'

declaraciones_publicas : [ PUBLICO ]? [ declaracion_componente ]+

declaraciones_semi :SEMIPUBLICO [ declaracion_componente ]+

declaraciones_privadas : PRIVADO [ declaracion_componente ]+

declaracion_componente : declaracion_tipo_anidado
                        | declaracion_constante_anidada
                        | declaracion_atributos
                        | cabecera_subprograma ';' [ modificadores ';' ]?

declaracion_tipo_anidado : TIPO declaracion_tipo

declaracion_constante_anidada : CONSTANTE declaracion_constante

declaracion_atributos : ( nombre )+ ':' tipo_no_estructurado_o_nombre_tipo ';'

modificadores :  ( modificador )+

modificador : GENERICO | ABSTRACTO | ESPECIFICO | FINAL
/****************/
/* subprogramas */
/****************/
declaracion_subprograma : cabecera_subprograma bloque_subprograma

cabecera_subprograma : cabecera_funcion
                      | cabecera_procedimiento
                      | cabecera_constructor
                      | cabecera_destructor

cabecera_funcion : FUNCION
                  nombre
                  [ declaracion_parametros ]?
                  '=>'
                  tipo_no_estructurado_o_nombre_tipo

cabecera_procedimiento : PROCEDIMIENTO nombre [ declaracion_parametros ]?

cabecera_constructor : CONSTRUCTOR nombre [ declaracion_parametros ]?

cabecera_destructor : DESTRUCTOR nombre

declaracion_parametros : '(' lista_parametros_formales ')'

lista_parametros_formales : parametros_formales
                            | lista_parametros_formales ';' parametros_formales

parametros_formales : ( nombre )+ ':' tipo_no_estructurado_o_nombre_tipo [ MODIFICABLE ]?

bloque_subprograma : [ declaracion_tipos ]?
                      [ declaracion_constantes ]?
                      [ declaracion_variables ]?
                      bloque_instrucciones
/*****************/
/* instrucciones */
/*****************/
instruccion : ';'
              | instruccion_asignacion
              | instruccion_salir
              | instruccion_devolver
              | instruccion_llamada
              | instruccion_si
              | instruccion_casos
              | instruccion_bucle
              | instruccion_probar_excepto
              | instruccion_lanzar

instruccion_asignacion : objeto '=' expresion ';'

instruccion_salir : SALIR [ SI expresion ]? ';'

instruccion_devolver ::= DEVOLVER [ expresion ]? ';'

instruccion_llamada ::= llamada_subprograma ';'

llamada_subprograma ::= nombre '(' ( expresion )* ')'

instruccion_si ::= SI expresion
                    ENTONCES bloque_instrucciones
                    [ SINO bloque_instrucciones ]?

instruccion_casos ::= EN CASO expresion 'es' [ caso ]+ ';'

caso ::= CUANDO entradas '=>' bloque_instrucciones

entradas ::= [ entrada '|' ]* entrada

entrada ::= expresion | rango | OTRO

instruccion_bucle ::= clausula_iteracion bloque_instrucciones

clausula_iteracion ::= PARA nombre EN objeto
                      | REPITE ELEMENTO nombre EN rango [ DESCENDENTE ]?
                      | mientras expresion
                      | REPITE HASTA expresion

instruccion_probar_excepto ::= PROBAR bloque_instrucciones
                              EXCEPTO [ clausula_excepcion ]+
                              [ FINALMENTE bloque_instrucciones ]?

clausula_excepcion ::= CUANDO nombre EJECUTA bloque_instrucciones

instruccion_lanzar ::= LANZAR nombre ';'
/***************/
/* expresiones */
/***************/
expresion_primaria ::= expresion_constante | objeto | llamada_subprograma | '(' expresion ')'

objeto ::= nombre
        | objeto '[' ( expresion )+ ']'
        | objeto '.' IDENTIFICADOR

expresion_constante ::= CTC_ENTERA | CTC_REAL | CTC_CADENA | CTC_CARACTER | CTC_BOOLEANA




////copiaaaaaaa/////

%right '\\/'
%right '/\\'
%nonassoc '!'
%left '<' '>' '=<' '>=' ':='  '!='
%left '@'
%left '^'
%left '&'
%left '<-'  '->'
%left '*' '/'  '%'
%right  '**'
%nonassoc '-'
//Me faltan !,^,&.-
expresion_and: termino AND termino
expresion_xor : termino '@' termino 
expresion_or: termino OR termino
expresion_mayor: termino > termino
expresion_menor: termino < termino
expresion_LEQ: termino LEQ termino
expresion_GEQ: termino GEQ termino
expresion_NEQ: termino NEQ termino
expresion_EQ: termino EQ termino
expresion_DESPI: termino DESPI termino
expresion_DESPD: termino DESPD termino
expresion_MAS: termino '+' termino
expresion_MENOS: termino '-' termino
expresion_POR: termino '*' termino
expresion_DIV: termino '/' termino
expresion_MOD: termino '%' termino
expresion_POT: termino '**' termino
expresion_DESPD: termino DESPD termino

expresion ::= expresion_unaria_minus | expresion_potencia
expresion_unaria_minus ::= ’-’ expresion_primaria %prec UMINUS
expresion_potencia ::= expresion_multiplicativa ’**’ expresion_potencia %right


expresion_multiplicativa ::= expresion_unaria_minus 
                           | expresion_multiplicativa ’*’ expresion_unaria_minus
                           | expresion_multiplicativa ’/’ expresion_unaria_minus
                           | expresion_multiplicativa ’%’ expresion_unaria_minus
expresion_aditiva ::= expresion_multiplicativa 
                    | expresion_aditiva ’+’ expresion_multiplicativa
                    | expresion_aditiva ’-’ expresion_multiplicativa
expresion_desplazamiento ::= expresion_aditiva 
                           | expresion_aditiva ’<-’ expresion_desplazamiento %right
                           | expresion_aditiva ’->’ expresion_desplazamiento %right
expresion_and_binario ::= expresion_desplazamiento 
                        | expresion_and_binario ’&’ expresion_desplazamiento
expresion_or_binario ::= expresion_and_binario 
                       | expresion_or_binario ’^’ expresion_and_binario
                       | expresion_or_binario ’@’ expresion_and_binario
expresion_comparativa ::= expresion_or_binario 
                        | expresion_comparativa ’<’ expresion_or_binario
                        | expresion_comparativa ’>’ expresion_or_binario
                        | expresion_comparativa ’=<’ expresion_or_binario
                        | expresion_comparativa ’>=’ expresion_or_binario
                        | expresion_comparativa ’:=’ expresion_or_binario
                        | expresion_comparativa ’!=’ expresion_or_binario
expresion_negacion ::= expresion_comparativa 
                     | ’!’ expresion_negacion
expresion_and_logico ::= expresion_negacion 
                       | expresion_and_logico ’/\’ expresion_negacion %left
expresion_or_logico ::= expresion_and_logico 
                      | expresion_or_logico ’\/’ expresion_and_logico %left
