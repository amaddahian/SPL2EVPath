/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "spl.y"

#include "config.h"
#include "stdio.h"
#include <stdlib.h>
#ifdef HAVE_MALLOC_H
#include <malloc.h>
#endif
#include <string.h>
#include "spl_internal.h"
#include "structs.h"
#define yyparse spl_yyparse
#define yylex spl_yylex
#define yyrestart spl_yyrestart
#define yywrap spl_yywrap
#define yyerror spl_yyerror
#define yy_create_buffer spl_yy_create_buffer
#define yy_delete_buffer spl_yy_delete_buffer
#define yy_flush_buffer spl_yy_flush_buffer
#define yy_init_buffer spl_yy_init_buffer
#define yy_load_buffer_state spl_yy_load_buffer_state
#define yy_scan_buffer spl_yy_scan_buffer
#define yy_scan_bytes spl_yy_scan_bytes
#define yy_scan_string spl_yy_scan_string
#define yy_switch_to_buffer spl_yy_switch_to_buffer
#define yychar spl_yychar
#define yyin spl_yyin
#define yyleng spl_yyleng
#define yylval spl_yylval
#define yynerrs spl_yynerrs
#define yyout spl_yyout
#define yytext spl_yytext
#define yyset_out spl_yyset_out
#define yyset_lineno spl_yyset_lineno
#define yyset_in spl_yyset_in
#define yyset_debug spl_yyset_debug
#define yyrealloc spl_yyrealloc
#define yyalloc spl_yyalloc
#define yyfree spl_yyfree
#define yypush_buffer_state spl_yypush_buffer_state
#define yypop_buffer_state spl_yypop_buffer_state
#define yylex_destroy spl_yylex_destroy
#define yyget_out spl_yyget_out
#define yyget_lineno spl_yyget_lineno
#define yyget_in spl_yyget_in
#define yyget_debug spl_yyget_debug
#define yyget_text spl_yyget_text
#define yyget_leng spl_yyget_leng

static char *create_string_from_yytext();
extern int yylex();
extern int yyparse();
static sm_ref yyparse_value;
static int yyerror_count = 1;
extern void yyerror(char *str);
static int parsing_type = 0;
void program1(sm_ref one, sm_list two);
void program2(sm_ref one, sm_list two);
static int parsing_param_spec = 0;
static spl_parse_context yycontext;
static const char *spl_code_string;


/* Line 268 of yacc.c  */
#line 134 "/Users/drewbratcher/projects/Nightly_build_area/spl/spl.tab.c"

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
     ARROW = 258,
     LPAREN = 259,
     RPAREN = 260,
     LCURLY = 261,
     RCURLY = 262,
     COLON = 263,
     LBRACKET = 264,
     RBRACKET = 265,
     DOT = 266,
     STAR = 267,
     AT = 268,
     SLASH = 269,
     MODULUS = 270,
     PLUS = 271,
     MINUS = 272,
     LEQ = 273,
     LT = 274,
     GEQ = 275,
     EQ = 276,
     NEQ = 277,
     LEFT_SHIFT = 278,
     RIGHT_SHIFT = 279,
     ASSIGN = 280,
     MUL_ASSIGN = 281,
     DIV_ASSIGN = 282,
     MOD_ASSIGN = 283,
     ADD_ASSIGN = 284,
     SUB_ASSIGN = 285,
     LEFT_ASSIGN = 286,
     RIGHT_ASSIGN = 287,
     AND_ASSIGN = 288,
     XOR_ASSIGN = 289,
     OR_ASSIGN = 290,
     LOG_OR = 291,
     LOG_AND = 292,
     ARITH_OR = 293,
     ARITH_AND = 294,
     ARITH_XOR = 295,
     INC_OP = 296,
     DEC_OP = 297,
     BANG = 298,
     SEMI = 299,
     IF = 300,
     ELSE = 301,
     FOR = 302,
     WHILE = 303,
     CHAR = 304,
     SHORT = 305,
     INT = 306,
     LONG = 307,
     UNSIGNED = 308,
     SIGNED = 309,
     FLOAT = 310,
     DOUBLE = 311,
     VOID = 312,
     STRING = 313,
     STATIC = 314,
     STRUCT = 315,
     UNION = 316,
     CONST = 317,
     SIZEOF = 318,
     TYPEDEF = 319,
     RETURN_TOKEN = 320,
     PRINT = 321,
     COMMA = 322,
     DOTDOTDOT = 323,
     integer_constant = 324,
     string_constant = 325,
     floating_constant = 326,
     identifier_ref = 327,
     type_id = 328,
     ANY = 329,
     AS = 330,
     ATTRIBUTE = 331,
     BLOB = 332,
     BOOLEAN = 333,
     BREAK = 334,
     COLLECTION = 335,
     COLON_COLON = 336,
     COMPLEX = 337,
     COMPLEX32 = 338,
     COMPLEX64 = 339,
     COMPOSITE = 340,
     CONFIG = 341,
     CONTINUE = 342,
     DECIMAL = 343,
     DECIMAL128 = 344,
     DECIMAL32 = 345,
     DECIMAL64 = 346,
     DOT_ARITH_AND = 347,
     DOT_ARITH_OR = 348,
     DOT_ARITH_XOR = 349,
     DOT_EQ = 350,
     DOT_GEQ = 351,
     DOT_GT = 352,
     DOT_LEFT_SHIFT = 353,
     DOT_LEQ = 354,
     DOT_LT = 355,
     DOT_MINUS = 356,
     DOT_MODULUS = 357,
     DOT_NEQ = 358,
     DOT_PLUS = 359,
     DOT_RIGHT_SHIFT = 360,
     DOT_SLASH = 361,
     DOT_STAR = 362,
     ENUM = 363,
     EXPRESSION = 364,
     FALSE = 365,
     FLOAT32 = 366,
     FLOAT64 = 367,
     FLOATINGPOINT = 368,
     FUNCTION = 369,
     GRAPH = 370,
     IN = 371,
     INPUT = 372,
     INT128 = 373,
     INT16 = 374,
     INT32 = 375,
     INT64 = 376,
     INT8 = 377,
     INTEGRAL = 378,
     LIST = 379,
     LOGIC = 380,
     MAP = 381,
     MUTABLE = 382,
     NAMESPACE = 383,
     NUMERIC = 384,
     ONPUNCT = 385,
     ONTUPLE = 386,
     OPERATOR = 387,
     ORDERED = 388,
     OUTPUT = 389,
     PARAM = 390,
     PRIMITIVE = 391,
     PUBLIC = 392,
     QUESTION = 393,
     SET = 394,
     STATE = 395,
     STATEFUL = 396,
     STREAM = 397,
     STRING8 = 398,
     STRING16 = 399,
     TILDE = 400,
     TIMESTAMP = 401,
     TRUE = 402,
     TUPLE = 403,
     TYPE = 404,
     UINT128 = 405,
     UINT16 = 406,
     UINT32 = 407,
     UINT64 = 408,
     UINT8 = 409,
     USE = 410,
     WINDOW = 411
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 63 "spl.y"

    lx_info info;
    sm_ref reference;
    sm_list list;
    char *string;



