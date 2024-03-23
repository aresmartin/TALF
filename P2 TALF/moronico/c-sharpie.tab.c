
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "c-sharpie.y"

  #include <stdlib.h>
  #include <stdio.h>
  extern FILE *yyin;
  extern int linea;

  #define YYDEBUG 1
   void yyerror(char *s);


/* Line 189 of yacc.c  */
#line 84 "c-sharpie.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABSTRACT = 258,
     BASE = 259,
     BOOLEAN = 260,
     BREAK = 261,
     CASE = 262,
     CATCH = 263,
     CHAR = 264,
     CLASS = 265,
     CONTINUE = 266,
     DEFAULT = 267,
     DO = 268,
     DOUBLE = 269,
     ELSE = 270,
     ENUM = 271,
     EXTERN = 272,
     FINALLY = 273,
     FLOAT = 274,
     FOR = 275,
     GOTO = 276,
     IF = 277,
     INT = 278,
     INTERFACE = 279,
     INTERNAL = 280,
     LONG = 281,
     NAMESPACE = 282,
     NEW = 283,
     OVERRIDE = 284,
     PRIVATE = 285,
     PROTECTED = 286,
     PUBLIC = 287,
     RETURN = 288,
     SEALED = 289,
     SHORT = 290,
     SIGNED = 291,
     STATIC = 292,
     STRUCT = 293,
     SWITCH = 294,
     THIS = 295,
     THROW = 296,
     TRY = 297,
     TYPEDEF = 298,
     UNION = 299,
     UNSIGNED = 300,
     USING = 301,
     VIRTUAL = 302,
     VOID = 303,
     WHILE = 304,
     TRUE = 305,
     FALSE = 306,
     SIZEOF = 307,
     IDENTIFICADOR = 308,
     ENTERO = 309,
     CADENA = 310,
     REAL = 311,
     CARACTER = 312,
     PTR_ACCESO = 313,
     INC = 314,
     DEC = 315,
     DESPI = 316,
     DESPD = 317,
     LE = 318,
     GE = 319,
     EQ = 320,
     NEQ = 321,
     AND = 322,
     OR = 323,
     MULT_ASIG = 324,
     DIV_ASIG = 325,
     MOD_ASIG = 326,
     SUMA_ASIG = 327,
     RESTA_ASIG = 328,
     DESPI_ASIG = 329,
     DESPD_ASIG = 330,
     AND_ASIG = 331,
     XOR_ASIG = 332,
     OR_ASIG = 333
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 204 "c-sharpie.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  73
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1900

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  257
/* YYNRULES -- Number of states.  */
#define YYNSTATES  471

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   333

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    95,     2,
      83,    84,    89,     2,    82,    96,    81,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    92,    80,
      87,    79,    88,    94,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    90,     2,    91,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,     2,    86,    93,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    13,    16,    18,    20,
      22,    24,    26,    32,    36,    40,    43,    46,    48,    52,
      54,    56,    61,    65,    68,    71,    73,    77,    82,    86,
      88,    92,    96,    98,   102,   105,   108,   110,   112,   114,
     116,   118,   120,   122,   124,   126,   128,   132,   134,   137,
     140,   142,   145,   147,   151,   156,   159,   161,   165,   167,
     168,   170,   174,   176,   178,   180,   182,   184,   189,   192,
     194,   199,   205,   211,   217,   219,   221,   223,   225,   227,
     229,   231,   233,   235,   237,   239,   241,   243,   247,   251,
     254,   256,   260,   265,   270,   276,   279,   282,   284,   288,
     291,   294,   298,   304,   308,   315,   321,   324,   326,   330,
     334,   336,   341,   345,   351,   356,   358,   361,   365,   367,
     369,   371,   373,   375,   378,   380,   384,   387,   391,   394,
     398,   401,   404,   408,   412,   416,   419,   424,   427,   431,
     436,   440,   444,   447,   452,   456,   459,   463,   465,   468,
     471,   473,   477,   479,   481,   483,   485,   487,   489,   491,
     493,   495,   497,   499,   502,   504,   509,   513,   517,   520,
     523,   526,   530,   532,   534,   536,   538,   540,   542,   544,
     546,   548,   550,   552,   556,   558,   564,   572,   580,   585,
     589,   592,   594,   600,   608,   616,   626,   635,   644,   648,
     651,   654,   659,   662,   666,   670,   674,   678,   683,   686,
     688,   690,   692,   695,   698,   704,   707,   710,   712,   714,
     720,   722,   726,   728,   730,   732,   734,   736,   738,   740,
     744,   749,   753,   759,   764,   766,   771,   775,   777,   779,
     781,   783,   785,   788,   791,   793,   796,   801,   804,   806,
     808,   810,   812,   814,   816,   818,   820,   822
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     100,     0,    -1,    98,   101,    -1,   101,    -1,    99,   102,
      -1,   102,    -1,    99,    98,    -1,    98,    -1,   107,    -1,
     111,    -1,   124,    -1,   152,    -1,    46,    53,    79,   104,
      80,    -1,    46,   104,    80,    -1,   103,    53,    81,    -1,
      53,    81,    -1,   103,   106,    -1,   106,    -1,   105,    82,
     104,    -1,   104,    -1,    53,    -1,    53,    83,   105,    84,
      -1,    27,   108,   109,    -1,     1,    80,    -1,   103,    53,
      -1,    53,    -1,    85,    98,    86,    -1,    85,    99,    98,
      86,    -1,   110,    82,   117,    -1,   117,    -1,   112,   110,
      80,    -1,    87,   104,    88,    -1,   113,    -1,   115,   114,
     116,    -1,   115,   116,    -1,   114,   116,    -1,   116,    -1,
      35,    -1,    26,    -1,    36,    -1,    45,    -1,     9,    -1,
      23,    -1,    19,    -1,    14,    -1,     5,    -1,   119,    79,
     123,    -1,   119,    -1,     1,    80,    -1,   118,    89,    -1,
      89,    -1,   118,   121,    -1,   121,    -1,    90,   184,    91,
      -1,   120,    90,   184,    91,    -1,    53,   120,    -1,    53,
      -1,   122,    82,   123,    -1,   123,    -1,    -1,   183,    -1,
      90,   122,    91,    -1,   125,    -1,   127,    -1,   132,    -1,
     137,    -1,   141,    -1,    43,   112,    53,    80,    -1,   126,
     130,    -1,   130,    -1,   129,    85,   126,    86,    -1,   129,
      53,    85,   126,    86,    -1,   131,   129,    85,   126,    86,
      -1,   131,    53,    85,   126,    86,    -1,    28,    -1,    32,
      -1,    31,    -1,    25,    -1,    30,    -1,    37,    -1,    47,
      -1,    34,    -1,    29,    -1,     3,    -1,    17,    -1,    38,
      -1,    44,    -1,   112,   110,    80,    -1,   127,   110,    80,
      -1,   131,   128,    -1,   128,    -1,    24,    53,   135,    -1,
      24,    53,   133,   135,    -1,   131,    24,    53,   135,    -1,
     131,    24,    53,   133,   135,    -1,    92,   105,    -1,   134,
     136,    -1,   136,    -1,    85,   134,    86,    -1,    85,    86,
      -1,   153,    80,    -1,    28,   153,    80,    -1,    16,    53,
      92,   113,   139,    -1,    16,    53,   139,    -1,   131,    16,
      53,    92,   113,   139,    -1,   131,    16,    53,    92,   139,
      -1,   138,   140,    -1,   140,    -1,    85,   138,    86,    -1,
      53,    79,   183,    -1,    53,    -1,   131,    10,    53,   143,
      -1,    10,    53,   143,    -1,   131,    10,    53,   133,   143,
      -1,    10,    53,   133,   143,    -1,   144,    -1,   142,   144,
      -1,    85,   142,    86,    -1,   124,    -1,   145,    -1,   146,
      -1,   147,    -1,   150,    -1,   131,   111,    -1,   111,    -1,
     131,   153,   162,    -1,   153,   162,    -1,   131,   148,   162,
      -1,   148,   162,    -1,    53,   155,   149,    -1,    53,   149,
      -1,    53,   155,    -1,    92,     4,   155,    -1,    92,    40,
     155,    -1,   131,   151,   162,    -1,   151,   162,    -1,    93,
      53,    83,    84,    -1,   153,   162,    -1,    48,    53,   155,
      -1,   112,   118,    53,   155,    -1,   112,    53,   155,    -1,
     154,   157,    80,    -1,   157,    80,    -1,    83,   154,   157,
      84,    -1,    83,   157,    84,    -1,    83,    84,    -1,   156,
      82,   159,    -1,   159,    -1,   158,   156,    -1,   112,   118,
      -1,   112,    -1,    53,    79,   183,    -1,    53,    -1,   162,
      -1,   163,    -1,   167,    -1,   170,    -1,   171,    -1,   172,
      -1,   173,    -1,   174,    -1,   175,    -1,   181,    -1,   161,
     160,    -1,   160,    -1,    85,    98,   161,    86,    -1,    85,
      98,    86,    -1,    85,   161,    86,    -1,    85,    86,    -1,
     187,    80,    -1,   164,    80,    -1,   189,   165,   183,    -1,
      65,    -1,    69,    -1,    70,    -1,    71,    -1,    72,    -1,
      73,    -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,
      78,    -1,   166,    82,   168,    -1,   168,    -1,    22,    83,
     183,    84,   160,    -1,    22,    83,   183,    84,   160,    15,
     160,    -1,    39,    83,   183,    84,    85,   166,    86,    -1,
       7,   183,    92,   160,    -1,    12,    92,   160,    -1,   169,
     164,    -1,   164,    -1,    49,    83,   183,    84,   160,    -1,
      13,   160,    49,    83,   183,    84,    80,    -1,    20,    83,
      80,   183,    80,    84,   160,    -1,    20,    83,   169,    80,
     183,    80,   184,    84,   160,    -1,    20,    83,    80,   183,
      80,   184,    84,   160,    -1,    20,    83,   169,    80,   183,
      80,    84,   160,    -1,    21,    53,    80,    -1,    11,    80,
      -1,     6,    80,    -1,    53,    92,   160,    80,    -1,    33,
      80,    -1,    33,   183,    80,    -1,    41,   183,    80,    -1,
      42,   162,   177,    -1,    42,   162,   180,    -1,    42,   162,
     177,   180,    -1,   176,   178,    -1,   178,    -1,   176,    -1,
     179,    -1,   176,   179,    -1,     1,    80,    -1,     8,    83,
     158,    84,   162,    -1,     8,   162,    -1,    18,   162,    -1,
      80,    -1,   193,    -1,   182,    94,   183,    92,   183,    -1,
     182,    -1,   184,    82,   183,    -1,   183,    -1,    54,    -1,
      56,    -1,    55,    -1,    57,    -1,    50,    -1,    51,    -1,
      83,   183,    84,    -1,   108,    83,   184,    84,    -1,   108,
      83,    84,    -1,    28,   108,    83,   184,    84,    -1,    28,
     108,    83,    84,    -1,   108,    -1,   189,    90,   183,    91,
      -1,   189,    58,   108,    -1,   185,    -1,   186,    -1,   187,
      -1,   188,    -1,   189,    -1,   190,    59,    -1,   190,    60,
      -1,   190,    -1,    52,   191,    -1,    52,    83,   158,    84,
      -1,   192,   193,    -1,    59,    -1,    60,    -1,    95,    -1,
      89,    -1,    72,    -1,    96,    -1,    93,    -1,    66,    -1,
     191,    -1,    83,   158,    84,   191,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    29,    31,    32,    35,    37,    40,    41,
      42,    43,    46,    48,    51,    52,    55,    56,    59,    60,
      64,    65,    72,    74,    77,    79,    87,    88,    95,    97,
     102,   106,   108,   112,   113,   114,   115,   118,   120,   124,
     126,   130,   132,   134,   136,   138,   142,   144,   146,   149,
     151,   153,   155,   162,   164,   168,   170,   174,   176,   178,
     181,   183,   192,   193,   194,   195,   196,   199,   205,   207,
     210,   212,   214,   216,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   234,   235,   238,   239,   241,
     242,   244,   246,   248,   250,   254,   258,   260,   263,   264,
     267,   269,   276,   277,   278,   280,   285,   287,   291,   295,
     297,   306,   308,   310,   312,   317,   319,   324,   328,   330,
     332,   334,   336,   340,   342,   346,   348,   355,   357,   361,
     363,   365,   370,   372,   376,   378,   382,   392,   396,   398,
     400,   404,   406,   411,   413,   415,   419,   421,   426,   430,
     432,   436,   438,   447,   449,   451,   453,   455,   457,   459,
     461,   463,   465,   469,   471,   475,   477,   479,   481,   485,
     487,   491,   496,   498,   500,   502,   504,   506,   508,   510,
     512,   514,   516,   523,   525,   529,   531,   533,   536,   537,
     540,   541,   543,   544,   545,   546,   547,   548,   551,   552,
     553,   555,   558,   559,   562,   565,   566,   567,   570,   571,
     574,   575,   576,   577,   580,   583,   586,   588,   597,   601,
     603,   607,   609,   614,   616,   618,   620,   622,   624,   628,
     632,   634,   638,   640,   644,   646,   648,   652,   654,   656,
     658,   660,   662,   664,   668,   670,   672,   674,   678,   680,
     682,   684,   686,   688,   690,   692,   696,   698
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACT", "BASE", "BOOLEAN", "BREAK",
  "CASE", "CATCH", "CHAR", "CLASS", "CONTINUE", "DEFAULT", "DO", "DOUBLE",
  "ELSE", "ENUM", "EXTERN", "FINALLY", "FLOAT", "FOR", "GOTO", "IF", "INT",
  "INTERFACE", "INTERNAL", "LONG", "NAMESPACE", "NEW", "OVERRIDE",
  "PRIVATE", "PROTECTED", "PUBLIC", "RETURN", "SEALED", "SHORT", "SIGNED",
  "STATIC", "STRUCT", "SWITCH", "THIS", "THROW", "TRY", "TYPEDEF", "UNION",
  "UNSIGNED", "USING", "VIRTUAL", "VOID", "WHILE", "TRUE", "FALSE",
  "SIZEOF", "IDENTIFICADOR", "ENTERO", "CADENA", "REAL", "CARACTER",
  "PTR_ACCESO", "INC", "DEC", "DESPI", "DESPD", "LE", "GE", "EQ", "NEQ",
  "AND", "OR", "MULT_ASIG", "DIV_ASIG", "MOD_ASIG", "SUMA_ASIG",
  "RESTA_ASIG", "DESPI_ASIG", "DESPD_ASIG", "AND_ASIG", "XOR_ASIG",
  "OR_ASIG", "'='", "';'", "'.'", "','", "'('", "')'", "'{'", "'}'", "'<'",
  "'>'", "'*'", "'['", "']'", "':'", "'~'", "'?'", "'&'", "'-'", "$accept",
  "declaracionMasUno", "directiva_usoMasUno", "modulo", "declaracion",
  "directiva_uso", "identificador_con_tiposMasUno",
  "nombre_tipo_o_espacio_nombres", "nombre_tipo_o_espacio_nombresMasUno",
  "identificador_con_tipos", "declaracion_espacio_nombres",
  "identificador_anidado", "bloque_espacio_nombres", "nombreMasUno",
  "declaracion_variable", "tipo", "tipo_escalar", "longitud", "signo",
  "tipo_basico", "nombre", "asteriscoMasUno", "dato",
  "corchetesMasUnoCon0OMasexpr", "dato_indexado", "valorMasUno", "valor",
  "declaracion_tipo", "nombramiento_tipo", "declaracion_campoMasUno",
  "declaracion_struct_union", "modificador", "struct_union",
  "declaracion_campo", "modificadorMasUno", "declaracion_interfaz",
  "herencia", "declaracion_metodo_interfazMasUno", "cuerpo_interfaz",
  "declaracion_metodo_interfaz", "declaracion_enum",
  "declaracion_miembro_enumMasUno", "cuerpo_enum",
  "declaracion_miembro_enum", "declaracion_clase",
  "declaracion_elemento_claseMasUno", "cuerpo_clase",
  "declaracion_elemento_clase", "declaracion_atributo",
  "declaracion_metodo", "declaracion_constructor", "cabecera_constructor",
  "inicializador_constructor", "declaracion_destructor",
  "cabecera_destructor", "declaracion_funcion", "firma_funcion",
  "argumentosMasUno", "parametros", "variableMasUno", "argumentos",
  "nombre_tipo", "variable", "instruccion", "instruccionMasUno",
  "bloque_instrucciones", "instruccion_expresion", "asignacion",
  "operador_asignacion", "instruccion_casoMasUno",
  "instruccion_bifurcacion", "instruccion_caso", "asignacionMasUno",
  "instruccion_bucle", "instruccion_salto", "instruccion_destino_salto",
  "instruccion_retorno", "instruccion_lanzamiento_excepcion",
  "instruccion_captura_excepcion", "clausula_catch_especificaMasUno",
  "clausulas_catch", "clausula_catch_especifica", "clausula_catch_general",
  "clausula_finally", "instruccion_vacia", "expresion_logica", "expresion",
  "expresionMasUno", "expresion_constante", "expresion_parentesis",
  "expresion_funcional", "expresion_creacion_objeto", "expresion_indexada",
  "expresion_postfija", "expresion_prefija", "operador_prefijo",
  "expresion_cast", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,    61,
      59,    46,    44,    40,    41,   123,   125,    60,    62,    42,
      91,    93,    58,   126,    63,    38,    45
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   110,
     111,   112,   112,   113,   113,   113,   113,   114,   114,   115,
     115,   116,   116,   116,   116,   116,   117,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   122,   122,   122,
     123,   123,   124,   124,   124,   124,   124,   125,   126,   126,
     127,   127,   127,   127,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   129,   129,   130,   130,   131,
     131,   132,   132,   132,   132,   133,   134,   134,   135,   135,
     136,   136,   137,   137,   137,   137,   138,   138,   139,   140,
     140,   141,   141,   141,   141,   142,   142,   143,   144,   144,
     144,   144,   144,   145,   145,   146,   146,   147,   147,   148,
     148,   148,   149,   149,   150,   150,   151,   152,   153,   153,
     153,   154,   154,   155,   155,   155,   156,   156,   157,   158,
     158,   159,   159,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   161,   161,   162,   162,   162,   162,   163,
     163,   164,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   166,   166,   167,   167,   167,   168,   168,
     169,   169,   170,   170,   170,   170,   170,   170,   171,   171,
     171,   172,   173,   173,   174,   175,   175,   175,   176,   176,
     177,   177,   177,   177,   178,   179,   180,   181,   182,   183,
     183,   184,   184,   185,   185,   185,   185,   185,   185,   186,
     187,   187,   188,   188,   189,   189,   189,   190,   190,   190,
     190,   190,   190,   190,   191,   191,   191,   191,   192,   192,
     192,   192,   192,   192,   192,   192,   193,   193
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     5,     3,     3,     2,     2,     1,     3,     1,
       1,     4,     3,     2,     2,     1,     3,     4,     3,     1,
       3,     3,     1,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     2,
       1,     2,     1,     3,     4,     2,     1,     3,     1,     0,
       1,     3,     1,     1,     1,     1,     1,     4,     2,     1,
       4,     5,     5,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       1,     3,     4,     4,     5,     2,     2,     1,     3,     2,
       2,     3,     5,     3,     6,     5,     2,     1,     3,     3,
       1,     4,     3,     5,     4,     1,     2,     3,     1,     1,
       1,     1,     1,     2,     1,     3,     2,     3,     2,     3,
       2,     2,     3,     3,     3,     2,     4,     2,     3,     4,
       3,     3,     2,     4,     3,     2,     3,     1,     2,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     4,     3,     3,     2,     2,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     5,     7,     7,     4,     3,
       2,     1,     5,     7,     7,     9,     8,     8,     3,     2,
       2,     4,     2,     3,     3,     3,     3,     4,     2,     1,
       1,     1,     2,     2,     5,     2,     2,     1,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     5,     4,     1,     4,     3,     1,     1,     1,
       1,     1,     2,     2,     1,     2,     4,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    83,    45,    41,     0,    44,     0,    84,    43,
      42,     0,    77,    38,     0,    74,    82,    78,    76,    75,
      81,    37,    39,    79,    85,     0,    86,    40,     0,    80,
       0,     0,     0,     0,     0,     3,     5,     8,     9,     0,
      32,     0,     0,    36,    10,    62,    63,    90,     0,     0,
      64,    65,    66,    11,     0,    23,     0,     0,     0,    25,
       0,     0,     0,    20,     0,     0,    17,     0,    20,     0,
       2,     0,     4,     1,     0,    56,    50,     0,    29,     0,
      47,    52,    35,     0,    34,     0,     0,     0,     0,     0,
       0,    89,     0,     0,   137,     0,     0,     0,   112,     0,
       0,   103,     0,     0,    91,    15,    24,     0,    22,     0,
       0,     0,    20,    16,    13,     0,   138,    31,    48,     0,
      55,   140,    30,     0,    56,    49,    51,     0,    33,     0,
       0,     0,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,   217,   168,     0,   234,   164,     0,   153,   154,
       0,   155,   156,   157,   158,   159,   160,   161,   162,     0,
       0,     0,     0,   124,   118,     0,     0,   115,   119,   120,
     121,     0,   122,     0,     0,    19,    95,   114,   110,     0,
     107,     0,     0,    99,     0,     0,    97,     0,    92,    14,
       0,     0,    67,     0,     0,   145,   150,     0,     0,     0,
       0,   227,   228,     0,   223,   225,   224,   226,   248,   249,
     255,   252,     0,   251,   254,   250,   253,   220,   222,     0,
     237,   238,   239,   240,   241,   244,   256,     0,   218,     0,
      56,    28,     0,   139,    59,    46,    60,     0,     0,    70,
      68,     0,     0,   111,     0,     0,    93,     0,     0,   200,
     199,     0,     0,     0,     0,   202,     0,     0,     0,     0,
       0,     0,   166,     0,     0,   167,   163,   170,   169,     0,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,     0,     0,     0,   130,   131,     0,     0,   123,     0,
       0,     0,   117,   116,   128,   135,   126,     0,     0,   108,
     106,   102,     0,     0,     0,    98,    96,   100,    26,     0,
      12,    21,   149,     0,   142,   144,   152,   148,   147,     0,
       0,   245,     0,     0,     0,     0,    53,   242,   243,   247,
       0,     0,    58,    71,    87,    88,   113,     0,   105,    94,
      73,    72,     0,     0,   234,   191,     0,   198,     0,   203,
       0,   204,     0,     0,     0,   210,   205,   209,   211,   206,
       0,     0,   165,   231,     0,   236,     0,   171,     0,     0,
     129,     0,   127,   134,   125,    18,   109,   101,     0,    27,
     141,   143,     0,     0,     0,     0,     0,   229,     0,   221,
      54,     0,    61,   104,     0,     0,     0,   190,     0,     0,
     213,     0,   215,   216,   208,   212,   207,     0,   201,   230,
     235,   132,   133,   136,   151,   146,   233,     0,   246,     0,
     257,     0,    57,     0,     0,     0,   185,     0,     0,   192,
     232,   219,     0,     0,     0,     0,     0,     0,     0,     0,
     184,     0,   193,   194,     0,     0,     0,   186,     0,     0,
       0,   187,   214,   196,   197,     0,     0,   189,   183,   195,
     188
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,    35,    36,    60,   185,   186,    66,
      37,   155,   108,    77,    38,    39,    40,    41,    42,    43,
      78,   242,    80,   120,    81,   341,   245,    44,    45,   131,
      46,    47,    48,   133,    49,    50,    97,   195,   104,   196,
      51,   189,   101,   190,    52,   176,    98,   177,   178,   179,
     180,   181,   294,   182,   183,    53,    54,   207,   121,   327,
     208,   209,   328,   156,   157,   158,   159,   160,   292,   449,
     161,   450,   356,   162,   163,   164,   165,   166,   167,   365,
     366,   367,   368,   369,   168,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -237