/* Line 293 of yacc.c  */
#line 335 "/Users/drewbratcher/projects/Nightly_build_area/spl/spl.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 347 "/Users/drewbratcher/projects/Nightly_build_area/spl/spl.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2062

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  159
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  289
/* YYNRULES -- Number of states.  */
#define YYNSTATES  480

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   412

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,   157,     2,     2,     2,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   158
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    14,    16,    18,    22,
      24,    28,    30,    34,    35,    38,    44,    50,    53,    57,
      64,    65,    67,    69,    73,    76,    79,    81,    85,    87,
      90,    95,   102,   103,   106,   108,   111,   112,   115,   117,
     120,   121,   124,   126,   129,   130,   133,   135,   138,   142,
     147,   151,   155,   159,   165,   172,   178,   184,   190,   195,
     197,   199,   201,   205,   210,   213,   218,   219,   222,   224,
     228,   233,   235,   239,   243,   246,   250,   252,   256,   259,
     263,   271,   272,   275,   276,   279,   280,   283,   284,   287,
     288,   291,   293,   296,   298,   301,   303,   306,   308,   311,
     313,   315,   320,   325,   329,   335,   337,   340,   345,   350,
     354,   360,   363,   370,   371,   374,   377,   379,   383,   387,
     389,   391,   393,   395,   397,   399,   401,   403,   405,   410,
     411,   413,   417,   418,   421,   424,   427,   433,   441,   450,
     456,   459,   462,   465,   469,   471,   473,   475,   477,   481,
     483,   485,   488,   490,   492,   494,   496,   498,   502,   506,
     510,   512,   514,   516,   518,   520,   522,   524,   526,   528,
     530,   532,   534,   536,   538,   540,   542,   544,   546,   548,
     550,   552,   554,   556,   558,   560,   562,   564,   566,   568,
     570,   572,   574,   576,   578,   580,   582,   584,   586,   588,
     590,   592,   594,   596,   598,   600,   602,   607,   612,   617,
     621,   624,   626,   630,   631,   633,   635,   637,   643,   645,
     647,   649,   651,   653,   657,   661,   665,   667,   671,   675,
     679,   681,   683,   685,   687,   689,   695,   701,   707,   713,
     714,   716,   717,   720,   722,   724,   726,   728,   732,   734,
     738,   742,   744,   749,   751,   753,   755,   757,   759,   761,
     763,   765,   767,   769,   771,   773,   775,   777,   779,   781,
     783,   785,   787,   790,   792,   793,   795,   797,   801,   805,
     809,   814,   816,   818,   820,   824,   826,   828,   832,   836
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     160,     0,    -1,   161,    -1,   164,   167,   162,    -1,   163,
      -1,   162,   163,    -1,   169,    -1,   217,    -1,   128,   165,
      44,    -1,    72,    -1,   165,    11,    72,    -1,    72,    -1,
     166,    67,    72,    -1,    -1,   167,   168,    -1,   155,   165,
      81,    12,    44,    -1,   155,   165,    81,    72,    44,    -1,
     170,   177,    -1,   171,    85,    72,    -1,   171,    85,    72,
       4,   172,     5,    -1,    -1,   137,    -1,   173,    -1,   172,
      44,   173,    -1,   117,   174,    -1,   134,   174,    -1,   175,
      -1,   174,    67,   175,    -1,    72,    -1,   176,    72,    -1,
     142,    19,   266,   157,    -1,     6,   178,   180,   182,   184,
       7,    -1,    -1,   135,   179,    -1,   186,    -1,   179,   186,
      -1,    -1,    64,   181,    -1,   255,    -1,   181,   255,    -1,
      -1,   115,   183,    -1,   191,    -1,   183,   191,    -1,    -1,
      86,   185,    -1,   190,    -1,   185,   190,    -1,    76,    72,
      44,    -1,   109,   257,    72,    44,    -1,   114,    72,    44,
      -1,   132,    72,    44,    -1,   149,    72,    44,    -1,    76,
      72,     8,   188,    44,    -1,   109,   257,    72,     8,   188,
      44,    -1,   114,    72,     8,   188,    44,    -1,   132,    72,
       8,   188,    44,    -1,   149,    72,     8,   188,    44,    -1,
      72,     8,   188,    44,    -1,   258,    -1,   189,    -1,   234,
      -1,   189,    67,   234,    -1,    72,     8,   189,    44,    -1,
     192,   200,    -1,   194,    25,    72,   197,    -1,    -1,    75,
      72,    -1,   196,    -1,     4,     5,   193,    -1,     4,   195,
       5,   193,    -1,   196,    -1,   195,    44,   196,    -1,   176,
      72,   193,    -1,     4,     5,    -1,     4,   198,     5,    -1,
     199,    -1,   198,    44,   199,    -1,   165,   193,    -1,   176,
     165,   193,    -1,     6,   201,   202,   203,   204,   205,     7,
      -1,    -1,   125,   206,    -1,    -1,   156,   207,    -1,    -1,
     135,   208,    -1,    -1,   134,   209,    -1,    -1,    86,   185,
      -1,   210,    -1,   206,   210,    -1,   214,    -1,   207,   214,
      -1,   187,    -1,   208,   187,    -1,   215,    -1,   209,   215,
      -1,   211,    -1,   212,    -1,   131,    72,     8,   222,    -1,
     130,    72,     8,   222,    -1,   140,     8,   223,    -1,   140,
       8,     6,   213,     7,    -1,   223,    -1,   213,   223,    -1,
      72,     8,   189,    44,    -1,    72,     8,   216,    44,    -1,
      72,    25,   234,    -1,   216,    67,    72,    25,   234,    -1,
     218,   225,    -1,   219,   258,    72,     4,   220,     5,    -1,
      -1,   219,   137,    -1,   219,   141,    -1,   221,    -1,   220,
      67,   221,    -1,   224,   258,    72,    -1,   223,    -1,   225,
      -1,   227,    -1,   228,    -1,   229,    -1,   230,    -1,   231,
      -1,   232,    -1,   233,    -1,   224,   258,   216,    44,    -1,
      -1,   127,    -1,     6,   226,     7,    -1,    -1,   226,   222,
      -1,   226,   254,    -1,   234,    44,    -1,    45,     4,   234,
       5,   222,    -1,    45,     4,   234,     5,   222,    46,   222,
      -1,    47,     4,   258,    72,   116,   234,     5,   222,    -1,
      48,     4,   234,     5,   222,    -1,    79,    44,    -1,    87,
      44,    -1,    65,    44,    -1,    65,   234,    44,    -1,   235,
      -1,   237,    -1,   241,    -1,   245,    -1,     4,   234,     5,
      -1,    72,    -1,   246,    -1,   236,   234,    -1,    43,    -1,
      17,    -1,   145,    -1,    41,    -1,    42,    -1,   234,   238,
     234,    -1,   234,   239,   234,    -1,   234,   240,   234,    -1,
      16,    -1,    17,    -1,    12,    -1,    14,    -1,    15,    -1,
      23,    -1,   158,    -1,    39,    -1,    40,    -1,    38,    -1,
      37,    -1,    36,    -1,   116,    -1,    19,    -1,    18,    -1,
     157,    -1,    20,    -1,    22,    -1,    21,    -1,   104,    -1,
     101,    -1,   107,    -1,   106,    -1,   102,    -1,    98,    -1,
     105,    -1,    92,    -1,    94,    -1,    93,    -1,    99,    -1,
     100,    -1,    97,    -1,    96,    -1,   103,    -1,    95,    -1,
      25,    -1,    29,    -1,    30,    -1,    26,    -1,    27,    -1,
      28,    -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,
      35,    -1,    72,     4,   189,     5,    -1,   258,     4,   234,
       5,    -1,   234,     9,   242,    10,    -1,   234,    11,    72,
      -1,   234,   244,    -1,   234,    -1,   243,     8,   243,    -1,
      -1,   234,    -1,    41,    -1,    42,    -1,   234,   138,   234,
       8,   234,    -1,   253,    -1,   247,    -1,   248,    -1,   249,
      -1,   252,    -1,     9,   189,    10,    -1,     6,   189,     7,
      -1,     6,   250,     7,    -1,   251,    -1,   250,    67,   251,
      -1,   234,     8,   234,    -1,     6,   216,     7,    -1,   147,
      -1,   110,    -1,    70,    -1,    71,    -1,    69,    -1,   149,
      72,    25,   258,    44,    -1,   149,    72,    25,   266,    44,
      -1,   256,    72,    25,   258,    44,    -1,   256,    72,    25,
     266,    44,    -1,    -1,    59,    -1,    -1,   257,   259,    -1,
      73,    -1,    57,    -1,   262,    -1,   264,    -1,    19,   260,
     157,    -1,   258,    -1,   260,    67,   258,    -1,     9,   234,
      10,    -1,    78,    -1,   108,     6,   166,     7,    -1,   122,
      -1,   119,    -1,   120,    -1,   121,    -1,   118,    -1,   154,
      -1,   151,    -1,   152,    -1,   153,    -1,   150,    -1,   111,
      -1,   112,    -1,    90,    -1,    91,    -1,    89,    -1,    83,
      -1,    84,    -1,   146,    -1,    77,    -1,   143,   263,    -1,
     144,    -1,    -1,   261,    -1,   265,    -1,   124,   259,   263,
      -1,   126,   259,   263,    -1,   139,   259,   263,    -1,   148,
      19,   266,   157,    -1,   267,    -1,   268,    -1,   269,    -1,
     267,    67,   269,    -1,    72,    -1,   265,    -1,   268,    67,
      72,    -1,   268,    67,   265,    -1,   258,    72,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   268,   268,   274,   280,   283,   289,   292,   298,   304,
     311,   326,   329,   334,   336,   342,   345,   351,   357,   362,
     367,   369,   375,   378,   384,   387,   393,   396,   402,   407,
     415,   421,   426,   428,   434,   437,   441,   443,   449,   452,
     457,   459,   467,   472,   484,   486,   492,   495,   501,   504,
     507,   510,   513,   516,   519,   522,   525,   528,   534,   542,
     545,   553,   558,   565,   571,   579,   593,   596,   603,   608,
     613,   619,   622,   628,   636,   639,   645,   653,   659,   662,
     668,   742,   745,   751,   754,   760,   763,   769,   772,   777,
     779,   785,   788,   794,   797,   803,   808,   821,   826,   839,
     842,   848,   851,   857,   860,   866,   869,   875,   881,   889,
     896,   914,   920,   925,   927,   930,   936,   939,   945,   953,
     956,   959,   962,   965,   968,   971,   974,   977,   983,   988,
     990,   996,  1001,  1003,  1006,  1012,  1018,  1021,  1027,  1033,
    1039,  1045,  1051,  1054,  1060,  1063,  1066,  1069,  1072,  1075,
    1080,  1086,  1093,  1100,  1107,  1114,  1121,  1131,  1136,  1139,
    1145,  1152,  1159,  1166,  1173,  1180,  1187,  1190,  1197,  1204,
    1211,  1218,  1225,  1232,  1239,  1246,  1249,  1256,  1263,  1273,
    1280,  1287,  1294,  1301,  1308,  1315,  1322,  1329,  1336,  1343,
    1346,  1349,  1352,  1355,  1358,  1364,  1367,  1370,  1373,  1376,
    1379,  1382,  1385,  1388,  1391,  1394,  1400,  1403,  1406,  1409,
    1412,  1418,  1421,  1426,  1428,  1434,  1437,  1443,  1449,  1452,
    1455,  1458,  1461,  1467,  1473,  1479,  1485,  1488,  1494,  1500,
    1506,  1512,  1518,  1524,  1530,  1539,  1542,  1548,  1551,  1556,
    1558,  1563,  1565,  1571,  1574,  1577,  1580,  1586,  1592,  1595,
    1601,  1607,  1610,  1613,  1618,  1623,  1628,  1633,  1638,  1643,
    1648,  1653,  1658,  1663,  1668,  1673,  1678,  1683,  1688,  1693,
    1698,  1701,  1704,  1709,  1717,  1719,  1725,  1729,  1732,  1735,
    1741,  1748,  1751,  1757,  1762,  1775,  1778,  1781,  1784,  1790
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARROW", "LPAREN", "RPAREN", "LCURLY",
  "RCURLY", "COLON", "LBRACKET", "RBRACKET", "DOT", "STAR", "AT", "SLASH",
  "MODULUS", "PLUS", "MINUS", "LEQ", "LT", "GEQ", "EQ", "NEQ",
  "LEFT_SHIFT", "RIGHT_SHIFT", "ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "LOG_OR", "LOG_AND", "ARITH_OR",
  "ARITH_AND", "ARITH_XOR", "INC_OP", "DEC_OP", "BANG", "SEMI", "IF",
  "ELSE", "FOR", "WHILE", "CHAR", "SHORT", "INT", "LONG", "UNSIGNED",
  "SIGNED", "FLOAT", "DOUBLE", "VOID", "STRING", "STATIC", "STRUCT",
  "UNION", "CONST", "SIZEOF", "TYPEDEF", "RETURN_TOKEN", "PRINT", "COMMA",
  "DOTDOTDOT", "integer_constant", "string_constant", "floating_constant",
  "identifier_ref", "type_id", "ANY", "AS", "ATTRIBUTE", "BLOB", "BOOLEAN",
  "BREAK", "COLLECTION", "COLON_COLON", "COMPLEX", "COMPLEX32",
  "COMPLEX64", "COMPOSITE", "CONFIG", "CONTINUE", "DECIMAL", "DECIMAL128",
  "DECIMAL32", "DECIMAL64", "DOT_ARITH_AND", "DOT_ARITH_OR",
  "DOT_ARITH_XOR", "DOT_EQ", "DOT_GEQ", "DOT_GT", "DOT_LEFT_SHIFT",
  "DOT_LEQ", "DOT_LT", "DOT_MINUS", "DOT_MODULUS", "DOT_NEQ", "DOT_PLUS",
  "DOT_RIGHT_SHIFT", "DOT_SLASH", "DOT_STAR", "ENUM", "EXPRESSION",
  "FALSE", "FLOAT32", "FLOAT64", "FLOATINGPOINT", "FUNCTION", "GRAPH",
  "IN", "INPUT", "INT128", "INT16", "INT32", "INT64", "INT8", "INTEGRAL",
  "LIST", "LOGIC", "MAP", "MUTABLE", "NAMESPACE", "NUMERIC", "ONPUNCT",
  "ONTUPLE", "OPERATOR", "ORDERED", "OUTPUT", "PARAM", "PRIMITIVE",
  "PUBLIC", "QUESTION", "SET", "STATE", "STATEFUL", "STREAM", "STRING8",
  "STRING16", "TILDE", "TIMESTAMP", "TRUE", "TUPLE", "TYPE", "UINT128",
  "UINT16", "UINT32", "UINT64", "UINT8", "USE", "WINDOW", "'>'", "\">>\"",
  "$accept", "start", "compilationUnit", "comp_or_func_list",
  "comp_or_func", "namespace", "id_list_dot", "id_list_comma",
  "useDirective_list", "useDirective", "compositeDef", "compositeHead",
  "public_opt", "compositeInOutList", "compositeInOut", "streamlist",
  "streamspec", "streamType", "compositeBody", "param_opt",
  "compositeFormal_list", "type_opt", "compositeTypeDef_list", "graph_opt",
  "opInvoke_list", "config_opt", "configuration_list", "compositeFormal",
  "opInvokeActual", "opActual", "expr_list_comma", "configuration",
  "opInvoke", "opInvokeHead", "as_clause", "opOutputs", "opOutput_list",
  "opOutput", "opInputs", "opInput_list", "portInputs", "opInvokeBody",
  "invoke_logic_opt", "invoke_window_opt", "invoke_actual_opt",
  "invoke_output_opt", "invoke_config_opt", "opInvokeLogic_list",
  "opInvokeWindow_list", "opInvokeActual_list", "opInvokeOutput_list",
  "opInvokeLogic", "opInvokeCode", "opInvokeState", "varDef_list",
  "opInvokeWindow", "opInvokeOutput", "assign_expr_list", "functionDef",
  "functionHead", "functionModifier_list", "functionFormal_list",
  "functionFormal", "stmt", "varDef", "mutable_opt", "blockStmt",
  "stmt_typedef_list", "exprStmt", "ifStmt", "forStmt", "whileStmt",
  "breakStmt", "continueStmt", "returnStmt", "expr", "prefixExpr",
  "prefixOp", "infixExpr", "infixOp", "mappedOp", "assignOp",
  "postfixExpr", "subscript", "expr_opt", "postfixOp", "conditionalExpr",
  "literal", "listLiteral", "setLiteral", "mapLiteral", "map_list", "map",
  "tupleLiteral", "primitiveLiteral", "standAloneTypeDef",
  "compositeTypeDef", "static_opt", "typeArgs_list", "type", "typeArgs",
  "type_list", "typeDims", "primitiveType", "typeDims_opt",
  "compositeType", "tupleType", "tupleBody", "attributeDecl_list",
  "id_tt_list", "attributeDecl", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,    62,   412
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   159,   160,   161,   162,   162,   163,   163,   164,   165,
     165,   166,   166,   167,   167,   168,   168,   169,   170,   170,
     171,   171,   172,   172,   173,   173,   174,   174,   175,   175,
     176,   177,   178,   178,   179,   179,   180,   180,   181,   181,
     182,   182,   183,   183,   184,   184,   185,   185,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   187,   188,
     188,   189,   189,   190,   191,   192,   193,   193,   194,   194,
     194,   195,   195,   196,   197,   197,   198,   198,   199,   199,
     200,   201,   201,   202,   202,   203,   203,   204,   204,   205,
     205,   206,   206,   207,   207,   208,   208,   209,   209,   210,
     210,   211,   211,   212,   212,   213,   213,   214,   215,   216,
     216,   217,   218,   219,   219,   219,   220,   220,   221,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   223,   224,
     224,   225,   226,   226,   226,   227,   228,   228,   229,   230,
     231,   232,   233,   233,   234,   234,   234,   234,   234,   234,
     234,   235,   236,   236,   236,   236,   236,   237,   237,   237,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   241,   241,   241,   241,
     241,   242,   242,   243,   243,   244,   244,   245,   246,   246,
     246,   246,   246,   247,   248,   249,   250,   250,   251,   252,
     253,   253,   253,   253,   253,   254,   254,   255,   255,   256,
     256,   257,   257,   258,   258,   258,   258,   259,   260,   260,
     261,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   263,   263,   264,   264,   264,   264,
     265,   266,   266,   267,   267,   268,   268,   268,   268,   269
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     2,     1,     1,     3,     1,
       3,     1,     3,     0,     2,     5,     5,     2,     3,     6,
       0,     1,     1,     3,     2,     2,     1,     3,     1,     2,
       4,     6,     0,     2,     1,     2,     0,     2,     1,     2,
       0,     2,     1,     2,     0,     2,     1,     2,     3,     4,
       3,     3,     3,     5,     6,     5,     5,     5,     4,     1,
       1,     1,     3,     4,     2,     4,     0,     2,     1,     3,
       4,     1,     3,     3,     2,     3,     1,     3,     2,     3,
       7,     0,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     4,     4,     3,     5,     1,     2,     4,     4,     3,
       5,     2,     6,     0,     2,     2,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     0,
       1,     3,     0,     2,     2,     2,     5,     7,     8,     5,
       2,     2,     2,     3,     1,     1,     1,     1,     3,     1,
       1,     2,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     3,
       2,     1,     3,     0,     1,     1,     1,     5,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     3,
       1,     1,     1,     1,     1,     5,     5,     5,     5,     0,
       1,     0,     2,     1,     1,     1,     1,     3,     1,     3,
       3,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     0,     1,     1,     3,     3,     3,
       4,     1,     1,     1,     3,     1,     1,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     2,    13,     9,     0,     1,   113,     0,
       8,    21,     0,   113,     4,    14,     6,     0,     0,     7,
       0,     0,    10,     0,     5,    32,    17,     0,   132,   111,
     244,   243,   271,   251,   268,   269,   267,   265,   266,     0,
     263,   264,   257,   254,   255,   256,   253,     0,     0,   114,
       0,   115,   274,   273,   270,     0,   262,   259,   260,   261,
     258,     0,   245,   246,   276,     0,     0,    36,    18,     0,
       0,     0,   274,   274,   274,     0,   275,   272,     0,     0,
       0,     0,     0,   241,     0,     0,     0,    33,    34,   239,
      40,     0,     0,   132,   131,     0,   153,   155,   156,   152,
       0,     0,     0,     0,   234,   232,   233,   149,     0,     0,
     231,   130,   154,   230,     0,   133,   119,     0,   120,   121,
     122,   123,   124,   125,   126,   127,     0,   144,     0,   145,
     146,   147,   150,   219,   220,   221,   222,   218,   134,     0,
      11,     0,   248,     0,   277,   278,   279,     0,     0,   285,
       0,   276,     0,   281,   282,   283,   129,    15,    16,     0,
       0,     0,     0,     0,    35,   240,    37,    38,     0,     0,
      44,     0,     0,     0,    22,     0,   149,     0,     0,    61,
       0,   226,     0,    61,     0,     0,     0,   142,     0,     0,
     140,   141,     0,     0,   213,     0,   162,   163,   164,   160,
     161,   174,   173,   176,   178,   177,   165,   195,   198,   199,
     200,   196,   197,   201,   202,   203,   204,   205,   171,   170,
     169,   167,   168,   215,   216,   135,   186,   188,   187,   194,
     192,   191,   184,   189,   190,   180,   183,   193,   179,   185,
     182,   181,   172,     0,   175,   166,     0,     0,     0,   210,
     151,     0,   252,     0,     0,   247,   250,   289,   280,     0,
       0,     0,   116,     0,     0,    48,     0,   242,     0,    50,
       0,    51,     0,    52,    39,     0,     0,     0,     0,    41,
      42,     0,     0,    68,     0,     0,    28,    24,    26,     0,
      25,    19,     0,   148,     0,   224,     0,   229,     0,     0,
     225,     0,   223,     0,     0,     0,   143,     0,     0,     0,
       0,   211,     0,     0,   209,     0,   157,   158,   159,     0,
      12,   249,   284,   287,   288,   112,   129,     0,     0,    60,
      59,     0,    49,     0,     0,     0,     0,    66,     0,    71,
       0,    66,    43,    81,    64,     0,     0,    45,    46,    31,
       0,    29,    23,   109,    62,     0,   228,     0,   227,     0,
       0,     0,   206,     0,     0,   128,   208,   213,     0,   207,
     117,   118,    53,     0,    55,    56,    57,     0,     0,     0,
      69,    66,     0,     0,    73,     0,    83,     0,     0,    47,
      27,     0,   136,     0,   139,   235,   236,   214,   212,   217,
      54,   237,   238,    67,    70,    72,    30,     0,     0,     0,
      82,    91,    99,   100,     0,    85,     0,    65,     0,   110,
       0,     0,     0,     0,   129,    92,     0,    84,    93,     0,
      87,    74,    66,     0,     0,    76,    63,   137,     0,     0,
       0,   129,   103,     0,    94,     0,    95,    86,     0,    89,
      78,    66,    75,     0,   138,   102,   101,   129,   105,     0,
       0,    96,     0,    88,    97,     0,     0,    79,    77,   104,
     106,   107,     0,     0,    98,    90,    80,    58,     0,   108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    13,    14,     4,   432,   141,     8,    15,
      16,    17,    18,   173,   174,   287,   288,   278,    26,    67,
      87,    90,   166,   170,   279,   285,   347,    88,   446,   328,
     329,   348,   280,   281,   380,   282,   338,   283,   417,   434,
     435,   344,   386,   415,   430,   449,   466,   410,   427,   447,
     463,   411,   412,   413,   457,   428,   464,   178,    19,    20,
      21,   261,   262,   115,   116,   117,   118,    69,   119,   120,
     121,   122,   123,   124,   125,   183,   127,   128,   129,   246,
     247,   248,   130,   312,   313,   249,   131,   132,   133,   134,
     135,   180,   181,   136,   137,   138,   167,   168,   160,   139,
      72,   143,    76,    62,    77,    63,    64,   152,   153,   154,
     155
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -328
static const yytype_int16 yypact[] =
{
     -88,   -26,    64,  -328,  -328,  -328,    77,  -328,   -61,    -7,
    -328,  -328,   -26,    21,  -328,  -328,  -328,    61,   -13,  -328,
      69,  1742,  -328,    16,  -328,   -51,  -328,    95,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,   167,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,   101,   101,  -328,
     101,  -328,   166,  -328,  -328,   159,  -328,  -328,  -328,  -328,
    -328,   117,  -328,  -328,  -328,    32,   -46,   134,   197,   759,
     132,  1908,   166,   166,   166,  1209,  -328,  -328,  1825,   198,
     161,   181,   154,  -328,   156,   164,   165,   -46,  -328,   172,
     124,   -55,  1209,  1301,  -328,  1209,  -328,  -328,  -328,  -328,
     236,   237,   240,  1117,  -328,  -328,  -328,   241,   202,   204,
    -328,  -328,  -328,  -328,   178,  -328,  -328,  1908,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  1447,  -328,  1209,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,   249,
    -328,    42,  -328,   -49,  -328,  -328,  -328,  1301,  1494,  -328,
     183,   -47,    99,   190,   191,  -328,   133,  -328,  -328,    27,
      13,    29,    39,    58,  -328,  -328,   110,  -328,   187,    15,
     175,   -44,   -44,    33,  -328,   365,    56,    45,    48,   114,
      49,  -328,    24,  1691,  1209,  1908,  1209,  -328,  1644,  1209,
    -328,  -328,   239,   193,  1209,   194,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  1209,  -328,  -328,  1209,  1209,  1209,  -328,
    1691,  1209,  -328,   196,  1908,  -328,  -328,  -328,  -328,  1908,
     -56,    34,  -328,  1908,  1209,  -328,    70,  -328,  1209,  -328,
    1209,  -328,  1209,  -328,  -328,   244,    18,   243,   201,    15,
    -328,   264,   250,  -328,   205,   267,  -328,   209,  -328,   206,
     209,  -328,   -55,  -328,  1209,  -328,  1209,  -328,   207,  1209,
    -328,  1209,  -328,   479,   208,   526,  -328,    40,  1825,   256,
      26,   906,   272,   276,  -328,   953,  1691,  1691,  1691,   640,
    -328,  -328,  -328,  -328,  -328,  -328,   133,   213,   242,   221,
     249,  1209,  -328,   245,   246,   251,  1825,   218,    38,  -328,
    1825,   218,  -328,   171,  -328,   225,   290,   205,  -328,  -328,
     -44,  -328,  -328,  1691,  1691,   277,  1691,   114,  -328,  1025,
     188,  1025,  -328,    -3,   259,  -328,  -328,  1209,  1209,  -328,
    -328,  -328,  -328,   261,  -328,  -328,  -328,    46,   262,   235,
    -328,   218,   169,   151,  -328,    55,   153,   308,  1209,  -328,
    -328,  1209,   268,  1209,  -328,  -328,  -328,  1691,  -328,  1691,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,   248,   253,   305,
      55,  -328,  -328,  -328,   255,   182,    17,  -328,   126,  1691,
    1025,   687,   310,   313,    11,  -328,   314,   255,  -328,   257,
     189,  -328,    20,   -26,    43,  -328,  -328,  -328,  1025,  1025,
    1025,   133,  -328,  1209,  -328,   320,  -328,   257,   258,   230,
    -328,    20,  -328,   -43,  -328,  -328,  -328,    35,  -328,   127,
    1209,  -328,   323,   258,  -328,   205,   325,  -328,  -328,  -328,
    -328,  -328,   289,   193,  -328,   205,  -328,  -328,   130,  -328
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -328,  -328,  -328,  -328,   321,  -328,     0,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,    44,   163,   -12,  -162,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -128,   252,  -107,  -257,
     -89,  -314,    62,  -328,  -327,  -328,  -328,  -217,  -328,  -328,
    -111,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,   -66,  -328,  -328,  -328,   -84,  -118,  -190,  -328,  -328,
    -328,  -328,    22,  -248,  -258,  -149,   326,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,   -67,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,   -20,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,    50,  -328,  -328,  -328,   184,  -328,  -328,   -21,
       3,  -328,  -328,  -328,   150,  -328,   -73,  -140,  -328,  -328,
      90
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -287
static const yytype_int16 yytable[] =
{
      61,     6,   126,   310,   177,   151,   182,   263,   148,   289,
     289,   333,    23,   334,   384,   335,   323,   441,   254,   276,
    -286,    -3,   431,   337,   -20,   175,   179,     9,   286,     5,
      82,     9,    71,   389,   302,   264,   188,   268,   291,   325,
       1,   395,   469,   381,    80,   362,     5,   270,   452,   252,
     142,    73,   295,    74,   404,   297,   300,   150,   177,   339,
     189,   250,   171,    83,     7,    22,   272,    25,    84,   257,
     365,   265,    27,   269,   373,    28,    11,   292,   331,   172,
     179,   294,   382,   271,    66,   266,    85,   453,     9,     5,
     401,   296,    55,   298,    12,   379,   193,    65,   277,   277,
     307,   326,   273,    86,    81,   450,   -20,   296,   255,   253,
    -286,   392,   296,   394,   332,   298,   301,   303,   257,   305,
      71,    10,   299,   194,   467,   195,   196,   311,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   111,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   277,    11,   277,
     277,   389,   111,   267,   304,   405,   442,    68,   364,   165,
     436,   471,   437,    70,   479,    75,   315,   263,    78,   316,
     317,   318,  -239,   458,   319,   407,   408,   324,   289,    79,
     454,   455,   456,   296,   296,   409,   378,   298,    89,   470,
     383,    91,   156,   472,   140,   157,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   144,   145,   146,   158,   159,   353,   161,   354,
     242,   165,   356,   321,   357,   151,   162,   163,   150,   169,
     184,   185,   327,   330,   186,   189,   190,   330,   191,   330,
     192,   330,   243,   251,   433,   257,   258,   259,   260,   275,
     111,   284,   340,   151,   308,   309,   314,   151,   320,   336,
     343,   244,   245,   341,   349,   345,   350,   346,   351,   355,
     360,   294,   366,   478,   367,   371,   372,   363,   296,   374,
     375,   433,   126,   379,   126,   376,   385,   387,   388,   418,
     397,   399,   391,   396,   393,   400,   402,   403,   406,   414,
     330,   277,   416,   424,   420,   377,   465,   429,   439,   150,
     422,   440,   443,   448,   419,   423,   421,   426,   460,   445,
     462,   473,   476,   477,    24,   290,   352,   475,   390,   164,
     461,   342,   468,   444,   425,   474,    29,   398,   370,   322,
     274,   358,     0,   126,   459,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     293,   126,   126,   126,   194,     0,   195,   196,     0,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   451,     0,     0,     0,     0,     0,   330,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     0,     0,     0,     0,     0,     0,     0,
       0,   242,     0,     0,   359,     0,     0,     0,   194,     0,
     195,   196,     0,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   243,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   244,   245,     0,     0,     0,     0,     0,     0,
       0,   361,     0,     0,     0,   194,     0,   195,   196,     0,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
       0,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   243,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     0,     0,   244,   245,     0,     0,
       0,     0,   242,     0,     0,   369,     0,     0,     0,   194,
       0,   195,   196,     0,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   243,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   244,   245,     0,     0,     0,     0,     0,
       0,     0,   438,     0,     0,     0,   194,     0,   195,   196,
       0,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,     0,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,     0,   242,     0,     0,     0,
       0,     0,     0,    92,     0,    93,    94,     0,    95,     0,
       0,     0,     0,     0,     0,     0,    96,     0,   243,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,     0,     0,   244,   245,     0,
      97,    98,    99,   242,   100,     0,   101,   102,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,     0,     0,
       0,     0,     0,     0,   103,   243,     0,     0,   104,   105,
     106,   107,    31,     0,     0,     0,    32,    33,   108,     0,
       0,     0,    34,    35,   244,   245,   109,     0,    36,    37,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,     0,   110,
      40,    41,     0,     0,     0,     0,     0,    42,    43,    44,
      45,    46,     0,    47,     0,    48,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    52,    53,   112,    54,   113,    55,   114,    56,
      57,    58,    59,    60,  -214,   194,     0,   195,   196,     0,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
       0,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   368,   194,     0,   195,   196,     0,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,     0,     0,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     0,     0,     0,     0,     0,     0,
       0,     0,   242,     0,     0,     0,     0,     0,     0,    92,
       0,    93,     0,     0,    95,     0,     0,     0,     0,     0,
       0,     0,    96,     0,   243,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     0,     0,   244,   245,     0,    97,    98,    99,   242,
     100,     0,   101,   102,     0,     0,     0,     0,     0,     0,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
     103,   243,     0,     0,   104,   105,   106,   107,    31,     0,
       0,     0,    32,    33,   108,     0,     0,     0,    34,    35,
     244,   245,   109,     0,    36,    37,    38,     0,     0,     0,
       0,    92,     0,   147,     0,     0,    95,     0,     0,     0,
       0,     0,     0,    39,    96,   110,    40,    41,     0,     0,
       0,     0,     0,    42,    43,    44,    45,    46,     0,    47,
       0,    48,   111,     0,     0,     0,     0,     0,    97,    98,
      99,   187,     0,     0,    50,     0,     0,     0,    52,    53,
     112,    54,   113,    55,    30,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,     0,   104,   105,   106,   107,
      31,     0,     0,     0,    32,    33,     0,     0,     0,     0,
      34,    35,     0,     0,     0,     0,    36,    37,    38,     0,
       0,     0,     0,    92,     0,   147,     0,     0,    95,     0,
       0,     0,     0,     0,     0,    39,    96,   110,    40,    41,
       0,     0,     0,     0,     0,    42,    43,    44,    45,    46,
       0,    47,     0,    48,     0,     0,     0,     0,     0,     0,
      97,    98,    99,     0,     0,     0,    50,     0,     0,     0,
      52,    53,   112,    54,   113,    55,    30,    56,    57,    58,
      59,    60,     0,     0,     0,     0,     0,     0,   104,   105,
     106,   107,    31,     0,     0,     0,    32,    33,     0,     0,
       0,     0,    34,    35,     0,     0,     0,     0,    36,    37,
      38,     0,     0,     0,     0,    92,     0,   147,     0,     0,
      95,     0,     0,     0,     0,     0,     0,    39,    96,   110,
      40,    41,     0,     0,     0,     0,     0,    42,    43,    44,
      45,    46,     0,    47,     0,    48,     0,     0,     0,     0,
       0,     0,    97,    98,    99,     0,     0,     0,    50,     0,
       0,     0,    52,    53,   112,    54,   113,    55,    30,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,     0,
     104,   105,   106,   176,    31,     0,     0,     0,    32,    33,
       0,     0,     0,     0,    34,    35,     0,     0,     0,     0,
      36,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,   110,    40,    41,     0,     0,     0,     0,     0,    42,
      43,    44,    45,    46,     0,    47,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    52,    53,   112,    54,   113,    55,
       0,    56,    57,    58,    59,    60,   194,     0,   195,   196,
       0,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,     0,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   194,   256,   195,   196,     0,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,     0,     0,     0,     0,     0,
       0,     0,     0,   242,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   243,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     0,     0,   244,   245,     0,     0,     0,     0,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,   245,   194,     0,   195,   196,     0,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,   306,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     194,     0,   195,   196,     0,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,     0,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,    30,
       0,   244,   245,     0,     0,     0,     0,   242,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,    32,
      33,     0,     0,     0,     0,    34,    35,     0,     0,   243,
       0,    36,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   244,   245,
      39,     0,     0,    40,    41,     0,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     0,    47,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,    50,    30,    51,     0,    52,    53,     0,    54,     0,
      55,     0,    56,    57,    58,    59,    60,   149,    31,     0,
       0,     0,    32,    33,     0,     0,     0,     0,    34,    35,
       0,     0,     0,     0,    36,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,    40,    41,     0,     0,
       0,     0,     0,    42,    43,    44,    45,    46,     0,    47,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    30,     0,     0,    52,    53,
       0,    54,     0,    55,     0,    56,    57,    58,    59,    60,
       0,    31,     0,     0,     0,    32,    33,     0,     0,     0,
       0,    34,    35,     0,     0,     0,     0,    36,    37,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,     0,    40,
      41,     0,     0,     0,     0,     0,    42,    43,    44,    45,
      46,     0,    47,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,    52,    53,     0,    54,     0,    55,     0,    56,    57,
      58,    59,    60
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-328))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      21,     1,    69,   193,    93,    78,    95,   156,    75,   171,
     172,   268,    12,   270,   341,   272,    72,     6,    67,     4,
      67,     0,     5,     5,    85,    92,    93,    11,    72,    72,
      76,    11,    19,   347,    10,     8,   103,     8,     5,     5,
     128,    44,     7,     5,    12,     5,    72,     8,     5,     7,
      71,    48,     7,    50,   381,     7,     7,    78,   147,   276,
       4,   128,   117,   109,     0,    72,     8,     6,   114,    72,
      44,    44,    85,    44,   331,     6,   137,    44,     8,   134,
     147,    25,    44,    44,   135,    72,   132,    44,    11,    72,
      44,    67,   148,    67,   155,    75,   117,    81,   142,   142,
     189,    67,    44,   149,    72,   432,    85,    67,   157,    67,
     157,   359,    67,   361,    44,    67,    67,   184,    72,   186,
      19,    44,     8,     9,   451,    11,    12,   194,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   127,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,   142,   137,   142,
     142,   475,   127,   160,   185,   382,   424,    72,   308,    59,
      44,    44,   420,     6,    44,     9,   243,   326,    19,   246,
     247,   248,    72,   441,   251,   130,   131,   260,   350,    72,
     438,   439,   440,    67,    67,   140,   336,    67,    64,   457,
     340,     4,     4,   460,    72,    44,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    72,    73,    74,    44,    72,   294,    72,   296,
     116,    59,   299,   254,   301,   308,    72,    72,   259,   115,
       4,     4,   263,   264,     4,     4,    44,   268,    44,   270,
      72,   272,   138,     4,   416,    72,   157,    67,    67,    72,
     127,    86,    19,   336,    25,    72,    72,   340,    72,    25,
       6,   157,   158,    72,     7,    25,    67,    72,    72,    72,
      72,    25,    10,   473,     8,    72,    44,   308,    67,    44,
      44,   453,   359,    75,   361,    44,   125,    72,     8,   388,
     367,   368,    25,    44,   116,    44,    44,    72,   157,   156,
     331,   142,     4,     8,    46,   336,    86,   135,     8,   340,
      72,     8,     8,   134,   391,    72,   393,    72,     8,    72,
      72,     8,     7,    44,    13,   172,   292,   465,   350,    87,
     447,   279,   453,   427,   410,   463,    20,   367,   326,   259,
     166,   301,    -1,   420,   443,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,   438,   439,   440,     9,    -1,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    -1,    -1,    -1,    -1,    -1,   460,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,     5,    -1,    -1,    -1,     9,    -1,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   138,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,   157,   158,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,    -1,    -1,     9,    -1,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,   157,   158,    -1,    -1,
      -1,    -1,   116,    -1,    -1,     5,    -1,    -1,    -1,     9,
      -1,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   138,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,   157,   158,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,    -1,    -1,     9,    -1,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,     4,    -1,     6,     7,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,   138,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,    -1,   157,   158,    -1,
      41,    42,    43,   116,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,   138,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    77,    78,    79,    -1,
      -1,    -1,    83,    84,   157,   158,    87,    -1,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,   110,
     111,   112,    -1,    -1,    -1,    -1,    -1,   118,   119,   120,
     121,   122,    -1,   124,    -1,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    -1,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,     8,     9,    -1,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,     9,    -1,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,     4,
      -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    -1,   138,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,   157,   158,    -1,    41,    42,    43,   116,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,   138,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    77,    78,    79,    -1,    -1,    -1,    83,    84,
     157,   158,    87,    -1,    89,    90,    91,    -1,    -1,    -1,
      -1,     4,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    17,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,   118,   119,   120,   121,   122,    -1,   124,
      -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    -1,    -1,   139,    -1,    -1,    -1,   143,   144,
     145,   146,   147,   148,    57,   150,   151,   152,   153,   154,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,
      83,    84,    -1,    -1,    -1,    -1,    89,    90,    91,    -1,
      -1,    -1,    -1,     4,    -1,     6,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    17,   110,   111,   112,
      -1,    -1,    -1,    -1,    -1,   118,   119,   120,   121,   122,
      -1,   124,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,   139,    -1,    -1,    -1,
     143,   144,   145,   146,   147,   148,    57,   150,   151,   152,
     153,   154,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    77,    78,    -1,    -1,
      -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    89,    90,
      91,    -1,    -1,    -1,    -1,     4,    -1,     6,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,   108,    17,   110,
     111,   112,    -1,    -1,    -1,    -1,    -1,   118,   119,   120,
     121,   122,    -1,   124,    -1,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,   139,    -1,
      -1,    -1,   143,   144,   145,   146,   147,   148,    57,   150,
     151,   152,   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
      -1,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,   118,
     119,   120,   121,   122,    -1,   124,    -1,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,    -1,    -1,    -1,   143,   144,   145,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,     9,    -1,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,   157,   158,    -1,    -1,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,   158,     9,    -1,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    -1,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    57,
      -1,   157,   158,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,   138,
      -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,   158,
     108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,
     118,   119,   120,   121,   122,    -1,   124,    -1,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
      -1,   139,    57,   141,    -1,   143,   144,    -1,   146,    -1,
     148,    -1,   150,   151,   152,   153,   154,    72,    73,    -1,
      -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    83,    84,
      -1,    -1,    -1,    -1,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,
      -1,    -1,    -1,   118,   119,   120,   121,   122,    -1,   124,
      -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,    57,    -1,    -1,   143,   144,
      -1,   146,    -1,   148,    -1,   150,   151,   152,   153,   154,
      -1,    73,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,
      -1,    83,    84,    -1,    -1,    -1,    -1,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,   118,   119,   120,   121,
     122,    -1,   124,    -1,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,
      -1,   143,   144,    -1,   146,    -1,   148,    -1,   150,   151,
     152,   153,   154
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   128,   160,   161,   164,    72,   165,     0,   167,    11,
      44,   137,   155,   162,   163,   168,   169,   170,   171,   217,
     218,   219,    72,   165,   163,     6,   177,    85,     6,   225,
      57,    73,    77,    78,    83,    84,    89,    90,    91,   108,
     111,   112,   118,   119,   120,   121,   122,   124,   126,   137,
     139,   141,   143,   144,   146,   148,   150,   151,   152,   153,
     154,   258,   262,   264,   265,    81,   135,   178,    72,   226,
       6,    19,   259,   259,   259,     9,   261,   263,    19,    72,
      12,    72,    76,   109,   114,   132,   149,   179,   186,    64,
     180,     4,     4,     6,     7,     9,    17,    41,    42,    43,
      45,    47,    48,    65,    69,    70,    71,    72,    79,    87,
     110,   127,   145,   147,   149,   222,   223,   224,   225,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     241,   245,   246,   247,   248,   249,   252,   253,   254,   258,
      72,   166,   258,   260,   263,   263,   263,     6,   234,    72,
     258,   265,   266,   267,   268,   269,     4,    44,    44,    72,
     257,    72,    72,    72,   186,    59,   181,   255,   256,   115,
     182,   117,   134,   172,   173,   234,    72,   189,   216,   234,
     250,   251,   189,   234,     4,     4,     4,    44,   234,     4,
      44,    44,    72,   258,     9,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    44,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   116,   138,   157,   158,   238,   239,   240,   244,
     234,     4,     7,    67,    67,   157,    10,    72,   157,    67,
      67,   220,   221,   224,     8,    44,    72,   259,     8,    44,
       8,    44,     8,    44,   255,    72,     4,   142,   176,   183,
     191,   192,   194,   196,    86,   184,    72,   174,   175,   176,
     174,     5,    44,     5,    25,     7,    67,     7,    67,     8,
       7,    67,    10,   234,   258,   234,    44,   189,    25,    72,
     216,   234,   242,   243,    72,   234,   234,   234,   234,   234,
      72,   258,   269,    72,   265,     5,    67,   258,   188,   189,
     258,     8,    44,   188,   188,   188,    25,     5,   195,   196,
      19,    72,   191,     6,   200,    25,    72,   185,   190,     7,
      67,    72,   173,   234,   234,    72,   234,   234,   251,     5,
      72,     5,     5,   258,   266,    44,    10,     8,     8,     5,
     221,    72,    44,   188,    44,    44,    44,   258,   266,    75,
     193,     5,    44,   266,   193,   125,   201,    72,     8,   190,
     175,    25,   222,   116,   222,    44,    44,   234,   243,   234,
      44,    44,    44,    72,   193,   196,   157,   130,   131,   140,
     206,   210,   211,   212,   156,   202,     4,   197,   189,   234,
      46,   234,    72,    72,     8,   210,    72,   207,   214,   135,
     203,     5,   165,   176,   198,   199,    44,   222,     5,     8,
       8,     6,   223,     8,   214,    72,   187,   208,   134,   204,
     193,   165,     5,    44,   222,   222,   222,   213,   223,   189,
       8,   187,    72,   209,   215,    86,   205,   193,   199,     7,
     223,    44,   188,     8,   215,   185,     7,    44,   216,    44
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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


/*----------.
| yyparse.  |
`----------*/

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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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

/* Line 1806 of yacc.c  */
#line 268 "spl.y"
    {
            printf("start?\n");
        }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 274 "spl.y"
    {
            printf("compilationUnit?\n");
        }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 280 "spl.y"
    {
            printf("comp_or_func_list?\n");
        }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 283 "spl.y"
    {
            printf("comp_or_func_list?\n");
        }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 289 "spl.y"
    {
            printf("comp_or_func?\n");
        }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 292 "spl.y"
    {
            printf("comp_or_func?\n");
        }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 298 "spl.y"
    {
            printf("namespace?\n");
        }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 304 "spl.y"
    {
            (yyval.list) = malloc(sizeof(struct list_struct));
            sm_ref atmp = spl_new_identifier();
            atmp->node.identifier.id = (yyvsp[(1) - (1)].info).string;
            (yyval.list)->node = atmp;
            (yyval.list)->next = NULL;
        }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 311 "spl.y"
    {
	    sm_list tmp = (yyvsp[(1) - (3)].list);
	    while (tmp->next != NULL) {
		tmp = tmp->next;
	    }
            sm_ref tmp2 = spl_new_identifier();
            tmp2->node.identifier.id = (yyvsp[(3) - (3)].info).string;
	    tmp->next = malloc(sizeof(struct list_struct));
	    tmp->next->node = tmp2;
	    tmp->next->next = NULL;
	    (yyval.list) = (yyvsp[(1) - (3)].list);
        }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 326 "spl.y"
    {
            printf("id_list_comma?\n");
        }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 329 "spl.y"
    {
            printf("id_list_comma?\n");
        }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 336 "spl.y"
    {
            printf("useDirective_list?\n");
        }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 342 "spl.y"
    {
            printf("useDirective?\n");
        }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 345 "spl.y"
    {
            printf("useDirective?\n");
        }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 351 "spl.y"
    {
            printf("compositeDef?\n");
        }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 357 "spl.y"
    {
	    (yyval.reference) = spl_new_identifier();
	    (yyval.reference)->node.identifier.id = (yyvsp[(3) - (3)].info).string;
	    (yyval.reference)->node.identifier.lx_srcpos = (yyvsp[(3) - (3)].info).lx_srcpos;
        }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 362 "spl.y"
    {
            printf("compositeHead?\n");
        }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 369 "spl.y"
    {
            printf("public opt?\n");
        }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 375 "spl.y"
    {
            printf("compositeInOutList?\n");
        }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 378 "spl.y"
    {
            printf("compositeInOutList?\n");
        }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 384 "spl.y"
    {
            printf("compositeInOut?\n");
        }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 387 "spl.y"
    {
            printf("compositeInOut?\n");
        }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 393 "spl.y"
    {
            printf("streamlist?\n");
        }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 396 "spl.y"
    {
            printf("streamlist?\n");
        }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 402 "spl.y"
    {
	    (yyval.reference) = spl_new_identifier();
	    (yyval.reference)->node.identifier.id = (yyvsp[(1) - (1)].info).string;
	    (yyval.reference)->node.identifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 407 "spl.y"
    {
	    (yyval.reference) = spl_new_identifier();
	    (yyval.reference)->node.identifier.id = (yyvsp[(2) - (2)].info).string;
	    (yyval.reference)->node.identifier.lx_srcpos = (yyvsp[(2) - (2)].info).lx_srcpos;
	}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 415 "spl.y"
    {
            (yyval.list) = (yyvsp[(3) - (4)].list);
        }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 421 "spl.y"
    {
            printf("compositeBody?\n");
        }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 428 "spl.y"
    {
            printf("param_opt?\n");
        }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 434 "spl.y"
    {
            printf("compositeFormal_list?\n");
        }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 437 "spl.y"
    {
            printf("compositeFormal_list?\n");
        }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 443 "spl.y"
    {
            printf("type_opt?\n");
        }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 449 "spl.y"
    {
            printf("compositeTypeDef_list?\n");
        }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 452 "spl.y"
    {
            printf("compositeTypeDef_list?\n");
        }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 459 "spl.y"
    {
            printf("printing program to main.c\n");
            //program1(NULL, $2); //prints individual stones each with with its own output type
            program2(NULL,(yyvsp[(2) - (2)].list)); //closer to dfg_chain_test
        }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 467 "spl.y"
    {
            (yyval.list) = malloc(sizeof(struct list_struct));
            (yyval.list)->node = (yyvsp[(1) - (1)].reference);
            (yyval.list)->next = NULL;
        }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 472 "spl.y"
    {
	    sm_list tmp = (yyvsp[(1) - (2)].list);
	    while (tmp->next != NULL) {
		tmp = tmp->next;
	    }
	    tmp->next = malloc(sizeof(struct list_struct));
	    tmp->next->node = (yyvsp[(2) - (2)].reference);
	    tmp->next->next = NULL;
	    (yyval.list) = (yyvsp[(1) - (2)].list);
        }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 486 "spl.y"
    {
            printf("config_opt?\n");
        }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 492 "spl.y"
    {
            printf("configuration_list?\n");
        }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 495 "spl.y"
    {
            printf("configuration_list?\n");
        }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 501 "spl.y"
    {
            printf("compositeFormal?\n");
        }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 504 "spl.y"
    {
            printf("compositeFormal?\n");
        }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 507 "spl.y"
    {
            printf("compositeFormal?\n");
        }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 510 "spl.y"
    {
            printf("compositeFormal?\n");
        }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 513 "spl.y"
    {
            printf("compositeFormal?\n");
        }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 516 "spl.y"
    {
            printf("compositeFormal?\n");
        }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 519 "spl.y"
    {
            printf("compositeFormal?\n");
        }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 522 "spl.y"
    {
            printf("compositeFormal?\n");
        }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 525 "spl.y"
    {
            printf("compositeFormal?\n");
        }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 528 "spl.y"
    {
            printf("compositeFormal?\n");
        }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 534 "spl.y"
    {
            (yyval.reference) = spl_new_field();
            (yyval.reference)->node.field.name = (yyvsp[(1) - (4)].info).string;
            (yyval.reference)->node.field.sm_complex_type = (yyvsp[(3) - (4)].reference);
        }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 542 "spl.y"
    {
            printf("opActual?\n");
        }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 545 "spl.y"
    {
            (yyval.reference) = spl_new_field();
            (yyval.reference)->node.field.name = "opActual";
            (yyval.reference)->node.field.type_spec = (yyvsp[(1) - (1)].list);
        }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 553 "spl.y"
    {
            (yyval.list) = malloc(sizeof(struct list_struct));
            (yyval.list)->node = (yyvsp[(1) - (1)].reference);
            (yyval.list)->next = NULL;
        }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 558 "spl.y"
    {
            printf("expr_list_comma?\n");
        }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 565 "spl.y"
    {
            printf("configuration?\n");
        }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 571 "spl.y"
    {
            (yyval.reference)= spl_new_assignment_expression();
            (yyval.reference)->node.assignment_expression.left=(yyvsp[(1) - (2)].reference);
            (yyval.reference)->node.assignment_expression.right=(yyvsp[(2) - (2)].reference);
        }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 579 "spl.y"
    {
            (yyval.reference)= spl_new_assignment_expression();
            sm_ref tmp2= spl_new_field();
            tmp2->node.field.name = "opInvokeHead";
            tmp2->node.field.type_spec = (yyvsp[(1) - (4)].list);
            (yyval.reference)->node.assignment_expression.left = tmp2;
            sm_ref tmp= spl_new_field();
            tmp->node.field.name = (yyvsp[(3) - (4)].info).string;
            tmp->node.field.type_spec = (yyvsp[(4) - (4)].list);
            (yyval.reference)->node.assignment_expression.right = tmp;
        }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 593 "spl.y"
    {
            //do nothing
        }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 596 "spl.y"
    {
	    (yyval.reference) = spl_new_field();
	    (yyval.reference)->node.field.name = (yyvsp[(2) - (2)].info).string;
	}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 603 "spl.y"
    {  
            (yyval.list) = malloc(sizeof(struct list_struct));
            (yyval.list)->node = (yyvsp[(1) - (1)].reference);
            (yyval.list)->next = NULL;
        }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 608 "spl.y"
    {
            (yyval.list) = malloc(sizeof(struct list_struct));
            (yyval.list)->node = (yyvsp[(3) - (3)].reference);
            (yyval.list)->next = NULL;
        }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 613 "spl.y"
    {
            printf("opOutputs?\n");
        }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 619 "spl.y"
    {
            printf("opOutput_list?\n");
        }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 622 "spl.y"
    {
            printf("opOutput_list?\n");
        }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 628 "spl.y"
    {
            (yyval.reference) = spl_new_field();
            (yyval.reference)->node.field.type_spec = (yyvsp[(1) - (3)].list);
            (yyval.reference)->node.field.name = (yyvsp[(2) - (3)].info).string;
        }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 636 "spl.y"
    {
            (yyval.list) = NULL;
        }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 639 "spl.y"
    {
            (yyval.list)= (yyvsp[(2) - (3)].list);
        }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 645 "spl.y"
    {
            (yyval.list) = malloc(sizeof(struct list_struct));   
            sm_ref temp = spl_new_field();
            temp->node.field.type_spec = (yyvsp[(1) - (1)].list);
            temp->node.field.name = "opInput_list";
            (yyval.list)->node = temp;
            (yyval.list)->next = NULL;
        }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 653 "spl.y"
    {
            printf("opInput_list?\n");
        }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 659 "spl.y"
    {
            (yyval.list)=(yyvsp[(1) - (2)].list);
        }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 662 "spl.y"
    {
            printf("portInputs?\n");
        }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 668 "spl.y"
    {
            sm_list temp_list = NULL;
                    printf("start\n");
                    fflush(stdout);
            if((yyvsp[(2) - (7)].reference)!=NULL){
                    printf("two\n");
                    fflush(stdout);
                temp_list = malloc(sizeof(struct list_struct));
                temp_list->node = (yyvsp[(2) - (7)].reference);
                temp_list->next = NULL;
            }
            if((yyvsp[(3) - (7)].reference)!=NULL){
                    printf("three\n");
                    fflush(stdout);
                if(temp_list){
                    temp_list->next = malloc(sizeof(struct list_struct));
                    temp_list->next->node = (yyvsp[(3) - (7)].reference);
                    temp_list->next->next = NULL;
                } else {
                    temp_list = malloc(sizeof(struct list_struct));
                    temp_list->node = (yyvsp[(3) - (7)].reference);
                    temp_list->next = NULL;
                }
            }
            if((yyvsp[(4) - (7)].list)!=NULL){
                    printf("four\n");
                    fflush(stdout);
                sm_ref temp3 = spl_new_field();
                temp3->node.field.type_spec = (yyvsp[(4) - (7)].list);
                temp3->node.field.name = "invoke_actual";
                
                if(temp_list){
                    sm_list atemp=temp_list;
                    while(atemp->next){
                        atemp=atemp->next;
                    }
                    atemp->next = malloc(sizeof(struct list_struct));
                    atemp->next->node = temp3;
                    atemp->next->next = NULL;
                } else {
                    temp_list = malloc(sizeof(struct list_struct));
                    temp_list->node = temp3;
                    temp_list->next = NULL;
                }
            }
            if((yyvsp[(5) - (7)].list)!=NULL){
                    printf("five\n");
                    fflush(stdout);
                sm_ref temp4 = spl_new_field();
                temp4->node.field.type_spec = (yyvsp[(5) - (7)].list);
                temp4->node.field.name = "invoke_output";
                if(temp_list){
                    sm_list atemp=temp_list;
                    while(atemp->next){
                        atemp=atemp->next;
                    }
                    atemp->next = malloc(sizeof(struct list_struct));
                    atemp->next->node = temp4;
                    atemp->next->next = NULL;
                } else {
                    temp_list = malloc(sizeof(struct list_struct));
                    temp_list->node = temp4;
                    temp_list->next = NULL;
                }
            }
            //6th param ignored
            sm_ref temp = spl_new_field();
            temp->node.field.type_spec = temp_list;
            temp->node.field.name = "invoke body";
            (yyval.reference)=temp;
        }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 742 "spl.y"
    {
            (yyval.reference)=NULL;
        }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 745 "spl.y"
    {
            printf("invoke_logic_opt?\n");
        }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 751 "spl.y"
    {
            (yyval.reference)=NULL;
        }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 754 "spl.y"
    {
            printf("invoke_window_opt?\n");
        }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 760 "spl.y"
    {
            (yyval.list)=NULL;
        }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 763 "spl.y"
    {
            (yyval.list)=(yyvsp[(2) - (2)].list);
        }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 769 "spl.y"
    {
            (yyval.list)=NULL;
        }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 772 "spl.y"
    {
            (yyval.list)=(yyvsp[(2) - (2)].list);
        }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 779 "spl.y"
    {
            printf("invoke_config_opt?\n");
        }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 785 "spl.y"
    {
            printf("opInvokeLogic_list?\n");
        }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 788 "spl.y"
    {
            printf("opInvokeLogic_list?\n");
        }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 794 "spl.y"
    {
            printf("opInvokeWindow_list?\n");
        }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 797 "spl.y"
    {
            printf("opInvokeWindow_list?\n");
        }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 803 "spl.y"
    {
            (yyval.list) = malloc(sizeof(struct list_struct));
            (yyval.list)->node = (yyvsp[(1) - (1)].reference);
            (yyval.list)->next = NULL;
        }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 808 "spl.y"
    {
	    sm_list tmp = (yyvsp[(1) - (2)].list);
	    while (tmp->next != NULL) {
		tmp = tmp->next;
	    }
	    tmp->next = malloc(sizeof(struct list_struct));
	    tmp->next->node = (yyvsp[(2) - (2)].reference);
	    tmp->next->next = NULL;
	    (yyval.list) = (yyvsp[(1) - (2)].list);
        }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 821 "spl.y"
    {
            (yyval.list) = malloc(sizeof(struct list_struct));
            (yyval.list)->node = (yyvsp[(1) - (1)].reference);
            (yyval.list)->next = NULL;
        }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 826 "spl.y"
    {
	    sm_list tmp = (yyvsp[(1) - (2)].list);
	    while (tmp->next != NULL) {
		tmp = tmp->next;
	    }
	    tmp->next = malloc(sizeof(struct list_struct));
	    tmp->next->node = (yyvsp[(2) - (2)].reference);
	    tmp->next->next = NULL;
	    (yyval.list) = (yyvsp[(1) - (2)].list);
        }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 839 "spl.y"
    {
            printf("opInvokeLogic?\n");
        }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 842 "spl.y"
    {
            printf("opInvokeLogic?\n");
        }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 848 "spl.y"
    {
            printf("opInvokeCode?\n");
        }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 851 "spl.y"
    {
            printf("opInvokeCode?\n");
        }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 857 "spl.y"
    {
            printf("opInvokeState?\n");
        }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 860 "spl.y"
    {
            printf("opInvokeState?\n");
        }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 866 "spl.y"
    {
            printf("varDef_list?\n");
        }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 869 "spl.y"
    {
            printf("varDef_list?\n");
        }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 875 "spl.y"
    {
            printf("opInvokeWindow?\n");
        }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 881 "spl.y"
    {
            (yyval.reference)=spl_new_field();
            (yyval.reference)->node.field.name=(yyvsp[(1) - (4)].info).string;
            (yyval.reference)->node.field.type_spec=(yyvsp[(3) - (4)].list);
        }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 889 "spl.y"
    {
            (yyval.list) = malloc(sizeof(struct list_struct));
            sm_ref tmp = spl_new_assignment_expression();
            tmp->node.assignment_expression.right= (yyvsp[(3) - (3)].reference);
            (yyval.list)->node = tmp;
            (yyval.list)->next = NULL;
        }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 896 "spl.y"
    {
	    sm_list tmp = (yyvsp[(1) - (5)].list);
	    while (tmp->next != NULL) {
		tmp = tmp->next;
	    }
	    tmp->next = malloc(sizeof(struct list_struct));
            sm_ref tmp2 = spl_new_assignment_expression();
            tmp2->node.assignment_expression.right= (yyvsp[(5) - (5)].reference);
            sm_ref id = spl_new_identifier();
            id->node.identifier.id=(yyvsp[(3) - (5)].info).string;
            tmp2->node.assignment_expression.left= id;
	    tmp->next->node = tmp2;
	    tmp->next->next = NULL;
	    (yyval.list) = (yyvsp[(1) - (5)].list);
        }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 914 "spl.y"
    {
            printf("functionDef?\n");
        }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 920 "spl.y"
    {
            printf("functionHead?\n");
        }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 927 "spl.y"
    {
            printf("functionModifier_list?\n");
        }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 930 "spl.y"
    {
            printf("functionModifier_list?\n");
        }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 936 "spl.y"
    {
            printf("functionFormal_list?\n");
        }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 939 "spl.y"
    {
            printf("functionFormal_list?\n");
        }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 945 "spl.y"
    {
            printf("functionFormal?\n");
        }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 953 "spl.y"
    {
            printf("stmt?\n");
        }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 956 "spl.y"
    {
            printf("stmt?\n");
        }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 959 "spl.y"
    {
            printf("stmt?\n");
        }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 962 "spl.y"
    {
            printf("stmt?\n");
        }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 965 "spl.y"
    {
            printf("stmt?\n");
        }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 968 "spl.y"
    {
            printf("stmt?\n");
        }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 971 "spl.y"
    {
            printf("stmt?\n");
        }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 974 "spl.y"
    {
            printf("stmt?\n");
        }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 977 "spl.y"
    {
            printf("stmt?\n");
        }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 983 "spl.y"
    {
            printf("varDef?\n");
        }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 990 "spl.y"
    {
            printf("mutable_opt?\n");
        }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 996 "spl.y"
    {
            printf("blockStmt?\n");
        }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 1003 "spl.y"
    {
            printf("stmt_typedef_list?\n");
        }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 1006 "spl.y"
    {
            printf("stmt_typedef_list?\n");
        }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 1012 "spl.y"
    {
            printf("exprStmt?\n");
        }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 1018 "spl.y"
    {
            printf("ifStmt?\n");
        }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 1021 "spl.y"
    {
            printf("ifStmt?\n");
        }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 1027 "spl.y"
    {
            printf("forStmt?\n");
        }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 1033 "spl.y"
    {
            printf("whileStmt?\n");
        }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 1039 "spl.y"
    {
            printf("breakStmt?\n");
        }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 1045 "spl.y"
    {
            printf("continueStmt?\n");
        }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 1051 "spl.y"
    {
            printf("returnStmt?\n");
        }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 1054 "spl.y"
    {
            printf("returnStmt?\n");
        }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 1060 "spl.y"
    {
        	(yyval.reference)=(yyvsp[(1) - (1)].reference);
	}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 1063 "spl.y"
    {
            (yyval.reference)= (yyvsp[(1) - (1)].reference);
        }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 1066 "spl.y"
    {
            printf("expr?\n");
        }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 1069 "spl.y"
    {
            printf("expr?\n");
        }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 1072 "spl.y"
    {
            printf("expr?\n");
        }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 1075 "spl.y"
    {
	    (yyval.reference) = spl_new_identifier();
	    (yyval.reference)->node.identifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.identifier.id = (yyvsp[(1) - (1)].info).string;
	}
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 1080 "spl.y"
    {
            (yyval.reference)=(yyvsp[(1) - (1)].reference);
        }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 1086 "spl.y"
    {
        	(yyval.reference)= (yyvsp[(1) - (2)].reference);
		(yyval.reference)->node.operator.right = (yyvsp[(2) - (2)].reference);
	}
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 1093 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = BANG;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 1100 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = MINUS;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 1107 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = TILDE;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 1114 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = INC_OP;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 1121 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = DEC_OP;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 1131 "spl.y"
    {
	    (yyval.reference) = (yyvsp[(2) - (3)].reference);
	    (yyval.reference)->node.operator.right = (yyvsp[(3) - (3)].reference);
	    (yyval.reference)->node.operator.left = (yyvsp[(1) - (3)].reference);
        }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 1136 "spl.y"
    {
            printf("infixExpr?\n");
        }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 1139 "spl.y"
    {
            printf("infixExpr?\n");
        }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 1145 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = PLUS;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 1152 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = MINUS;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 1159 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = STAR;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 1166 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = SLASH;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 1173 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = MODULUS;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 1180 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = LEFT_SHIFT;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 1187 "spl.y"
    {
        	printf("infixop?\n");	
	}
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 1190 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = ARITH_AND;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 1197 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = ARITH_XOR;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 1204 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = ARITH_OR;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 1211 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = LOG_AND;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 1218 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = LOG_OR;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 1225 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = IN;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 1232 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = LT;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 1239 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = LEQ;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 1246 "spl.y"
    {
        	printf("infixop?\n");
	}
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 1249 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = GEQ;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 1256 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = NEQ;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 1263 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = EQ;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 1273 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = DOT_PLUS;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 1280 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = DOT_PLUS;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 1287 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = DOT_STAR;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 1294 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = DOT_SLASH;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 1301 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = DOT_MODULUS;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 1308 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = DOT_LEFT_SHIFT;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 1315 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = DOT_RIGHT_SHIFT;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 1322 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = DOT_ARITH_AND;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 1329 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = DOT_ARITH_XOR;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 1336 "spl.y"
    {
	    (yyval.reference) = spl_new_operator();
	    (yyval.reference)->node.operator.operation_type = DOT_ARITH_OR;
	    (yyval.reference)->node.operator.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.operator.right = NULL;
	    (yyval.reference)->node.operator.left = NULL;
        }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 1343 "spl.y"
    {
            printf("mappedOp?\n");
        }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 1346 "spl.y"
    {
            printf("mappedOp?\n");
        }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 1349 "spl.y"
    {
            printf("mappedOp?\n");
        }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 1352 "spl.y"
    {
            printf("mappedOp?\n");
        }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 1355 "spl.y"
    {
            printf("mappedOp?\n");
        }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 1358 "spl.y"
    {
            printf("mappedOp?\n");
        }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 1364 "spl.y"
    {
            printf("assignOp?\n");
        }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 1367 "spl.y"
    {
            printf("assignOp?\n");
        }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 1370 "spl.y"
    {
            printf("assignOp?\n");
        }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 1373 "spl.y"
    {
            printf("assignOp?\n");
        }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 1376 "spl.y"
    {
            printf("assignOp?\n");
        }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 1379 "spl.y"
    {
            printf("assignOp?\n");
        }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 1382 "spl.y"
    {
            printf("assignOp?\n");
        }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 1385 "spl.y"
    {
            printf("assignOp?\n");
        }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 1388 "spl.y"
    {
            printf("assignOp?\n");
        }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 1391 "spl.y"
    {
            printf("assignOp?\n");
        }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 1394 "spl.y"
    {
            printf("assignOp?\n");
        }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 1400 "spl.y"
    {
            printf("postfixExpr?\n");
        }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 1403 "spl.y"
    {
            printf("postfixExpr?\n");
        }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 1406 "spl.y"
    {
            printf("postfixExpr?\n");
        }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 1409 "spl.y"
    {
            printf("postfixExpr?\n");
        }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 1412 "spl.y"
    {
            printf("postfixExpr?\n");
        }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 1418 "spl.y"
    {
            printf("subscript?\n");
        }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 1421 "spl.y"
    {
            printf("subscript?\n");
        }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 1428 "spl.y"
    {
            printf("expr_opt?\n");
        }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 1434 "spl.y"
    {
            printf("postfixOp?\n");
        }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 1437 "spl.y"
    {
            printf("postfixOp?\n");
        }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 1443 "spl.y"
    {
            printf("conditionalExpr?\n");
        }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 1449 "spl.y"
    {
            (yyval.reference) = (yyvsp[(1) - (1)].reference);
        }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 1452 "spl.y"
    {
            printf("literal?\n");
        }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 1455 "spl.y"
    {
            printf("literal?\n");
        }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 1458 "spl.y"
    {
            printf("literal?\n");
        }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 1461 "spl.y"
    {
            printf("literal?\n");
        }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 1467 "spl.y"
    {
            printf("listLiteral?\n");
        }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 1473 "spl.y"
    {
            printf("setLiteral?\n");
        }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 1479 "spl.y"
    {
            printf("mapLiteral?\n");
        }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 1485 "spl.y"
    {
            printf("map_list?\n");
        }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 1488 "spl.y"
    {
            printf("map_list?\n");
        }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 1494 "spl.y"
    {
            printf("map?\n");
        }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 1500 "spl.y"
    {
            printf("tupleLiteral?\n");
        }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 1506 "spl.y"
    {
	    (yyval.reference) = spl_new_constant();
	    (yyval.reference)->node.constant.token = integer_constant;
	    (yyval.reference)->node.constant.const_val = "1";
	    (yyval.reference)->node.constant.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
        }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 1512 "spl.y"
    {
	    (yyval.reference) = spl_new_constant();
	    (yyval.reference)->node.constant.token = integer_constant;
	    (yyval.reference)->node.constant.const_val = "0";
	    (yyval.reference)->node.constant.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
        }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 1518 "spl.y"
    {
	    (yyval.reference) = spl_new_constant();
	    (yyval.reference)->node.constant.token = string_constant;
	    (yyval.reference)->node.constant.const_val = (yyvsp[(1) - (1)].info).string;
	    (yyval.reference)->node.constant.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
        }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 1524 "spl.y"
    {
	    (yyval.reference) = spl_new_constant();
	    (yyval.reference)->node.constant.token = floating_constant;
	    (yyval.reference)->node.constant.const_val = (yyvsp[(1) - (1)].info).string;
	    (yyval.reference)->node.constant.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
        }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 1530 "spl.y"
    {
	    (yyval.reference) = spl_new_constant();
	    (yyval.reference)->node.constant.token = integer_constant;
	    (yyval.reference)->node.constant.const_val = (yyvsp[(1) - (1)].info).string;
	    (yyval.reference)->node.constant.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
        }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 1539 "spl.y"
    {
            printf("standAloneTypeDef?\n");
        }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 1542 "spl.y"
    {
            printf("standAloneTypeDef?\n");
        }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 1548 "spl.y"
    {
            printf("compositeTypeDef?\n");
        }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 1551 "spl.y"
    {
            printf("compositeTypeDef?\n");
        }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 1558 "spl.y"
    {
            printf("static_opt?\n");
        }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 1565 "spl.y"
    {
            printf("typeArgs_list?\n");
        }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 1571 "spl.y"
    {
            printf("type?\n");
        }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 1574 "spl.y"
    {
            printf("type?\n");
        }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 1577 "spl.y"
    {
            (yyval.reference)=(yyvsp[(1) - (1)].reference);
        }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 1580 "spl.y"
    {
            printf("type?\n");
        }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 1586 "spl.y"
    {
            printf("typeArgs?\n");
        }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 1592 "spl.y"
    {
            printf("type_list?\n");
        }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 1595 "spl.y"
    {
            printf("type_list?\n");
        }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 1601 "spl.y"
    {
            printf("typeDims?\n");
        }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 1607 "spl.y"
    {
            printf("primitiveType?\n");
        }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 1610 "spl.y"
    {
            printf("primitiveType?\n");
        }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 1613 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = INT8;
        }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 1618 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = INT16;
	}
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 1623 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = INT32;
	}
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 1628 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = INT64;
        }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 1633 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = INT128;
        }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 1638 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = UINT8;
        }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 1643 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = UINT16;
        }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 1648 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = UINT32;
        }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 1653 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = UINT64;
        }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 1658 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = UINT128;
        }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 1663 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = FLOAT32;
        }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 1668 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = FLOAT64;
        }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 1673 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = DECIMAL32;
        }
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 1678 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = DECIMAL64;
        }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 1683 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = DECIMAL128;
        }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 1688 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = COMPLEX32;
        }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 1693 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = COMPLEX64;;
        }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 1698 "spl.y"
    {
            printf("primitiveType?\n");
        }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 1701 "spl.y"
    {
            printf("primitiveType?\n");
        }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 1704 "spl.y"
    {
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (2)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = STRING8;
        }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 1709 "spl.y"
    {
            printf("primitiveType?\n");
	    (yyval.reference) = spl_new_type_specifier();
	    (yyval.reference)->node.type_specifier.lx_srcpos = (yyvsp[(1) - (1)].info).lx_srcpos;
	    (yyval.reference)->node.type_specifier.token = STRING16;
        }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 1719 "spl.y"
    {
            printf("typeDims_opt?\n");
        }
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 1725 "spl.y"
    {
            printf("compositeType?\n");
            (yyval.list)=(yyvsp[(1) - (1)].list);
        }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 1729 "spl.y"
    {
            printf("compositeType?\n");
        }
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 1732 "spl.y"
    {
            printf("compositeType?\n");
        }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 1735 "spl.y"
    {
            printf("compositeType?\n");
        }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 1741 "spl.y"
    {
            printf("tupleType?\n");
            (yyval.list)=(yyvsp[(3) - (4)].list);
        }
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 1748 "spl.y"
    {
            (yyval.list)=(yyvsp[(1) - (1)].list);
        }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 1751 "spl.y"
    {
            printf("tupleBody?\n");
        }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 1757 "spl.y"
    {
            (yyval.list) = malloc(sizeof(struct list_struct));
            (yyval.list)->node = (yyvsp[(1) - (1)].reference);
            (yyval.list)->next = NULL;
        }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 1762 "spl.y"
    {
	    sm_list tmp = (yyvsp[(1) - (3)].list);
	    while (tmp->next != NULL) {
		tmp = tmp->next;
	    }
	    tmp->next = malloc(sizeof(struct list_struct));
	    tmp->next->node = (yyvsp[(3) - (3)].reference);
	    tmp->next->next = NULL;
	    (yyval.list) = (yyvsp[(1) - (3)].list);
        }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 1775 "spl.y"
    {
            printf("id_tt_list?\n");
        }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 1778 "spl.y"
    {
            printf("id_tt_list?\n");
        }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 1781 "spl.y"
    {
            printf("id_tt_list?\n");
        }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 1784 "spl.y"
    {
            printf("id_tt_list?\n");
        }
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 1790 "spl.y"
    {
	    (yyval.reference) = spl_new_identifier();
            (yyval.reference)->node.identifier.cg_type =(yyvsp[(1) - (2)].reference)->node.type_specifier.token;
	    (yyval.reference)->node.identifier.lx_srcpos = (yyvsp[(2) - (2)].info).lx_srcpos;
	    (yyval.reference)->node.identifier.id = (yyvsp[(2) - (2)].info).string;
        }
    break;