static const yytype_int16 yypact[] =
{
     909,   -45,  -237,  -237,  -237,     3,  -237,    45,  -237,  -237,
    -237,    68,  -237,  -237,    80,  -237,  -237,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,  -237,  1256,  -237,  -237,   127,  -237,
     144,   158,   634,   909,   101,  -237,  -237,  -237,  -237,    28,
    -237,   141,   355,  -237,  -237,  -237,  -237,  -237,     5,  1815,
    -237,  -237,  -237,  -237,    94,  -237,    11,    53,    73,   -41,
     161,   109,   183,   146,   187,    24,  -237,   138,    51,   155,
    -237,   688,  -237,  -237,   169,    19,  -237,   126,  -237,   -25,
     186,  -237,  -237,   141,  -237,   181,  1207,   205,   216,   220,
     189,  -237,   194,   757,  -237,   533,   158,   195,  -237,   234,
     462,  -237,   196,   203,  -237,  -237,   212,   909,  -237,   217,
     158,   158,   145,  -237,  -237,   272,  -237,  -237,  -237,  1647,
     206,  -237,  -237,    36,    19,  -237,  -237,  1365,  -237,  1207,
      36,  1059,    36,  -237,  1847,    11,   209,    73,  1207,  1207,
     223,   225,  1361,   229,   260,   232,  1412,   235,  1647,    94,
     241,   -37,  -237,  -237,   844,   242,  -237,  1277,  -237,  -237,
     246,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,   249,
     669,   -29,   278,  -237,  -237,   580,   486,  -237,  -237,  -237,
    -237,    94,  -237,    94,    94,  -237,   250,  -237,   256,    -1,
    -237,   251,   803,  -237,   -19,  1241,  -237,   259,  -237,  -237,
     957,   909,  -237,   261,   153,  -237,   255,  1256,   133,   287,
      80,  -237,  -237,  1694,  -237,  -237,  -237,  -237,  -237,  -237,
    -237,  -237,   397,  -237,  -237,  -237,  -237,   253,  -237,    15,
    -237,  -237,  -237,  -237,     2,   103,  -237,  1647,  -237,  1647,
     258,  -237,   -15,  -237,  1365,  -237,  -237,  1096,   168,  -237,
    -237,   173,   195,  -237,  1342,   203,  -237,  1133,  1170,  -237,
    -237,   300,   -21,   270,  1647,  -237,   271,  1647,   273,   135,
    1647,  1361,  -237,  1300,  1459,  -237,  -237,  -237,  -237,    80,
    -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,
    -237,  1647,  1647,    35,  -237,   263,   269,   -35,  -237,    94,
      94,    94,  -237,  -237,  -237,  -237,  -237,   158,  1647,  -237,
    -237,  -237,   282,   138,    -7,  -237,  -237,  -237,  -237,  1022,
    -237,  -237,   274,   136,  -237,  -237,   279,   285,  -237,   288,
     397,  -237,   284,   289,  1647,  1647,  -237,  -237,  -237,  -237,
      40,    58,  -237,  -237,  -237,  -237,  -237,   251,  -237,  -237,
    -237,  -237,   296,  1647,  -237,  -237,    -8,  -237,   298,  -237,
     301,  -237,   306,   171,    94,   372,   371,  -237,  -237,  -237,
     307,   312,  -237,  -237,   175,  -237,   302,  -237,   138,   138,
    -237,   314,  -237,  -237,  -237,  -237,  -237,  -237,   138,  -237,
    -237,  -237,  1647,   287,  1506,   315,  1741,  -237,   304,  -237,
    -237,  1365,  -237,  -237,  1647,   321,  1647,  -237,  1361,   318,
    -237,  1256,  -237,  -237,  -237,  -237,  -237,  1361,  -237,  -237,
    -237,  -237,  -237,  -237,  -237,  -237,  -237,   179,  -237,  1647,
    -237,  1647,  -237,   320,  1553,   325,   392,   154,   324,  -237,
    -237,  -237,   330,  1361,   180,  1600,  1361,  1647,   323,   156,
    -237,    94,  -237,  -237,  1361,  1361,   210,  -237,   326,  1361,
     154,  -237,  -237,  -237,  -237,  1361,  1361,  -237,  -237,  -237,
    -237
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -237,   -13,   310,  -237,   -30,   -27,   -23,   -17,   308,   349,
    -237,   -11,  -237,   172,   -65,   -24,   -73,   379,  -237,     1,
     299,    -3,  -237,  -237,   -66,  -237,  -226,   -76,  -237,    48,
     -62,   -18,   -16,  -110,    13,  -237,    -9,  -237,   -86,   231,
    -237,  -237,  -175,   238,  -237,  -237,   -74,   248,  -237,  -237,
    -237,   254,   139,  -237,   265,  -237,    17,  -237,   -58,  -237,
     221,  -207,    37,  -132,   277,   -54,  -237,  -236,  -237,  -237,
    -237,   -22,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,
    -237,    70,    71,    75,  -237,  -237,     8,  -227,  -237,  -237,
     -71,  -237,   -89,  -237,  -206,  -237,   207
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -8
static const yytype_int16 yytable[] =
{
      94,    62,    70,    61,   170,    64,    72,   331,    64,   116,
     261,    65,   340,   126,    69,   332,   311,   198,   342,   174,
      71,   250,   169,   187,   132,   276,   355,   191,   124,    74,
     173,    91,    59,    92,   313,    55,    79,    74,   240,   378,
     105,    70,    82,    84,   105,    59,   388,   374,   115,   103,
     138,   256,   188,   170,   115,   271,    56,   293,    85,   353,
     279,   253,   130,   293,   125,   170,   243,   132,   170,   132,
      76,   169,   406,    64,   125,   379,   132,   132,   194,   348,
     154,    75,   125,   169,   128,   309,   169,    64,    64,   240,
      86,   206,   291,   203,   200,   269,    95,   335,    57,   134,
     174,    73,   115,    96,   114,   130,   336,   130,   175,   119,
     298,   173,   184,   295,   130,   130,    91,    76,    92,   197,
     407,    58,   335,   395,    70,    76,   252,   304,   255,   305,
     306,   400,   105,    59,   111,   246,   362,   250,    99,   371,
     401,   276,   134,   363,   134,   100,     3,   250,   250,   402,
       4,   134,   134,   364,   266,     6,   268,    91,   102,    92,
       9,   447,   337,   338,    10,    96,   448,   427,   194,   349,
      70,   194,   403,   170,    72,   432,   126,   247,   346,    93,
      63,   347,   170,   206,   170,   132,   257,   258,   319,   175,
     430,   314,   301,   184,   107,   132,   132,    67,   206,   329,
     169,     3,   169,   322,   438,     4,   122,   444,   123,   312,
       6,    68,   197,   324,   106,     9,   390,   325,   456,    10,
     391,   115,    13,   130,   192,   110,   199,   105,   111,   111,
     333,    21,    22,   130,   130,   307,   109,   321,   460,   295,
     112,    27,   461,   117,    30,   382,   383,   384,   344,   118,
     123,   354,   246,   345,   411,   123,    93,   335,   135,   419,
     134,   335,   335,   440,   454,   127,   129,   170,   375,   136,
     134,   134,   358,   137,   138,   360,   436,     3,   370,   139,
      95,     4,   193,    31,    64,   439,     6,   188,   102,    70,
     385,     9,   335,   199,   465,    10,   239,   202,    13,   376,
     377,   254,   248,   259,   251,   260,   206,    21,    22,   412,
     413,   453,   262,   263,   457,   264,   386,    27,   267,   170,
     421,   422,   463,   464,   270,   274,   277,   467,   170,   278,
     243,   296,   307,   469,   470,   308,    99,   169,   333,   317,
     326,   320,   398,   399,    76,   354,   169,   334,   119,   352,
     357,   359,   381,   361,   170,   293,   205,   170,   392,    31,
       3,   405,   387,   125,     4,   170,   170,   393,   396,     6,
     170,   394,   169,   397,     9,   169,   170,   170,    10,   404,
     363,    13,   408,   169,   169,   409,   410,   206,   169,   364,
      21,   417,   418,   420,   169,   169,   431,   462,   423,   428,
     424,   434,     3,   437,   442,   445,     4,   446,   451,   246,
     452,     6,   433,   113,   435,   459,     9,   201,   466,   204,
      10,    83,   241,    13,   303,   210,   316,   310,   323,   299,
     425,   273,    21,    22,   380,   414,   415,   333,   468,   441,
     300,   416,    27,     0,   339,     0,     0,   211,   212,   213,
      59,   214,   215,   216,   217,   458,   218,   219,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     3,     0,   221,
       0,     4,     0,     0,     0,     0,     6,     0,     0,     0,
     222,     9,     0,     0,    31,    10,   223,     0,    13,     2,
     224,     3,   225,   226,     0,     4,     5,    21,    22,     0,
       6,     0,     7,     8,     0,     9,     0,    27,     0,    10,
      11,    12,    13,     0,    15,    16,    17,    18,    19,     0,
      20,    21,    22,    23,    24,     0,     0,     0,     0,    25,
      26,    27,     0,    29,    30,     0,     2,     0,     3,   171,
       0,     0,     4,     5,     0,     0,     0,     6,     0,     7,
       8,     0,     9,     0,     0,     0,    10,    11,    12,    13,
       0,    15,    16,    17,    18,    19,     0,    20,    21,    22,
      23,    24,   302,    31,     0,     0,    25,    26,    27,   172,
      29,    30,     0,     2,     0,     3,   171,     0,     0,     4,
      87,     0,     0,     0,     6,     0,    88,     8,     0,     9,
       0,     0,     0,    10,    89,    12,    13,     0,    15,    16,
      17,    18,    19,     0,    20,    21,    22,    23,    24,     0,
      31,     0,     0,     0,    26,    27,   172,    29,    30,     0,
       0,     0,     0,   297,    -7,     1,     0,     2,     0,     3,
       0,     0,     0,     4,     5,     0,     0,     0,     6,     0,
       7,     8,     0,     9,     0,     0,     0,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    31,    20,    21,
      22,    23,    24,   172,     0,     0,     0,    25,    26,    27,
       0,    29,    30,     0,     0,     0,     0,     0,    -6,     1,
       0,     2,     0,     3,     0,     0,     0,     4,     5,     0,
       0,     0,     6,     0,     7,     8,     0,     9,     0,     0,
       0,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    31,    20,    21,    22,    23,    24,   279,     0,     0,
       0,    25,    26,    27,   280,    29,    30,     0,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,   291,
       2,     0,     3,   140,     0,     0,     4,     5,   141,     0,
     142,     6,     0,     7,     8,    31,     9,   143,   144,   145,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
     146,    20,    21,    22,    23,    24,   147,     0,   148,   149,
      25,    26,    27,     0,    29,    30,   150,     0,     3,     0,
     151,     0,     4,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     9,     0,     0,     0,    10,     0,     0,    13,
       0,     0,     0,     0,     0,     0,     0,   152,    21,    22,
       0,     0,    93,   153,    31,     1,     0,     2,    27,     3,
     140,    30,     0,     4,     5,   141,     0,   142,     6,     0,
       7,     8,     0,     9,   143,   144,   145,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   146,    20,    21,
      22,    23,    24,   147,     0,   148,   149,    25,    26,    27,
      31,    29,    30,   150,     0,     0,     0,   151,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,     0,     0,     0,     4,     5,
       0,     0,     0,     6,   152,     7,     8,     0,     9,    93,
     272,    31,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,    20,    21,    22,    23,    24,     0,     0,
       0,     0,    25,    26,    27,    28,    29,    30,     1,     0,
       2,     0,     3,     0,     0,     0,     4,     5,     0,     0,
       0,     6,     0,     7,     8,     0,     9,     0,     0,     0,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       0,    20,    21,    22,    23,    24,    31,     0,     0,     0,
      25,    26,    27,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     2,     0,     3,     0,     0,
       0,     4,     5,     0,     0,     0,     6,     0,     7,     8,
       0,     9,     0,   318,    31,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     0,    20,    21,    22,    23,
      24,     0,     2,     0,     3,    25,    26,    27,     4,    29,
      30,     0,     0,     6,     0,     0,     8,     0,     9,     0,
       0,     0,    10,     0,    12,    13,     0,    15,    16,    17,
      18,    19,     0,    20,    21,    22,    23,    24,     0,     2,
       0,     3,     0,    26,    27,     4,    29,     0,   389,    31,
       6,     0,     0,     8,     0,     9,     0,     0,     0,    10,
       0,    12,    13,     0,    15,    16,    17,    18,    19,     0,
      20,    21,    22,    23,    24,     0,     2,     0,     3,     0,
      26,    27,     4,    29,     0,   249,    31,     6,     0,     0,
       8,     0,     9,     0,     0,     0,    10,     0,    12,    13,
       0,    15,    16,    17,    18,    19,     0,    20,    21,    22,
      23,    24,     0,     2,     0,     3,     0,    26,    27,     4,
      29,     0,   343,    31,     6,     0,     0,     8,     0,     9,
       0,     0,     0,    10,     0,    12,    13,     0,    15,    16,
      17,    18,    19,     0,    20,    21,    22,    23,    24,     0,
       2,     0,     3,     0,    26,    27,     4,    29,     0,   350,
      31,     6,     0,     0,     8,     0,     9,     0,     0,     0,
      10,     0,    12,    13,     0,    15,    16,    17,    18,    19,
       0,    20,    21,    22,    23,    24,     3,     0,     0,     0,
       4,    26,    27,     0,    29,     6,   351,    31,     0,     0,
       9,     3,     0,     0,    10,     4,     0,    13,     0,   192,
       6,     0,     0,     0,     0,     9,    21,    22,     0,    10,
       0,     0,    13,   140,     0,     0,    27,     0,   141,    30,
     142,    21,    22,     0,    31,     0,     0,   143,   144,   145,
       0,    27,     0,     0,     0,     0,   140,     0,     0,     0,
     146,   141,     0,   142,     0,     0,   147,     0,   148,   149,
     143,   144,   145,     0,     0,     0,   150,   315,    31,     0,
     151,     0,     0,   146,     0,     0,     0,     0,     0,   147,
       0,   148,   149,    31,     0,     0,     0,     3,     0,   150,
       0,     4,     0,   151,     0,     0,     6,   152,     0,     0,
       0,     9,    93,   275,     0,    10,     0,   140,    13,     0,
       0,     0,   141,     0,   142,     0,     0,    21,    22,     0,
     152,   143,   144,   145,     0,    93,   372,    27,     0,     0,
       0,     0,     0,   210,   146,     0,     0,     0,     0,     0,
     147,     0,   148,   149,     0,     0,     0,     0,     0,     0,
     150,     0,     0,     0,   151,   211,   212,   213,    59,   214,
     215,   216,   217,     0,   218,   219,     0,    99,     0,     0,
       0,   220,     0,     0,     0,     0,     0,   221,     0,     0,
     210,   152,     0,     0,     0,     0,    93,     0,   222,     0,
       0,     0,     0,     0,   223,   244,     0,     0,   224,     0,
     225,   226,   211,   212,   213,    59,   214,   215,   216,   217,
       0,   218,   219,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,     0,     0,   210,     0,     0,
       0,     0,   265,     0,     0,   222,     0,     0,     0,     0,
       0,   223,     0,     0,     0,   224,     0,   225,   226,   211,
     212,   213,    59,   214,   215,   216,   217,     0,   218,   219,
       0,     0,     0,     0,     0,   220,     0,     0,     0,     0,
       0,   221,     0,     0,   210,     0,     0,     0,     0,     0,
       0,     0,   222,   373,     0,     0,     0,     0,   223,     0,
       0,     0,   224,     0,   225,   226,   211,   212,   213,    59,
     214,   215,   216,   217,     0,   218,   219,     0,     0,     0,
       0,     0,   220,     0,     0,     0,     0,     0,   221,     0,
       0,   210,     0,     0,     0,     0,     0,     0,     0,   222,
     426,     0,     0,     0,     0,   223,     0,     0,     0,   224,
       0,   225,   226,   211,   212,   213,    59,   214,   215,   216,
     217,     0,   218,   219,     0,     0,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   221,     0,     0,   210,     0,
       0,     0,     0,     0,     0,     0,   222,   443,     0,     0,
       0,     0,   223,     0,     0,     0,   224,     0,   225,   226,
     211,   212,   213,    59,   214,   215,   216,   217,     0,   218,
     219,     0,     0,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   221,     0,     0,   210,     0,     0,     0,     0,
       0,     0,     0,   222,   455,     0,     0,     0,     0,   223,
       0,     0,     0,   224,     0,   225,   226,   211,   212,   213,
      59,   214,   215,   216,   217,     0,   218,   219,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,     0,   221,
       0,     0,   210,     0,     0,     0,     0,     0,     0,     0,
     222,     0,     0,     0,     0,     0,   223,     0,     0,     0,
     224,     0,   225,   226,   211,   212,   213,    59,   214,   215,
     216,   217,     0,   218,   219,     0,     0,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   221,     0,     0,   210,
       0,     0,     0,     0,     0,     0,     0,   330,     0,     0,
       0,     0,     0,   223,     0,     0,     0,   224,     0,   225,
     226,   211,   212,   213,    59,   214,   215,   216,   217,     0,
     218,   219,     0,     0,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,     0,     0,     0,     0,     2,     0,
       0,     0,     0,     0,   429,    87,     0,     0,     0,     0,
     223,    88,     8,     0,   224,     0,   225,   226,     0,    89,
      12,     0,     0,    15,    16,    17,    18,    19,     0,    20,
       2,     0,    23,    24,     0,     0,     0,     0,     0,    26,
       0,     0,    29,     0,     8,     0,     0,     0,    90,     0,
       0,     0,    12,     0,     0,    15,    16,    17,    18,    19,
       0,    20,     0,     0,    23,    24,     0,     0,     0,     0,
       0,    26,     0,     0,    29,     0,     0,     0,     0,     0,
      90
};

static const yytype_int16 yycheck[] =
{
      54,    25,    32,    14,    93,    28,    33,   213,    31,    67,
     142,    28,   239,    79,    31,   222,   191,   103,   244,    95,
      33,   131,    93,    97,    86,   157,   262,   100,    53,     1,
      95,    49,    53,    49,    53,    80,    39,     1,    53,     4,
      81,    71,    41,    42,    81,    53,    53,   274,    83,    58,
      85,   137,    53,   142,    83,    92,    53,    92,    53,    80,
      58,   135,    86,    92,    89,   154,   124,   129,   157,   131,
      89,   142,    80,    96,    89,    40,   138,   139,   102,   254,
      93,    53,    89,   154,    83,    86,   157,   110,   111,    53,
      85,   115,    90,   110,   107,   149,    85,    82,    53,    86,
     176,     0,    83,    92,    80,   129,    91,   131,    95,    90,
     175,   176,    95,   171,   138,   139,   134,    89,   134,   102,
     356,    53,    82,   330,   154,    89,   135,   181,   137,   183,
     184,    91,    81,    53,    83,   127,     1,   247,    85,   271,
      82,   273,   129,     8,   131,    92,     5,   257,   258,    91,
       9,   138,   139,    18,   146,    14,   148,   175,    85,   175,
      19,     7,    59,    60,    23,    92,    12,   394,   192,   255,
     200,   195,   347,   262,   201,   401,   242,   129,   252,    85,
      53,   254,   271,   207,   273,   247,   138,   139,   201,   176,
     396,   194,   175,   176,    85,   257,   258,    53,   222,   210,
     271,     5,   273,   206,   411,     9,    80,   434,    82,   192,
      14,    53,   195,    80,    53,    19,    80,    84,   445,    23,
      84,    83,    26,   247,    28,    79,    81,    81,    83,    83,
     222,    35,    36,   257,   258,    82,    53,    84,    82,   297,
      53,    45,    86,    88,    48,   299,   300,   301,    80,    80,
      82,   262,   244,    80,    83,    82,    85,    82,    53,    84,
     247,    82,    82,    84,    84,    79,    85,   356,   279,    53,
     257,   258,   264,    53,    85,   267,   408,     5,   270,    85,
      85,     9,    86,    87,   307,   417,    14,    53,    85,   319,
     307,    19,    82,    81,    84,    23,    90,    80,    26,   291,
     292,    92,   130,    80,   132,    80,   330,    35,    36,   363,
     364,   443,    83,    53,   446,    83,   308,    45,    83,   408,
     378,   379,   454,   455,    83,    83,    80,   459,   417,    80,
     388,    53,    82,   465,   466,    79,    85,   408,   330,    80,
      53,    80,   334,   335,    89,   356,   417,    94,    90,    49,
      80,    80,    83,    80,   443,    92,    84,   446,    79,    87,
       5,   353,    80,    89,     9,   454,   455,    82,    84,    14,
     459,    83,   443,    84,    19,   446,   465,   466,    23,    83,
       8,    26,    84,   454,   455,    84,    80,   411,   459,    18,
      35,    84,    80,    91,   465,   466,    92,   451,    84,    84,
     392,    80,     5,    85,    84,    80,     9,    15,    84,   401,
      80,    14,   404,    64,   406,    92,    19,   107,    92,   111,
      23,    42,   123,    26,   176,    28,   195,   189,   207,   175,
     393,   154,    35,    36,   295,   365,   365,   429,   460,   431,
     175,   366,    45,    -1,   237,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,   447,    59,    60,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,     5,    -1,    72,
      -1,     9,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      83,    19,    -1,    -1,    87,    23,    89,    -1,    26,     3,
      93,     5,    95,    96,    -1,     9,    10,    35,    36,    -1,
      14,    -1,    16,    17,    -1,    19,    -1,    45,    -1,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    43,
      44,    45,    -1,    47,    48,    -1,     3,    -1,     5,    53,
      -1,    -1,     9,    10,    -1,    -1,    -1,    14,    -1,    16,
      17,    -1,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    86,    87,    -1,    -1,    43,    44,    45,    93,
      47,    48,    -1,     3,    -1,     5,    53,    -1,    -1,     9,
      10,    -1,    -1,    -1,    14,    -1,    16,    17,    -1,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
      87,    -1,    -1,    -1,    44,    45,    93,    47,    48,    -1,
      -1,    -1,    -1,    53,     0,     1,    -1,     3,    -1,     5,
      -1,    -1,    -1,     9,    10,    -1,    -1,    -1,    14,    -1,
      16,    17,    -1,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    87,    34,    35,
      36,    37,    38,    93,    -1,    -1,    -1,    43,    44,    45,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,     0,     1,
      -1,     3,    -1,     5,    -1,    -1,    -1,     9,    10,    -1,
      -1,    -1,    14,    -1,    16,    17,    -1,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    87,    34,    35,    36,    37,    38,    58,    -1,    -1,
      -1,    43,    44,    45,    65,    47,    48,    -1,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    90,
       3,    -1,     5,     6,    -1,    -1,     9,    10,    11,    -1,
      13,    14,    -1,    16,    17,    87,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      43,    44,    45,    -1,    47,    48,    49,    -1,     5,    -1,
      53,    -1,     9,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    35,    36,
      -1,    -1,    85,    86,    87,     1,    -1,     3,    45,     5,
       6,    48,    -1,     9,    10,    11,    -1,    13,    14,    -1,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    42,    43,    44,    45,
      87,    47,    48,    49,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,    -1,     5,    -1,    -1,    -1,     9,    10,
      -1,    -1,    -1,    14,    80,    16,    17,    -1,    19,    85,
      86,    87,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,     1,    -1,
       3,    -1,     5,    -1,    -1,    -1,     9,    10,    -1,    -1,
      -1,    14,    -1,    16,    17,    -1,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    87,    -1,    -1,    -1,
      43,    44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,    -1,     5,    -1,    -1,
      -1,     9,    10,    -1,    -1,    -1,    14,    -1,    16,    17,
      -1,    19,    -1,    86,    87,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    -1,     3,    -1,     5,    43,    44,    45,     9,    47,
      48,    -1,    -1,    14,    -1,    -1,    17,    -1,    19,    -1,
      -1,    -1,    23,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,     3,
      -1,     5,    -1,    44,    45,     9,    47,    -1,    86,    87,
      14,    -1,    -1,    17,    -1,    19,    -1,    -1,    -1,    23,
      -1,    25,    26,    -1,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    -1,     3,    -1,     5,    -1,
      44,    45,     9,    47,    -1,    86,    87,    14,    -1,    -1,
      17,    -1,    19,    -1,    -1,    -1,    23,    -1,    25,    26,
      -1,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    -1,     3,    -1,     5,    -1,    44,    45,     9,
      47,    -1,    86,    87,    14,    -1,    -1,    17,    -1,    19,
      -1,    -1,    -1,    23,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    -1,
       3,    -1,     5,    -1,    44,    45,     9,    47,    -1,    86,
      87,    14,    -1,    -1,    17,    -1,    19,    -1,    -1,    -1,
      23,    -1,    25,    26,    -1,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,     5,    -1,    -1,    -1,
       9,    44,    45,    -1,    47,    14,    86,    87,    -1,    -1,
      19,     5,    -1,    -1,    23,     9,    -1,    26,    -1,    28,
      14,    -1,    -1,    -1,    -1,    19,    35,    36,    -1,    23,
      -1,    -1,    26,     6,    -1,    -1,    45,    -1,    11,    48,
      13,    35,    36,    -1,    87,    -1,    -1,    20,    21,    22,
      -1,    45,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      33,    11,    -1,    13,    -1,    -1,    39,    -1,    41,    42,
      20,    21,    22,    -1,    -1,    -1,    49,    86,    87,    -1,
      53,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    42,    87,    -1,    -1,    -1,     5,    -1,    49,
      -1,     9,    -1,    53,    -1,    -1,    14,    80,    -1,    -1,
      -1,    19,    85,    86,    -1,    23,    -1,     6,    26,    -1,
      -1,    -1,    11,    -1,    13,    -1,    -1,    35,    36,    -1,
      80,    20,    21,    22,    -1,    85,    86,    45,    -1,    -1,
      -1,    -1,    -1,    28,    33,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    53,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    -1,    85,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      28,    80,    -1,    -1,    -1,    -1,    85,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    93,    -1,
      95,    96,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    93,    -1,    95,    96,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    93,    -1,    95,    96,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    93,
      -1,    95,    96,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    93,    -1,    95,    96,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    93,    -1,    95,    96,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      93,    -1,    95,    96,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    93,    -1,    95,
      96,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    83,    10,    -1,    -1,    -1,    -1,
      89,    16,    17,    -1,    93,    -1,    95,    96,    -1,    24,
      25,    -1,    -1,    28,    29,    30,    31,    32,    -1,    34,
       3,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    47,    -1,    17,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    25,    -1,    -1,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     5,     9,    10,    14,    16,    17,    19,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      34,    35,    36,    37,    38,    43,    44,    45,    46,    47,
      48,    87,    98,    99,   100,   101,   102,   107,   111,   112,
     113,   114,   115,   116,   124,   125,   127,   128,   129,   131,
     132,   137,   141,   152,   153,    80,    53,    53,    53,    53,
     103,   108,   112,    53,   103,   104,   106,    53,    53,   104,
     101,    98,   102,     0,     1,    53,    89,   110,   117,   118,
     119,   121,   116,   114,   116,    53,    85,    10,    16,    24,
      53,   128,   129,    85,   162,    85,    92,   133,   143,    85,
      92,   139,    85,   133,   135,    81,    53,    85,   109,    53,
      79,    83,    53,   106,    80,    83,   155,    88,    80,    90,
     120,   155,    80,    82,    53,    89,   121,    79,   116,    85,
     112,   126,   127,   130,   131,    53,    53,    53,    85,    85,
       6,    11,    13,    20,    21,    22,    33,    39,    41,    42,
      49,    53,    80,    86,    98,   108,   160,   161,   162,   163,
     164,   167,   170,   171,   172,   173,   174,   175,   181,   187,
     189,    53,    93,   111,   124,   131,   142,   144,   145,   146,
     147,   148,   150,   151,   153,   104,   105,   143,    53,   138,
     140,   113,    28,    86,   112,   134,   136,   153,   135,    81,
      98,    99,    80,   104,   105,    84,   112,   154,   157,   158,
      28,    50,    51,    52,    54,    55,    56,    57,    59,    60,
      66,    72,    83,    89,    93,    95,    96,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,    90,
      53,   117,   118,   155,    90,   123,   183,   126,   110,    86,
     130,   110,   133,   143,    92,   133,   135,   126,   126,    80,
      80,   160,    83,    53,    83,    80,   183,    83,   183,   162,
      83,    92,    86,   161,    83,    86,   160,    80,    80,    58,
      65,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    90,   165,    92,   149,   155,    53,    53,   111,   148,
     151,   153,    86,   144,   162,   162,   162,    82,    79,    86,
     140,   139,   153,    53,   118,    86,   136,    80,    86,    98,
      80,    84,   118,   157,    80,    84,    53,   156,   159,   108,
      83,   191,   158,   183,    94,    82,    91,    59,    60,   193,
     184,   122,   123,    86,    80,    80,   143,   113,   139,   135,
      86,    86,    49,    80,   108,   164,   169,    80,   183,    80,
     183,    80,     1,     8,    18,   176,   177,   178,   179,   180,
     183,   160,    86,    84,   184,   108,   183,   183,     4,    40,
     149,    83,   162,   162,   162,   104,   183,    80,    53,    86,
      80,    84,    79,    82,    83,   158,    84,    84,   183,   183,
      91,    82,    91,   139,    83,   183,    80,   164,    84,    84,
      80,    83,   162,   162,   178,   179,   180,    84,    80,    84,
      91,   155,   155,    84,   183,   159,    84,   184,    84,    83,
     191,    92,   123,   183,    80,   183,   160,    85,   158,   160,
      84,   183,    84,    84,   184,    80,    15,     7,    12,   166,
     168,    84,    80,   160,    84,    84,   184,   160,   183,    92,
      82,    86,   162,   160,   160,    84,    92,   160,   168,   160,
     160
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 28 "c-sharpie.y"
    { printf ("declaracionMasUno-> declaracionMasUno  declaracion\n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 29 "c-sharpie.y"
    { printf ("declaracionMasUno-> declaracion\n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 31 "c-sharpie.y"
    { printf ("directiva_usoMasUno-> directiva_usoMasUno directiva_uso \n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 32 "c-sharpie.y"
    { printf ("directiva_usoMasUno-> directiva_uso \n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 36 "c-sharpie.y"
    { printf (" modulo -> directiva_usoMasUno declaracionMasUno\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 38 "c-sharpie.y"
    { printf (" modulo -> declaracionMasUno\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 41 "c-sharpie.y"
    { printf ("declaracion-> declaracion_variable\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 42 "c-sharpie.y"
    { printf ("declaracion-> declaracion_tipo \n");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 43 "c-sharpie.y"
    { printf ("declaracion-> declaracion_funcion \n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 47 "c-sharpie.y"
    { printf ("directiva_uso-> IDENTIFICADOR '='  nombre_tipo_o_espacio_nombres ';'  \n");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 48 "c-sharpie.y"
    { printf ("directiva_uso-> nombre_tipo_o_espacio_nombres ';'  \n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 51 "c-sharpie.y"
    { printf ("identificador_con_tiposMasUno-> identificador_con_tiposMasUno IDENTIFICADOR '.' \n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 52 "c-sharpie.y"
    { printf ("identificador_con_tiposMasUno-> IDENTIFICADOR '.'\n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 55 "c-sharpie.y"
    { printf ("nombre_tipo_o_espacio_nombres-> identificador_con_tiposMasUno '.' identificador_con_tipos\n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 56 "c-sharpie.y"
    { printf ("nombre_tipo_o_espacio_nombres-> identificador_con_tipos\n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 59 "c-sharpie.y"
    { printf ("nombre_tipo_o_espacio_nombresMasUno-> nombre_tipo_o_espacio_nombresMasUno ',' nombre_tipo_o_espacio_nombres \n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 60 "c-sharpie.y"
    { printf ("nombre_tipo_o_espacio_nombresMasUno:-> nombre_tipo_o_espacio_nombres \n");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 64 "c-sharpie.y"
    { printf ("identificador_con_tipos-> IDENTIFICADOR \n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 65 "c-sharpie.y"
    { printf ("identificador_con_tipos-> IDENTIFICADOR '(' nombre_tipo_o_espacio_nombresMasUno ')' \n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 73 "c-sharpie.y"
    { printf ("declaracion_espacio_nombres-> NAMESPACE identificador_anidado bloque_espacio_nombres  \n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 74 "c-sharpie.y"
    { printf("Bad declaracion_espacio_nombres \n"); yyerrok; ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 78 "c-sharpie.y"
    { printf ("identificador_anidado -> Identificador_con_tiposMasUno IDENTIFICADOR  \n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 79 "c-sharpie.y"
    { printf ("identificador_anidado ->  IDENTIFICADOR  \n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 87 "c-sharpie.y"
    { printf ("bloque_espacio_nombres-> '{' declaracionMasUno '}' \n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 88 "c-sharpie.y"
    { printf ("bloque_espacio_nombres-> '{' directiva_usoMasUno declaracionMasUno '}' \n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 96 "c-sharpie.y"
    { printf (" nombreMasUno -> nombreMasUno , nombre\n");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 98 "c-sharpie.y"
    { printf (" nombreMasUno -> nombre\n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 103 "c-sharpie.y"
    { printf (" declaracion_variable -> tipo nombreMasUno ';'\n");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 107 "c-sharpie.y"
    { printf (" tipo -> '<' nombre_tipo_o_espacio_nombres '>'\n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 109 "c-sharpie.y"
    { printf (" tipo -> tipo_escalar\n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 112 "c-sharpie.y"
    { printf (" tipo_escalar -> signo longitud tipo_basico\n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 113 "c-sharpie.y"
    { printf (" tipo_escalar -> signo tipo_basico\n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 114 "c-sharpie.y"
    { printf (" tipo_escalar -> longitud tipo_basico\n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 115 "c-sharpie.y"
    { printf (" tipo_escalar -> tipo_basico\n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 119 "c-sharpie.y"
    { printf (" longitud -> 'short'\n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 121 "c-sharpie.y"
    { printf (" longitud -> 'long'\n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 125 "c-sharpie.y"
    { printf (" signo -> 'signed'\n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 127 "c-sharpie.y"
    { printf (" signo -> 'unsigned'\n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 131 "c-sharpie.y"
    { printf (" tipo_basico -> 'char'\n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 133 "c-sharpie.y"
    { printf (" tipo_basico -> 'int'\n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 135 "c-sharpie.y"
    { printf (" tipo_basico -> 'float'\n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 137 "c-sharpie.y"
    { printf (" tipo_basico -> 'double'\n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 139 "c-sharpie.y"
    { printf (" tipo_basico -> 'boolean'\n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 143 "c-sharpie.y"
    { printf (" nombre -> dato '=' valor\n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 145 "c-sharpie.y"
    { printf (" nombre -> dato\n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 146 "c-sharpie.y"
    { printf("nombre\n"); yyerrok; ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 150 "c-sharpie.y"
    { printf (" asteriscoMasUno-> asteriscoMasUno '*' \n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 151 "c-sharpie.y"
    { printf (" asteriscoMasUno-> '*' \n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 154 "c-sharpie.y"
    { printf (" dato -> asteriscoMasUno dato_indexado\n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 156 "c-sharpie.y"
    { printf (" dato -> dato_indexado\n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 163 "c-sharpie.y"
    { printf (" corchetesMasUnoCon0OMasexpr -> '[' expresionMasUno ']'\n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 165 "c-sharpie.y"
    { printf (" corchetesMasUnoCon0OMasexpr -> corchetesMasUnoCon0OMasexpr '[' expresionMasUno ']'\n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 169 "c-sharpie.y"
    { printf (" dato_indexado -> IDENTIFICADOR corchetesMasUnoCon0OMasexpr\n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 171 "c-sharpie.y"
    { printf (" dato_indexado -> IDENTIFICADOR\n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 175 "c-sharpie.y"
    { printf (" valorMasUno -> valorMasUno , valor\n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 177 "c-sharpie.y"
    { printf (" valorMasUno -> valor\n");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 182 "c-sharpie.y"
    { printf (" valor -> expresion\n");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 184 "c-sharpie.y"
    { printf (" valor -> '[' valorMasUno ']'\n");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 192 "c-sharpie.y"
    { printf ("declaracion_tipo -> nombramiento_tipo\n");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 193 "c-sharpie.y"
    { printf ("declaracion_tipo -> declaracion_struct_union\n");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 194 "c-sharpie.y"
    { printf ("declaracion_tipo -> declaracion_interfaz\n");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 195 "c-sharpie.y"
    { printf ("declaracion_tipo -> declaracion_enum\n");;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 196 "c-sharpie.y"
    { printf ("declaracion_tipo -> declaracion_clase\n");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 200 "c-sharpie.y"
    { printf ("nombramiento_tipo -> TYPEDEF tipo ID\n");;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 206 "c-sharpie.y"
    { printf ("declaracion_campoMasUno-> declaracion_campoMasUno declaracion_campo  \n");;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 207 "c-sharpie.y"
    { printf ("declaracion_campoMasUno-> declaracion_campo   \n");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 211 "c-sharpie.y"
    { printf ("declaracion_struct_union->  struct_union  '{' declaracion_campoMasUno '}'\n");;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 213 "c-sharpie.y"
    {printf ("declaracion_struct_union-> IDENTIFICADOR struct_union lavesMasUnoConCeroOVariasDeclaracion_campoMasUno\n");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 215 "c-sharpie.y"
    {printf ("declaracion_struct_union-> modificadorMasUno struct_union lavesMasUnoConCeroOVariasDeclaracion_campoMasUno\n");;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 217 "c-sharpie.y"
    {printf ("declaracion_struct_union->modificadorMasUno IDENTIFICADOR   '{' declaracion_campoMasUno '}'\n");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 221 "c-sharpie.y"
    { printf ("modificador ->  NEW \n");;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 222 "c-sharpie.y"
    { printf ("modificador ->  PUBLIC \n");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 223 "c-sharpie.y"
    { printf ("modificador ->  PROTECTED \n");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 224 "c-sharpie.y"
    { printf ("modificador ->  INTERNAL \n");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 225 "c-sharpie.y"
    { printf ("modificador ->  PRIVATE \n");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 226 "c-sharpie.y"
    { printf ("modificador ->  STATIC \n");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 227 "c-sharpie.y"
    { printf ("modificador ->  VIRTUAL \n");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 228 "c-sharpie.y"
    { printf ("modificador ->  SEALED \n");;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 229 "c-sharpie.y"
    { printf ("modificador ->  OVERRIDE \n");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 230 "c-sharpie.y"
    { printf ("modificador ->  ABSTRACT \n");;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 231 "c-sharpie.y"
    { printf ("modificador ->  EXTERN \n");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 234 "c-sharpie.y"
    { printf ("struct_union ->  STRUCT \n");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 235 "c-sharpie.y"
    { printf ("modificador ->  UNION \n");;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 238 "c-sharpie.y"
    { printf ("declaracion_campo ->   tipo nombreMasUno ';'\n");;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 239 "c-sharpie.y"
    { printf ("declaracion_campo -> declaracion_struct_union nombreMasUno ';'\n");;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 241 "c-sharpie.y"
    { printf ("modificadorMasUno -> modificadorMasUno modificador \n");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 242 "c-sharpie.y"
    { printf ("modificadorMasUno -> modificador \n");;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 245 "c-sharpie.y"
    { printf ("declaracion_interfaz -> INTERFACE IDENTIFICADOR  cuerpo_interfaz \n");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 247 "c-sharpie.y"
    { printf ("declaracion_interfaz -> INTERFACE IDENTIFICADOR  herencia  cuerpo_interfaz\n");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 249 "c-sharpie.y"
    { printf ("declaracion_interfaz -> modificadorMasUno INTERFACE IDENTIFICADOR cuerpo_interfaz\n");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 251 "c-sharpie.y"
    { printf ("declaracion_interfaz -> modificadorMasUno INTERFACE IDENTIFICADOR herencia cuerpo_interf\n");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 255 "c-sharpie.y"
    { printf ("herencia -> ':' nombre_tipo_o_espacio_nombresMasUno\n");;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 259 "c-sharpie.y"
    { printf ("declaracion_metodo_interfazMasUno -> declaracion_metodo_interfazMasUno declaracion_metodo_interfaz\n");;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 260 "c-sharpie.y"
    { printf ("declaracion_metodo_interfaz -> declaracion_metodo_interfaz\n");;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 263 "c-sharpie.y"
    { printf ("cuerpo_interfaz -> '{' declaracion_metodo_interfazMasUno'}'\n");;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 264 "c-sharpie.y"
    { printf ("cuerpo_interfaz -> '{''}'\n");;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 267 "c-sharpie.y"
    { printf ("declaracion_metodo_interfaz -> firma_funcion\n");;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 269 "c-sharpie.y"
    { printf ("declaracion_metodo_interfaz -> firma_funcion\n");;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 276 "c-sharpie.y"
    { printf ("declaracion_enum -> ENUM IDENTIFICADOR ':' tipo_escalar cuerpo_enum\n");;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 277 "c-sharpie.y"
    { printf ("declaracion_enum -> ENUM IDENTIFICADOR cuerpo_enum\n");;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 279 "c-sharpie.y"
    { printf ("declaracion_enum -> modificadorMasUno ENUM IDENTIFICADOR\n");;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 280 "c-sharpie.y"
    { printf ("declaracion_enum -> ENUM IDENTIFICADOR\n");;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 286 "c-sharpie.y"
    { printf ("declaracion_miembro_enumMasUno -> declaracion_miembro_enumMasUno declaracion_miembro_enum\n");;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 287 "c-sharpie.y"
    { printf ("declaracion_miembro_enumMasUno -> declaracion_miembro_enum\n");;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 292 "c-sharpie.y"
    { printf ("cuerpo_enum -> '{'  declaracion_miembro_enumMasUno  '}'\n");;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 296 "c-sharpie.y"
    { printf ("declaracion_miembro_enum -> IDENTIFICADOR  '=' expresion\n");;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 297 "c-sharpie.y"
    { printf ("declaracion_miembro_enum -> IDENTIFICADOR\n");;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 307 "c-sharpie.y"
    { printf ("declaracion_clase -> modificadorMasUno CLASS IDENTIFICADOR  cuerpo_clase\n");;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 309 "c-sharpie.y"
    { printf ("declaracion_clase -> CLASS IDENTIFICADOR  cuerpo_clase\n");;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 311 "c-sharpie.y"
    { printf ("declaracion_clase -> modificadorMasUno CLASS IDENTIFICADOR  herencia cuerpo_clase\n");;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 313 "c-sharpie.y"
    {printf ("declaracion_clase -> modificadorMasUno CLASS IDENTIFICADOR  herencia cuerpo_clase\n");;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 318 "c-sharpie.y"
    { printf (" declaracion_elemento_claseMasUno -> declaracion_elemento_clase\n");;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 320 "c-sharpie.y"
    { printf (" declaracion_elemento_claseMasUno -> declaracion_elemento_claseMasUno declaracion_elemento_clase\n");;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 325 "c-sharpie.y"
    { printf (" cuerpo_clase -> '{' declaracion_elemento_claseMasUno '}'\n");;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 329 "c-sharpie.y"
    { printf (" declaracion_elemento_clase -> declaracion_tipo\n");;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 331 "c-sharpie.y"
    { printf (" declaracion_elemento_clase -> declaracion_atributo\n");;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 333 "c-sharpie.y"
    { printf (" declaracion_elemento_clase -> declaracion_metodo\n");;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 335 "c-sharpie.y"
    { printf (" declaracion_elemento_clase -> declaracion_constructor\n");;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 337 "c-sharpie.y"
    { printf (" declaracion_elemento_clase -> declaracion_destructor\n");;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 341 "c-sharpie.y"
    { printf (" declaracion_atributo -> modificadorMasUno declaracion_variable\n");;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 343 "c-sharpie.y"
    { printf (" declaracion_atributo -> declaracion_variable\n");;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 347 "c-sharpie.y"
    { printf (" declaracion_metodo -> modificadorMasUno firma_funcion bloque_instrucciones\n");;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 349 "c-sharpie.y"
    { printf (" declaracion_metodo -> firma_funcion bloque_instrucciones\n");;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 356 "c-sharpie.y"
    { printf (" declaracion_constructor -> modificadorMasUno cabecera_constructor bloque_instrucciones\n");;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 358 "c-sharpie.y"
    { printf (" declaracion_constructor -> cabecera_constructor bloque_instrucciones\n");;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 362 "c-sharpie.y"
    { printf (" cabecera_constructor -> IDENTIFICADOR parametros inicializador_constructor\n");;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 364 "c-sharpie.y"
    { printf (" cabecera_constructor -> IDENTIFICADOR inicializador_constructor\n");;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 366 "c-sharpie.y"
    { printf (" cabecera_constructor -> IDENTIFICADOR parametros\n");;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 371 "c-sharpie.y"
    { printf (" inicializador_constructor -> ':' BASE parametros\n");;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 373 "c-sharpie.y"
    { printf (" inicializador_constructor -> ':' THIS parametros\n");;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 377 "c-sharpie.y"
    { printf (" declaracion_destructor -> modificadorMasUno cabecera_destructor bloque_instrucciones\n");;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 379 "c-sharpie.y"
    { printf (" declaracion_destructor -> cabecera_destructor bloque_instrucciones\n");;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 383 "c-sharpie.y"
    { printf (" cabecera_destructor -> '~' IDENTIFICADOR '(' ')'\n");;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 393 "c-sharpie.y"
    { printf (" declaracion_funcion-> firma_funcion bloque_instrucciones\n");;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 397 "c-sharpie.y"
    { printf (" firma_funcion-> VOID IDENTIFICADOR parametros\n");;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 399 "c-sharpie.y"
    { printf (" firma_funcion -> tipo asteriscoMasUno IDENTIFICADOR parametros\n");;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 401 "c-sharpie.y"
    { printf (" firma_funcion -> tipo IDENTIFICADOR parametros\n");;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 405 "c-sharpie.y"
    { printf (" argumentosMasUno -> argumentosMasUno argumentos ';'\n");;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 407 "c-sharpie.y"
    { printf (" argumentosMasUno ->  argumentos ';'\n");;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 412 "c-sharpie.y"
    { printf (" parametros -> '(' argumentosMasUno argumentos ')'\n");;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 414 "c-sharpie.y"
    { printf (" parametros -> '(' argumentosMasUno argumentos ')'\n");;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 416 "c-sharpie.y"
    { printf (" parametros -> '(' argumentosMasUno argumentos ')'\n");;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 420 "c-sharpie.y"
    { printf (" variableMasUno ->variableMasUno ',' variable\n");;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 422 "c-sharpie.y"
    { printf (" variableMasUno -> variable\n");;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 427 "c-sharpie.y"
    { printf ("argumentos -> nombre_tipo variableMasUno\n");;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 431 "c-sharpie.y"
    { printf (" nombre_tipo -> tipo asteriscoMasUno\n");;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 433 "c-sharpie.y"
    { printf (" nombre_tipo ->tipo\n");;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 437 "c-sharpie.y"
    { printf (" variable -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 439 "c-sharpie.y"
    { printf (" variable -> IDENTIFICADOR\n");;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 448 "c-sharpie.y"
    { printf (" instruccion -> bloque_instrucciones\n");;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 450 "c-sharpie.y"
    { printf (" instruccion -> instruccion_expresion\n");;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 452 "c-sharpie.y"
    { printf (" instruccion -> instruccion_bifurcacion\n");;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 454 "c-sharpie.y"
    { printf (" instruccion -> instruccion_bucle\n");;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 456 "c-sharpie.y"
    { printf (" instruccion -> instruccion_salto\n");;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 458 "c-sharpie.y"
    { printf (" instruccion -> instruccion_destino_salto\n");;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 460 "c-sharpie.y"
    { printf (" instruccion -> instruccion_retorno\n");;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 462 "c-sharpie.y"
    { printf (" instruccion -> instruccion_lanzamiento_excepcion\n");;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 464 "c-sharpie.y"
    { printf (" instruccion -> instruccion_captura_excepcion\n");;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 466 "c-sharpie.y"
    { printf (" instruccion -> instruccion_vacia\n");;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 470 "c-sharpie.y"
    { printf (" instruccionMasUno-> instruccionMasUno instruccion\n");;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 472 "c-sharpie.y"
    { printf (" instruccionMasUno->  instruccion\n");;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 476 "c-sharpie.y"
    { printf (" bloque_instrucciones -> '{' declaracionMasUno instruccionMasUno '}'\n");;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 478 "c-sharpie.y"
    { printf (" bloque_instrucciones -> '{' declaracionMasUno '}'\n");;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 480 "c-sharpie.y"
    { printf (" bloque_instrucciones -> '{' instruccionMasUno '}'\n");;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 482 "c-sharpie.y"
    { printf (" bloque_instrucciones -> '{' '}'\n");;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 486 "c-sharpie.y"
    { printf (" instruccion_expresion -> expresion_funcional ';'\n");;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 488 "c-sharpie.y"
    { printf (" instruccion_expresion -> asignacion ';'\n");;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 492 "c-sharpie.y"
    { printf (" asignacion -> expresion_indexada operador_asignacion expresion\n");;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 497 "c-sharpie.y"
    { printf (" operador_asignacion -> EQ\n");;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 499 "c-sharpie.y"
    { printf (" operador_asignacion -> MULT_ASIG\n");;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 501 "c-sharpie.y"
    { printf (" operador_asignacion -> DIV_ASIG\n");;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 503 "c-sharpie.y"
    { printf (" operador_asignacion -> MOD_ASIG\n");;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 505 "c-sharpie.y"
    { printf (" operador_asignacion -> SUMA_ASIG\n");;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 507 "c-sharpie.y"
    { printf (" operador_asignacion -> RESTA_ASIG\n");;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 509 "c-sharpie.y"
    { printf (" operador_asignacion -> DESPI_ASIG\n");;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 511 "c-sharpie.y"
    { printf (" operador_asignacion -> DESPD_ASIG\n");;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 513 "c-sharpie.y"
    { printf (" operador_asignacion -> AND_ASIG\n");;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 515 "c-sharpie.y"
    { printf (" operador_asignacion -> XOR_ASIG\n");;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 517 "c-sharpie.y"
    { printf (" operador_asignacion -> OR_ASIG\n");;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 524 "c-sharpie.y"
    { printf (" instruccion_casoMasUno -> instruccion_casoMasUno ',' instruccion_caso\n");;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 526 "c-sharpie.y"
    { printf ("  instruccion_casoMasUno -> instruccion_caso\n");;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 530 "c-sharpie.y"
    { printf (" instruccion_bifurcacion ->  IF '(' expresion ')' instruccion\n");;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 532 "c-sharpie.y"
    { printf (" instruccion_bifurcacion -> IF '(' expresion ')' instruccion ELSE instruccion\n");;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 534 "c-sharpie.y"
    { printf (" instruccion_bifurcacion -> SWITCH '(' expresion ')' '{' instruccion_casoMasUno '}'\n");;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 536 "c-sharpie.y"
    {printf (" instruccion_caso -> CASE expresion ':' instruccion \n");;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 537 "c-sharpie.y"
    {printf (" instruccion_caso -> DEFAULT ':' instruccion \n");;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 540 "c-sharpie.y"
    {printf ("asignacionMasUno -> asignacionMasUno asignacion \n");;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 541 "c-sharpie.y"
    {printf ("asignacionMasUno -> asignacion\n");;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 543 "c-sharpie.y"
    {printf ("instruccion_bucle -> WHILE '('expresion')'\n");;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 544 "c-sharpie.y"
    {printf ("instruccion_bucle -> DO instruccion WHILE '('expresion')'\n");;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 545 "c-sharpie.y"
    {printf ("instruccion_bucle -> FOR '(' ';' expresion';' ')' instruccion\n");;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 546 "c-sharpie.y"
    {printf ("instruccion_bucle -> FOR '(' asignacionMasUno';' expresion';' expresionMasUno ')' instruccion\n\n");;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 547 "c-sharpie.y"
    {printf ("instruccion_bucle -> FOR '(' ';' expresion';' expresionMasUno')' instruccion\n");;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 548 "c-sharpie.y"
    {printf ("instruccion_bucle -> FOR '('asignacionMasUno ';' expresion';' ')' instruccion\n");;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 551 "c-sharpie.y"
    {printf ("instruccion_salto -> GOTO IDENTIFICADOR ';'\n");;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 552 "c-sharpie.y"
    {printf ("instruccion_salto -> CONTINUE ';'\n");;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 553 "c-sharpie.y"
    {printf ("instruccion_salto -> BREAK ';'\n");;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 555 "c-sharpie.y"
    {printf ("instruccion_destino_salto -> IDENTIFICADOR ':' instruccion ';'\n");;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 558 "c-sharpie.y"
    {printf ("instruccion_retorno -> RETURN ';'\n");;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 559 "c-sharpie.y"
    {printf ("instruccion_retorno -> RETURN expresion ';'\n");;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 562 "c-sharpie.y"
    {printf ("instruccion_lanzamiento_excepcion -> THROW expresion ';'\n");;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 565 "c-sharpie.y"
    {printf ("instruccion_captura_excepcion -> TRY bloque_instrucciones clausulas_catch\n");;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 566 "c-sharpie.y"
    {printf ("instruccion_captura_excepcion -> TRY bloque_instrucciones clausula_finally\n");;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 567 "c-sharpie.y"
    {printf ("instruccion_captura_excepcion -> TRY bloque_instrucciones clausulas_catch clausula_finally\n");;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 570 "c-sharpie.y"
    {printf ("clausula_catch_especificaMasUno -> clausula_catch_especificaMasUno clausula_catch_especifica\n");;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 571 "c-sharpie.y"
    {printf ("clausula_catch_especificaMasUno -> clausula_catch_especifica\n");;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 574 "c-sharpie.y"
    {printf ("clausulas_catch -> clausula_catch_especificaMasUno\n");;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 575 "c-sharpie.y"
    {printf ("clausulas_catch -> clausula_catch_general\n");;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 576 "c-sharpie.y"
    {printf ("clausulas_catch -> clausula_catch_especificaMasUno clausula_catch_general\n");;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 577 "c-sharpie.y"
    { printf("clausulas_catch\n"); yyerrok; ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 580 "c-sharpie.y"
    {printf ("clausula_catch_especifica -> CATCH '(' nombre_tipo ')' bloque_instrucciones\n");;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 583 "c-sharpie.y"
    {printf ("clausula_catch_general -> CATCH bloque_instrucciones\n");;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 586 "c-sharpie.y"
    {printf ("clausula_finally -> FINALLY bloque_instrucciones\n");;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 588 "c-sharpie.y"
    {printf ("instruccion_vacia -> ';'\n");;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 597 "c-sharpie.y"
    {printf("\texpresion_logica ->  expresion_cast\n");;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 602 "c-sharpie.y"
    { printf (" expresion-> expresion_logica '?' expresion ':' expresion\n");;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 604 "c-sharpie.y"
    { printf (" expresion -> expresion_logica\n");;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 608 "c-sharpie.y"
    { printf (" expresionMasUno -> expresionMasUno , expresion\n");;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 610 "c-sharpie.y"
    { printf (" expresionMasUno -> expresion\n");;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 615 "c-sharpie.y"
    { printf (" expresion_constante -> ENTERO\n");;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 617 "c-sharpie.y"
    { printf (" expresion_constante -> REAL\n");;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 619 "c-sharpie.y"
    { printf (" expresion_constante -> CADENA\n");;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 621 "c-sharpie.y"
    { printf (" expresion_constante -> CARACTER\n");;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 623 "c-sharpie.y"
    { printf (" expresion_constante -> TRUE\n");;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 625 "c-sharpie.y"
    { printf (" expresion_constante -> FALSE\n");;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 629 "c-sharpie.y"
    { printf (" expresion_parentesis-> '(' expresion ')'\n");;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 633 "c-sharpie.y"
    { printf (" expresion_funcional -> identificador_anidado '(' expresionMasUno ')'\n");;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 635 "c-sharpie.y"
    { printf (" expresion_funcional -> identificador_anidado '(' expresionMasUno ')'\n");;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 639 "c-sharpie.y"
    { printf (" expresion_creacion_objeto -> NEW identificador_anidado '(' expresionMasUno ')'\n");;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 641 "c-sharpie.y"
    { printf (" expresion_creacion_objeto -> NEW identificador_anidado '(' ')'\n");;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 645 "c-sharpie.y"
    { printf (" expresion_indexada -> identificador_anidado\n");;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 647 "c-sharpie.y"
    { printf (" expresion_indexada -> expresion_indexada '[' expresion ']'\n");;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 649 "c-sharpie.y"
    { printf (" expresion_indexada -> expresion_indexada PTR_ACCESO identificador_anidado\n");;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 653 "c-sharpie.y"
    { printf (" expresion_postfija -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 655 "c-sharpie.y"
    { printf (" expresion_postfija -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 657 "c-sharpie.y"
    { printf (" expresion_postfija -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 659 "c-sharpie.y"
    { printf (" expresion_postfija -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 661 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 663 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 665 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 669 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 671 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 673 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 675 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 679 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 681 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 683 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 685 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 687 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 689 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 691 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 693 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 697 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 699 "c-sharpie.y"
    { printf (" declaracion_miembro_enum -> IDENTIFICADOR '=' expresion\n");;}
    break;



/* Line 1455 of yacc.c  */
#line 3942 "c-sharpie.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 702 "c-sharpie.y"


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