/* Line 1806 of yacc.c  */
#line 5236 "/Users/drewbratcher/projects/Nightly_build_area/spl/spl.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 1798 "spl.y"


#include "lex.yy.c"

typedef struct scope *scope_ptr;

struct parse_struct {
    sm_list decls;
    sm_list standard_decls;
    scope_ptr scope;
    int defined_type_count;
    char **defined_types;
    void *client_data;
    err_out_func_t error_func;
};

void program1(sm_ref one, sm_list two) {
    FILE* fp = fopen("main.c", "w");
    fprintf(fp,"#include <stdio.h>\n");
    fprintf(fp,"#include <string.h>\n");
    fprintf(fp,"#include \"evpath.h\"\n");
    fprintf(fp,"\n");
    sm_list tmp = two;
    while (tmp->next != NULL) {
        if(tmp->node->node.assignment_expression.left->node.assignment_expression.left->node.field.type_spec){
        
            //print struct
            sm_ref node_ref=tmp->node->node.assignment_expression.left->node.assignment_expression.left;
            fprintf(fp,"typedef struct _%s_rec {\n",node_ref->node.field.name);
            sm_list next_level=node_ref->node.field.type_spec;
            while(next_level->next !=NULL){
                fprintf(fp,"\tint %s;\n",next_level->node->node.identifier.id);
                next_level=next_level->next;
            }
            fprintf(fp,"\tint %s;\n",next_level->node->node.identifier.id);
            fprintf(fp,"} %s_rec, *%s_rec_ptr;\n\n",node_ref->node.field.name,node_ref->node.field.name);
            
            
            
            //print FMfield
            fprintf(fp,"static FMField %s_field_list [] = {\n",node_ref->node.field.name);
            next_level=node_ref->node.field.type_spec;
            while(next_level->next !=NULL){
                fprintf(fp,"\t{\"%s\", \"integer\", sizeof(int), FMOffset(%s_rec_ptr, %s)},\n",next_level->node->node.identifier.id,node_ref->node.field.name,next_level->node->node.identifier.id);
                next_level=next_level->next;
            }
            fprintf(fp,"\t{\"%s\", \"integer\", sizeof(int), FMOffset(%s_rec_ptr, %s)},\n",next_level->node->node.identifier.id,node_ref->node.field.name,next_level->node->node.identifier.id);
            fprintf(fp,"\t{NULL, NULL, 0, 0}\n");
            fprintf(fp,"};\n\n",node_ref->node.field.name,node_ref->node.field.name);
            
            
            //print FMstruct
            fprintf(fp,"static FMStructDescRec %s_format_list [] = {\n",node_ref->node.field.name);
            fprintf(fp,"\t{\"%s\", %s_field_list, sizeof(%s_rec), NULL},\n",node_ref->node.field.name,node_ref->node.field.name,node_ref->node.field.name);
            fprintf(fp,"\t{NULL, NULL}\n");
            fprintf(fp,"};\n\n");
            
            
            //print handler
            fprintf(fp,"static int %s_handler(CManager cm, void *vevent, void *client_data, attr_list attrs) {\n",node_ref->node.field.name);
            fprintf(fp,"\t%s_rec_ptr event = vevent;\n",node_ref->node.field.name);
            fprintf(fp,"\tprintf(\"%s got a struct with the following:\\n\");\n",node_ref->node.field.name);
            next_level=node_ref->node.field.type_spec;
            while(next_level->next !=NULL){
                fprintf(fp,"\tprintf(\"%s:%%d\\n\",event->%s);\n",next_level->node->node.identifier.id,next_level->node->node.identifier.id);
                next_level=next_level->next;
            }
            fprintf(fp,"\tprintf(\"%s:%%d\\n\",event->%s);\n",next_level->node->node.identifier.id,next_level->node->node.identifier.id);
            fprintf(fp,"};\n\n");
        }
        tmp = tmp->next;
    }
    
    
    //print main stuff
    fprintf(fp, "\n\nint main(int argc, char **argv) {\n");
    fprintf(fp, "\tCManager cm;\n");
    
    //print main declarations
    tmp = two;
    while (tmp->next != NULL) {
        if(tmp->node->node.assignment_expression.left->node.assignment_expression.left->node.field.type_spec){
            //print stone
            sm_ref node_ref=tmp->node->node.assignment_expression.left->node.assignment_expression.left;
            fprintf(fp,"\t%s_rec %s_data;\n",node_ref->node.field.name,node_ref->node.field.name);
            fprintf(fp,"\tEVstone %s_stone;\n",node_ref->node.field.name);
            fprintf(fp,"\tEVsource %s_source;\n\n",node_ref->node.field.name);
        }
        tmp = tmp->next;
    }
    
    //print main stuff
    fprintf(fp, "\tcm = CManager_create();\n");
    
    //print create stones
    tmp = two;
    while (tmp->next != NULL) {
        if(tmp->node->node.assignment_expression.left->node.assignment_expression.left->node.field.type_spec){
            sm_ref node_ref=tmp->node->node.assignment_expression.left->node.assignment_expression.left;
            fprintf(fp,"\t%s_stone = EValloc_stone(cm);\n",node_ref->node.field.name);
            fprintf(fp,"\tEVassoc_terminal_action(cm, %s_stone, %s_format_list, %s_handler, NULL);\n\n",node_ref->node.field.name,node_ref->node.field.name,node_ref->node.field.name);
            fprintf(fp,"\t%s_source = EVcreate_submit_handle(cm, %s_stone, %s_format_list);\n",node_ref->node.field.name,node_ref->node.field.name,node_ref->node.field.name);
            sm_list next_level=node_ref->node.field.type_spec;
            while(next_level->next !=NULL){
                fprintf(fp,"\t%s_data.%s = 1;\n",node_ref->node.field.name,next_level->node->node.identifier.id);
                next_level=next_level->next;
            }
            fprintf(fp,"\t%s_data.%s = 1;\n",node_ref->node.field.name,next_level->node->node.identifier.id);
            fprintf(fp,"\tEVsubmit(%s_source, &%s_data, NULL);\n\n",node_ref->node.field.name,node_ref->node.field.name);
        }
        tmp = tmp->next;
    }
    
    fprintf(fp,"\n\n}");
    
    fclose(fp);
}

void debug_print(FILE* fp, const char* string, int tabs){
    int i =0;
    for(i=0; i<tabs; i++){
        fprintf(fp, "\t");
    }
    fprintf(fp, "printf(\"%s\\n\");\n", string);
    for(i=0;  i<tabs; i++){
        fprintf(fp, "\t");
    }
    fprintf(fp, "fflush(stdout);\n");
}

void print_filter(FILE* fp, const char *name, sm_list ids) {
    fprintf(fp,"static char* %s_filter = \"{\\n\\\n",name);
    fprintf(fp,"int hop_count;\\n\\\n");
    fprintf(fp,"hop_count = attr_ivalue(event_attrs, \\\"hop_count_atom\\\");\\n\\\n");
    fprintf(fp,"hop_count++;\\n\\\n");
    while(ids != NULL) { 
        fprintf(fp,"printf(\\\"in  %s filter with %s = %%d\\\\n\\\", input.%s);\\n\\\n", name, ids->node->node.identifier.id, ids->node->node.identifier.id);
        fprintf(fp,"input.%s+=1;\\n\\\n", ids->node->node.identifier.id);
        ids=ids->next;
    }
    fprintf(fp,"set_int_attr(event_attrs, \\\"hop_count_atom\\\", hop_count);\\n\\\n");
    fprintf(fp,"}\\0\\0\";\n\n");
}

void print_struct(FILE* fp, const char *name, sm_list ids){
    fprintf(fp,"typedef struct _%s_rec {\n", name);
    while(ids !=NULL){
        fprintf(fp,"\tint %s;\n",ids->node->node.identifier.id);
        ids=ids->next;
    }
    fprintf(fp,"} %s_rec, *%s_rec_ptr;\n\n",name,name);
}

const char *get_FMField_type(int cg_type){
	switch(cg_type){
		default:
		case INT8:
		case INT16:
		case INT32:
		case INT64:
		case INT128:
			return "integer";
		case UINT8:
		case UINT16:
		case UINT32:
		case UINT64:
		case UINT128:
			return "unsigned integer";
		case FLOAT32:
		case FLOAT64:
			return "float";
		case DECIMAL32:
		case DECIMAL64:
		case DECIMAL128:
			return "double";
		case STRING8:
		case STRING16:
			return "char";
		case COMPLEX32:
		case COMPLEX64:
			return "complex";
	}
}

int get_FMField_size(int cg_type){
	switch(cg_type){
		default:
		case INT32:
		case UINT32:
		case FLOAT32:
		case DECIMAL32:
		case COMPLEX32:
			return 4;
		case INT8:
		case UINT8:
			return 1;
		case INT16:
		case UINT16:
			return 2;
		case INT64:
		case UINT64:
		case FLOAT64:
		case DECIMAL64:
		case COMPLEX64:
		case STRING8:
			return 8;
		case INT128:
		case UINT128:
		case DECIMAL128:
		case STRING16:
			return 16;
	}
}

void print_FMfield(FILE* fp, const char * name, sm_list ids) {
    fprintf(fp,"static FMField %s_field_list [] = {\n",name);
    while(ids != NULL){
	char *id = ids->node->node.identifier.id;
        const char* type=get_FMField_type(ids->node->node.identifier.cg_type);
	int size = get_FMField_size(ids->node->node.identifier.cg_type);
	fprintf(fp,"\t{\"%s\", \"%s\", %d, FMOffset(%s_rec_ptr, %s)},\n",id, type, size, name,id);
        ids=ids->next;
    }
    fprintf(fp,"\t{NULL, NULL, 0, 0}\n");
    fprintf(fp,"};\n\n");
}

void print_FMstruct(FILE* fp, const char *name) {
    fprintf(fp,"static FMStructDescRec %s_format_list [] = {\n",name);
    fprintf(fp,"\t{\"%s\", %s_field_list, sizeof(%s_rec), NULL},\n",name,name,name);
    fprintf(fp,"\t{NULL, NULL}\n");
    fprintf(fp,"};\n\n");
}

void print_handler(FILE* fp, const char *name, sm_list ids) {
    fprintf(fp,"static int %s_handler(CManager cm, void *vevent, void *client_data, attr_list attrs) {\n",name);
    fprintf(fp,"\t%s_rec_ptr event = vevent;\n",name);
    fprintf(fp,"\tprintf(\"%s got a struct with the following:\\n\");\n",name);
    while(ids !=NULL){
        fprintf(fp,"\tprintf(\"%s:%%d\\n\",event->%s);\n",ids->node->node.identifier.id,ids->node->node.identifier.id);
        ids=ids->next;
    }
    fprintf(fp,"\tEVdfg_shutdown(test_dfg, 0);\n");
    fprintf(fp,"};\n\n");
}

void print_generate(FILE* fp, const char *name, sm_list ids) {
    fprintf(fp, "void generate_%s_record(%s_rec_ptr event)\n", name, name);
    fprintf(fp, "{\n");
    while(ids !=NULL){
        fprintf(fp, "\tevent->%s = 0;\n", ids->node->node.identifier.id);
        ids=ids->next;
    }
    fprintf(fp, "}\n\n");
}

void print_master(FILE* fp, const char *name) {
    fprintf(fp, "\n\nextern int be_test_master(int argc, char **argv) {\n");
    debug_print(fp, "in master",1);
    fprintf(fp, "\tchar **nodes;\n");
    fprintf(fp, "\tCManager cm;\n");
    fprintf(fp, "\tattr_list contact_list;\n");
    fprintf(fp, "\tchar *str_contact;\n");
    fprintf(fp, "\tEVdfg_stone src, last, tmp, sink;\n");
    fprintf(fp, "\tEVsource source_handle;\n");
    fprintf(fp, "\tint node_count = 5;\n");
    fprintf(fp, "\tint i;\n");
    fprintf(fp, "\tnodes = malloc(sizeof(nodes[0]) * (node_count+1));\n");
    fprintf(fp, "\tfor (i=0; i < node_count; i++) {\n");
    fprintf(fp, "\t\tnodes[i] = malloc(5);\n");
    fprintf(fp, "\t\tsprintf(nodes[i], \"N%%d\", i);\n");
    fprintf(fp, "\t}\n");
    fprintf(fp, "\tcm = CManager_create();\n");
    fprintf(fp, "\tCMlisten(cm);\n");
    fprintf(fp, "\tcontact_list = CMget_contact_list(cm);\n");
    fprintf(fp, "\tstr_contact = attr_list_to_string(contact_list);\n");
    fprintf(fp, "\tsource_handle = EVcreate_submit_handle(cm, -1, %s_format_list);\n", name);
    fprintf(fp, "\tEVdfg_register_source(\"master_source\", source_handle);\n");
    fprintf(fp, "\tEVdfg_register_sink_handler(cm, \"%s_handler\", %s_format_list, (EVSimpleHandlerFunc) %s_handler);\n", name, name, name);
    fprintf(fp, "\ttest_dfg = EVdfg_create(cm);\n");
    fprintf(fp, "\tEVdfg_register_node_list(test_dfg, &nodes[0]);\n");
    fprintf(fp, "\tsrc = EVdfg_create_source_stone(test_dfg, \"master_source\");\n");
    fprintf(fp, "\tEVdfg_assign_node(src, nodes[0]);\n");
    fprintf(fp, "\tchar *filter;\n");
    fprintf(fp, "\tfilter = create_filter_action_spec(NULL, %s_filter);\n", name);
    fprintf(fp, "\tlast = src;\n");
    fprintf(fp, "\tfor (i=1; i < node_count -1; i++) {\n");
    fprintf(fp, "\t\ttmp = EVdfg_create_stone(test_dfg, filter);\n");
    fprintf(fp, "\t\tEVdfg_link_port(last, 0, tmp);\n");
    fprintf(fp, "\t\tEVdfg_assign_node(tmp, nodes[i]);\n");
    fprintf(fp, "\t\tlast = tmp;\n");
    fprintf(fp, "\t}\n");
    fprintf(fp, "\tsink = EVdfg_create_sink_stone(test_dfg, \"%s_handler\");\n", name);
    fprintf(fp, "\tEVdfg_link_port(last, 0, sink);\n");
    fprintf(fp, "\tEVdfg_assign_node(sink, nodes[node_count-1]);\n");
    fprintf(fp, "\tEVdfg_realize(test_dfg);\n");
    fprintf(fp, "\tEVdfg_join_dfg(test_dfg, nodes[0], str_contact);\n");
    fprintf(fp, "\ttest_fork_children(&nodes[0], str_contact);\n");
    fprintf(fp, "\tif (EVdfg_ready_wait(test_dfg) != 1) {\n");
    fprintf(fp, "\t\t/* dfg initialization failed! */\n");
    fprintf(fp, "\t\texit(1);\n");
    fprintf(fp, "\t}\n");
    fprintf(fp, "\tif (EVdfg_active_sink_count(test_dfg) == 0) {\n");
    fprintf(fp, "\t\tEVdfg_ready_for_shutdown(test_dfg);\n");
    fprintf(fp, "\t}\n");
    fprintf(fp, "\tif (EVdfg_source_active(source_handle)) {\n");
    fprintf(fp, "\t\t%s_rec rec;\n", name);
    fprintf(fp, "\t\tatom_t hop_count_atom;\n");
    fprintf(fp, "\t\tattr_list attrs = create_attr_list();\n");
    fprintf(fp, "\t\thop_count_atom = attr_atom_from_string(\"hop_count_atom\");\n");
    fprintf(fp, "\t\tadd_int_attr(attrs, hop_count_atom, 1);\n");
    fprintf(fp, "\t\tgenerate_%s_record(&rec);\n", name);
    fprintf(fp, "\t\t/* submit would be quietly ignored if source is not active */\n");
    fprintf(fp, "\t\tEVsubmit(source_handle, &rec, attrs);\n");
    fprintf(fp, "\t}\n");
    fprintf(fp, "\tstatus = EVdfg_wait_for_shutdown(test_dfg);\n");
    fprintf(fp, "\twait_for_children(nodes);\n");
    fprintf(fp, "\tCManager_close(cm);\n");
    fprintf(fp, "\treturn status;\n");
    fprintf(fp, "}\n\n");
}

void print_child(FILE* fp, const char *name) {
    fprintf(fp, "extern int\n");
    fprintf(fp, "be_test_child(int argc, char **argv)\n");
    fprintf(fp, "{\n");
    debug_print(fp, "in child", 1);
    fprintf(fp, "\tCManager cm;\n");
    fprintf(fp, "\tEVsource src;\n");
    fprintf(fp, "\tcm = CManager_create();\n");
    fprintf(fp, "\tif (argc != 3) {\n");
    fprintf(fp, "\t\tprintf(\"Child usage:  evtest  <nodename> <mastercontact>\\n\");\n");
    fprintf(fp, "\t\texit(1);\n");
    fprintf(fp, "\t}\n");
    fprintf(fp, "\ttest_dfg = EVdfg_create(cm);\n");
    fprintf(fp, "\tsrc = EVcreate_submit_handle(cm, -1, %s_format_list);\n", name);
    fprintf(fp, "\tEVdfg_register_source(\"master_source\", src);\n");
    fprintf(fp, "\tEVdfg_register_sink_handler(cm, \"%s_handler\", %s_format_list, (EVSimpleHandlerFunc) %s_handler);\n", name, name, name);
    fprintf(fp, "\tEVdfg_join_dfg(test_dfg, argv[1], argv[2]);\n");
    fprintf(fp, "\tEVdfg_ready_wait(test_dfg);\n");
    fprintf(fp, "\tif (EVdfg_active_sink_count(test_dfg) == 0) {\n");
    fprintf(fp, "\t\tEVdfg_ready_for_shutdown(test_dfg);\n");
    fprintf(fp, "\t}\n");
    fprintf(fp, "\tif (EVdfg_source_active(src)) {\n");
    fprintf(fp, "\t\t%s_rec rec;\n", name);
    fprintf(fp, "\t\tgenerate_%s_record(&rec);\n", name);
    fprintf(fp, "\t\t/* submit would be quietly ignored if source is not active */\n");
    fprintf(fp, "\t\tEVsubmit(src, &rec, NULL);\n");
    fprintf(fp, "\t}\n");
    fprintf(fp, "\treturn EVdfg_wait_for_shutdown(test_dfg);\n");
    fprintf(fp, "}\n");
}

void program2(sm_ref one, sm_list two) {
    FILE* fp = fopen("main.c", "w");
    fprintf(fp,"#include <stdio.h>\n");
    fprintf(fp,"#include <stdlib.h>\n");
    fprintf(fp,"#include <string.h>\n");
    fprintf(fp,"#include \"config.h\"\n");
    fprintf(fp,"#include \"evpath.h\"\n");
    fprintf(fp,"#include \"ev_dfg.h\"\n");
    fprintf(fp,"#include \"test_support.h\"\n");
    fprintf(fp,"\n");
    fprintf(fp,"int status;\n");
    fprintf(fp,"static EVdfg test_dfg;\n");
    fprintf(fp,"\n");
    sm_list tmp = two;
    while (tmp != NULL) {
        //pull relevant parts out of abstract syntax tree
        sm_ref left_stream_decl=tmp->node->node.assignment_expression.left->node.assignment_expression.left->node.field.type_spec->node;
        const char * stream_name=left_stream_decl->node.field.name;
        sm_list output_ids= left_stream_decl->node.field.type_spec;
        printf("stream name:%s\n",stream_name);
        printf("stream outputs:");
        sm_list ids=output_ids;
        while(ids != NULL){
            printf(" %s", ids->node->node.identifier.id);
            ids=ids->next;
        }
        printf("\n");
        const char *right_side_name = tmp->node->node.assignment_expression.left->node.assignment_expression.right->node.field.name;
        printf("right side name:%s\n",right_side_name);
        if(tmp->node->node.assignment_expression.left->node.assignment_expression.right->node.field.type_spec){
            const char *input=tmp->node->node.assignment_expression.left->node.assignment_expression.right->node.field.type_spec->node->node.field.type_spec->node->node.identifier.id;
            printf("stream input:%s\n",input);
        }
        printf("right side:");
        spl_print(tmp->node->node.assignment_expression.right);
        sm_list alist=tmp->node->node.assignment_expression.right->node.field.type_spec;
        int j=1;
        while(alist && alist->node){
            printf("line %d:\n",j++);
            spl_print(alist->node);
            spl_print(alist->node->node.field.type_spec->node);
            alist=alist->next;
        }
        printf("\n\n");
        //print filter
        print_filter(fp, stream_name, output_ids);
        
        //print struct
        print_struct(fp, stream_name, output_ids);
        
        //print FMfield
        print_FMfield(fp, stream_name, output_ids);
        
        //print FMstruct
        print_FMstruct(fp, stream_name);
        
        //print handler
        print_handler(fp, stream_name, output_ids);
        
        //print generate functions
        print_generate(fp, stream_name, output_ids);
        tmp = tmp->next;
    }
    
    //print master stuff
    print_master(fp, "Sum");
    
    //print child stuff
    print_child(fp, "Sum");

    
    fclose(fp);
}

static void default_error_out(void *client_data, char *string);

extern spl_parse_context new_spl_parse_context() {
    spl_parse_context context = malloc(sizeof(struct parse_struct));
    context->decls = NULL;
    context->standard_decls = NULL;
    context->scope = NULL;
    context->defined_type_count = 0;
    context->defined_types = NULL;
    context->error_func = default_error_out;
    context->client_data = NULL;
    return context;
}

spl_code_gen(char *code) {
    spl_parse_context context = new_spl_parse_context();

    if (code != NULL) {
	setup_for_string_parse(code, context->defined_type_count, context->defined_types);
	spl_code_string = code;
    }

    yyerror_count = 0;
    yycontext = context;
    yyparse();
    terminate_string_parse();

    if ((yyparse_value == NULL) || (yyerror_count != 0)) {
	return 0;
    }
}

static char * copy_line(const char *line_begin){
    const char *line_end;
    if ((line_end = strchr(line_begin, 10)) == NULL) {
	/* no CR */
	return strdup(line_begin);
    } else {
	char *tmp = malloc(line_end - line_begin + 1);
	strncpy(tmp, line_begin, line_end - line_begin);
	tmp[line_end - line_begin] = 0;
	return tmp;
    }
}

static void default_error_out(void *client_data, char *string) {
    fprintf(stderr, "%s", string);
}

static void print_context(spl_parse_context context, int line, int character) {
    const char *tmp = spl_code_string;
    const char *line_begin = spl_code_string;
    char *line_copy = NULL;
    int i, line_len, offset = 0;

    while (line > 1) {
	switch(*tmp) {
	case 10:
	    line_begin = tmp + 1;
	    line--;
	    break;
	case 0:
	    line = 1;   /* end of src */
	    break;
	}
	tmp++;
    }
    if (character > 40) {
	offset = character - 40;
    }
    line_copy = copy_line(line_begin + offset);
    line_len = strlen(line_copy);
    if (line_len > 60) {
	line_copy[60] = 0;
    }
    context->error_func(context->client_data, line_copy);
    context->error_func(context->client_data, "\n");
    free(line_copy);
    for(i=offset + 1; i< character; i++) {
	if (line_begin[i-1] == '\t') {
	    context->error_func(context->client_data, "\t");
	} else {
	    context->error_func(context->client_data, " ");
	}
    }
    context->error_func(context->client_data, "^\n");
}

void yyerror(char *str) {
    char tmp_str[100];
    sprintf(tmp_str, "## Error %s\n", str);
    yycontext->error_func(yycontext->client_data, tmp_str);
    yycontext->error_func(yycontext->client_data, "## While parsing near ");
    yycontext->error_func(yycontext->client_data, yytext);
    sprintf(tmp_str, ", offset = %d, line = %d ####\n",lex_offset,line_count);
    yycontext->error_func(yycontext->client_data, tmp_str);
    print_context(yycontext, line_count, lex_offset);
    yyerror_count++;
}

extern void spl_print_srcpos(srcpos pos) {
    printf("line %d, char %d", pos.line, pos.character);
}


