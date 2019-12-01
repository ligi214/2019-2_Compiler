/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "subc.y" /* yacc.c:339  */

/*
 * File Name   : subc.y
 * Description : a skeleton bison input
 */

#include "subc.h"

int		yylex ();
int		yyerror (char* s);
void 	REDUCE(char* s);
void	raise(char* message);

#line 80 "subc.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "subc.tab.h".  */
#ifndef YY_YY_SUBC_TAB_H_INCLUDED
# define YY_YY_SUBC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ASSIGNOP = 258,
    LOGICAL_OR = 259,
    LOGICAL_AND = 260,
    EQUOP = 261,
    RELOP = 262,
    INCOP = 263,
    DECOP = 264,
    UNARY_OP = 265,
    STRUCTOP = 266,
    TYPE = 267,
    VOID = 268,
    NULL_TOKEN = 269,
    STRUCT = 270,
    RETURN = 271,
    IF = 272,
    ELSE = 273,
    WHILE = 274,
    FOR = 275,
    BREAK = 276,
    CONTINUE = 277,
    ID = 278,
    INTEGER_CONST = 279,
    CHAR_CONST = 280,
    STRING = 281
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "subc.y" /* yacc.c:355  */

	int		intVal;
	char	charVal;
	char	*stringVal;
	struct id *idptr;
	struct decl *declptr;
	struct ste *steptr;

#line 156 "subc.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SUBC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 173 "subc.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   216

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  156

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   281

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    16,     2,     2,     2,    15,     8,     2,
      23,    24,    13,    11,     3,    12,    25,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    41,
       2,     5,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    21,     2,    22,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     4,     6,
       7,     9,    10,    17,    18,    19,    20,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    66,    67,    71,    92,   119,   120,   121,
     124,   128,   132,   137,   137,   171,   189,   224,   259,   259,
     311,   314,   319,   320,   326,   348,   381,   382,   385,   407,
     435,   436,   439,   442,   445,   446,   449,   450,   450,   451,
     465,   481,   482,   483,   486,   487,   488,   489,   492,   493,
     496,   499,   522,   525,   528,   547,   550,   553,   572,   575,
     595,   613,   629,   645,   650,   653,   656,   659,   662,   666,
     670,   682,   696,   712,   730,   748,   766,   784,   798,   808,
     823,   840,   857,   876,   897,   904
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "','", "ASSIGNOP", "'='", "LOGICAL_OR",
  "LOGICAL_AND", "'&'", "EQUOP", "RELOP", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'!'", "INCOP", "DECOP", "UNARY_OP", "STRUCTOP", "'['", "']'",
  "'('", "')'", "'.'", "TYPE", "VOID", "NULL_TOKEN", "STRUCT", "RETURN",
  "IF", "ELSE", "WHILE", "FOR", "BREAK", "CONTINUE", "ID", "INTEGER_CONST",
  "CHAR_CONST", "STRING", "';'", "'{'", "'}'", "$accept", "program",
  "ext_def_list", "ext_def", "type_specifier", "struct_specifier", "$@1",
  "func_decl", "@2", "pointers", "param_list", "param_decl", "def_list",
  "def", "compound_stmt", "local_defs", "stmt_list", "stmt", "$@3",
  "expr_e", "const_expr", "expr", "or_expr", "or_list", "and_expr",
  "and_list", "binary", "unary", "args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    44,   258,    61,   259,   260,    38,   261,
     262,    43,    45,    42,    47,    37,    33,   263,   264,   265,
     266,    91,    93,    40,    41,    46,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,    59,   123,   125
};
# endif

#define YYPACT_NINF -126

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-126)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -126,    24,    33,  -126,  -126,  -126,    -7,  -126,   -10,  -126,
     -22,     8,  -126,  -126,    26,  -126,  -126,  -126,  -126,     6,
      33,  -126,  -126,   176,    46,  -126,    -9,    43,  -126,     5,
      45,   176,   176,   176,   176,   176,   176,   176,  -126,  -126,
    -126,  -126,  -126,    67,  -126,  -126,    86,  -126,    88,   186,
      73,  -126,    82,    33,  -126,    60,  -126,   129,    91,    93,
      98,    68,    83,  -126,  -126,  -126,   101,    99,  -126,   133,
     133,   133,   133,   133,   133,   120,    62,   107,   176,   176,
     176,   176,   176,   176,   176,  -126,  -126,   112,   176,   163,
     118,  -126,   151,     2,  -126,    28,  -126,   124,   176,   176,
     176,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,   133,
     186,    89,   127,  -126,  -126,  -126,  -126,   150,  -126,  -126,
      13,  -126,   136,    33,  -126,   176,  -126,  -126,   153,   154,
     141,  -126,  -126,   176,  -126,   162,  -126,   152,    95,    95,
     176,  -126,   176,   144,   158,  -126,   164,   184,  -126,    95,
     176,  -126,  -126,   183,    95,  -126
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    10,    11,     0,     3,    21,    12,
       0,    15,    20,     8,     0,     7,    27,     9,    13,     0,
      33,    35,    27,     0,    18,     5,    21,     0,    26,    37,
       0,     0,     0,     0,     0,     0,     0,     0,    69,    70,
      66,    67,    68,     0,    50,    52,    53,    55,    56,    58,
      63,    16,     0,     0,    30,     0,    31,     0,     0,     0,
       0,     0,     0,    41,    32,    34,     0,     0,    14,    77,
      71,    78,    72,    75,    76,     0,    63,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,     0,     0,     0,
       0,    17,    21,     0,    22,     0,    39,     0,     0,     0,
      49,    46,    47,    38,    36,    64,    65,     6,    54,    63,
      57,    60,    59,    61,    62,    51,    81,     0,    83,    84,
       0,    80,     0,     0,    19,     0,    28,    40,     0,     0,
       0,    48,    79,     0,    82,    24,    23,     0,    37,    37,
      49,    85,     0,     0,    42,    44,     0,     0,    29,    37,
      49,    25,    43,     0,    37,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,  -126,    -1,  -126,  -126,   206,  -126,   -24,
    -126,    87,   187,  -126,   145,  -126,  -126,   -34,  -126,  -125,
     -61,   -23,  -126,  -126,   134,  -126,    80,   -25,  -126
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,    26,     9,    22,    27,    53,    14,
      93,    94,    20,    28,    17,    21,    29,    65,    66,   130,
      43,    67,    45,    46,    47,    48,    49,    50,   120
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      44,     8,    55,    12,    12,   123,    69,    70,    71,    72,
      73,    74,    76,    31,    75,   146,   133,    32,    33,    15,
      16,    34,    35,    36,     3,   153,   124,    23,    37,    24,
      11,    13,    54,    38,    97,    57,    58,   134,    59,    60,
      61,    62,    39,    40,    41,    42,    63,    25,    64,   125,
      18,    24,    92,   109,   109,   109,   109,   109,   109,     4,
       5,   115,     6,    19,   137,   117,   119,    84,   122,   126,
      51,     4,     5,    52,     6,   128,   129,   131,    84,    85,
      86,   147,    87,    88,    56,    89,   106,    90,    68,    77,
      85,    86,    78,    87,    88,    79,    89,    95,    90,    81,
      82,    83,    44,    31,   144,   145,    91,    32,    33,   101,
     141,    34,    35,    36,    98,   152,    99,   131,    37,    44,
     155,   100,    92,    38,   102,    57,    58,   131,    59,    60,
      61,    62,    39,    40,    41,    42,    63,    31,    82,    83,
     104,    32,    33,    16,   105,    34,    35,    36,   107,   116,
      85,    86,    37,    87,    88,   121,    89,    38,    90,   110,
     111,   112,   113,   114,    12,   127,    39,    40,    41,    42,
      96,    31,   132,   135,   143,    32,    33,   138,   139,    34,
      35,    36,   140,   142,    31,   148,    37,   118,    32,    33,
     149,    38,    34,    35,    36,    80,    81,    82,    83,    37,
      39,    40,    41,    42,    38,   150,   151,   154,    10,    30,
     136,   103,   108,    39,    40,    41,    42
};

static const yytype_uint8 yycheck[] =
{
      23,     2,    26,    13,    13,     3,    31,    32,    33,    34,
      35,    36,    37,     8,    37,   140,     3,    12,    13,    41,
      42,    16,    17,    18,     0,   150,    24,    21,    23,    23,
      37,    41,    41,    28,    57,    30,    31,    24,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    41,    43,    21,
      42,    23,    53,    78,    79,    80,    81,    82,    83,    26,
      27,    84,    29,    37,   125,    88,    89,     5,    92,    41,
      24,    26,    27,    27,    29,    98,    99,   100,     5,    17,
      18,   142,    20,    21,    41,    23,    24,    25,    43,    22,
      17,    18,     6,    20,    21,     7,    23,    37,    25,    10,
      11,    12,   125,     8,   138,   139,    24,    12,    13,    41,
     133,    16,    17,    18,    23,   149,    23,   140,    23,   142,
     154,    23,   123,    28,    41,    30,    31,   150,    33,    34,
      35,    36,    37,    38,    39,    40,    41,     8,    11,    12,
      41,    12,    13,    42,    24,    16,    17,    18,    41,    37,
      17,    18,    23,    20,    21,    37,    23,    28,    25,    79,
      80,    81,    82,    83,    13,    41,    37,    38,    39,    40,
      41,     8,    22,    37,    22,    12,    13,    24,    24,    16,
      17,    18,    41,    21,     8,    41,    23,    24,    12,    13,
      32,    28,    16,    17,    18,     9,    10,    11,    12,    23,
      37,    38,    39,    40,    28,    41,    22,    24,     2,    22,
     123,    66,    78,    37,    38,    39,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,    46,     0,    26,    27,    29,    47,    48,    49,
      51,    37,    13,    41,    53,    41,    42,    58,    42,    37,
      56,    59,    50,    21,    23,    41,    48,    51,    57,    60,
      56,     8,    12,    13,    16,    17,    18,    23,    28,    37,
      38,    39,    40,    64,    65,    66,    67,    68,    69,    70,
      71,    24,    27,    52,    41,    53,    41,    30,    31,    33,
      34,    35,    36,    41,    43,    61,    62,    65,    43,    71,
      71,    71,    71,    71,    71,    65,    71,    22,     6,     7,
       9,    10,    11,    12,     5,    17,    18,    20,    21,    23,
      25,    24,    48,    54,    55,    37,    41,    65,    23,    23,
      23,    41,    41,    58,    41,    24,    24,    41,    68,    71,
      70,    70,    70,    70,    70,    65,    37,    65,    24,    65,
      72,    37,    53,     3,    24,    21,    41,    41,    65,    65,
      63,    65,    22,     3,    24,    37,    55,    64,    24,    24,
      41,    65,    21,    22,    61,    61,    63,    64,    41,    32,
      41,    22,    61,    63,    24,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    47,    47,    47,
      48,    48,    48,    50,    49,    49,    51,    51,    52,    51,
      53,    53,    54,    54,    55,    55,    56,    56,    57,    57,
      57,    57,    58,    59,    60,    60,    61,    62,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    63,    63,
      64,    65,    65,    66,    67,    67,    68,    69,    69,    70,
      70,    70,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     4,     7,     2,     2,     2,
       1,     1,     1,     0,     6,     2,     5,     6,     0,     7,
       1,     0,     1,     3,     3,     6,     2,     0,     4,     7,
       2,     2,     4,     1,     2,     0,     2,     0,     2,     2,
       3,     1,     5,     7,     5,     9,     2,     2,     1,     0,
       1,     3,     1,     1,     3,     1,     1,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     4,
       3,     3,     4,     3,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 62 "subc.y" /* yacc.c:1646  */
    {}
#line 1369 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 66 "subc.y" /* yacc.c:1646  */
    {}
#line 1375 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 67 "subc.y" /* yacc.c:1646  */
    {}
#line 1381 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 71 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-3].declptr) || !(yyvsp[-1].idptr)) { (yyval.declptr) = NULL; }
			else if((yyvsp[-2].intVal)) {
				decl *temp = findcurrentdecl((yyvsp[-1].idptr));
				if(temp && temp->scope == scopestack){
					raise("redeclaration");
				}
				else{
					declare((yyvsp[-1].idptr), makevardecl(makeptrdecl((yyvsp[-3].declptr))));
				}
			}
			else {
				decl *temp = findcurrentdecl((yyvsp[-1].idptr));
				if(temp && temp->scope == scopestack){
					raise("redeclaration");
				}
				else{
					declare((yyvsp[-1].idptr), makevardecl((yyvsp[-3].declptr)));
				}
			}
		}
#line 1407 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 92 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-6].declptr) || !(yyvsp[-4].idptr) || !(yyvsp[-2].declptr)) { (yyval.declptr) = NULL; }
			else if((yyvsp[-5].intVal)) {
				decl *temp = findcurrentdecl((yyvsp[-4].idptr));
				if(temp && temp->scope == scopestack){
					raise("redeclaration");
				}
				else if(!check_is_const((yyvsp[-2].declptr)) || !check_is_int_type((yyvsp[-2].declptr)->type)){
					raise("none integer constant index in array");
				}
				else{
					declare((yyvsp[-4].idptr),makeconstdecl(makearraydecl((yyvsp[-2].declptr)->int_value,makevardecl(makeptrdecl((yyvsp[-6].declptr))))));
				}
			}
			else {
				decl *temp = findcurrentdecl((yyvsp[-4].idptr));
				if(temp && temp->scope == scopestack){
					raise("redeclaration");
				}
				else if(!check_is_const((yyvsp[-2].declptr)) || !check_is_int_type((yyvsp[-2].declptr)->type)){
					raise("none integer constant index in array");
				}
				else{
					declare((yyvsp[-4].idptr), makeconstdecl(makearraydecl((yyvsp[-2].declptr)->int_value, makevardecl((yyvsp[-6].declptr)))));
				}
			}
		}
#line 1439 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 119 "subc.y" /* yacc.c:1646  */
    {}
#line 1445 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 120 "subc.y" /* yacc.c:1646  */
    {}
#line 1451 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 121 "subc.y" /* yacc.c:1646  */
    { pop_scope(); }
#line 1457 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 124 "subc.y" /* yacc.c:1646  */
    {
			decl *typedecl = findcurrentdecl((yyvsp[0].idptr));
			(yyval.declptr) = typedecl;
		}
#line 1466 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 128 "subc.y" /* yacc.c:1646  */
    {
			decl *voiddecl = findcurrentdecl((yyvsp[0].idptr));
			(yyval.declptr) = voiddecl;
		}
#line 1475 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 132 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1483 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 137 "subc.y" /* yacc.c:1646  */
    {
			decl *structdecl = findcurrentdecl((yyvsp[-1].idptr));
			if(structdecl){
				raise("redeclaration");
			}
			push_scope();
		}
#line 1495 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 144 "subc.y" /* yacc.c:1646  */
    {
			ste *fields = pop_scope();
			decl *structdecl = findcurrentdecl((yyvsp[-4].idptr));
			if(!structdecl){
				structdecl = makestructdecl(fields);
				declare((yyvsp[-4].idptr), structdecl);
				if(scopestack != globalscope){
					ste *struct_ste = symboltable;
					ste *temp = symboltable;
					while(temp && temp->prev!=globalscope->topste){
						temp = temp->prev;
					}
					if(!temp){
						// debug("abnormal accident happened while defining struct"); // not the case
					}
					else{
						symboltable = struct_ste->prev;
						temp->prev = struct_ste;
						struct_ste -> prev = globalscope->topste;
						globalscope->topste = struct_ste;
						structdecl->scope = globalscope;
						scopestack->topste = symboltable;
					}
				}
			}
			(yyval.declptr) = structdecl;
		}
#line 1527 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 171 "subc.y" /* yacc.c:1646  */
    {
			decl *structdecl = findcurrentdecl((yyvsp[0].idptr));
			if(!structdecl){
				raise("incomplete type");
				(yyval.declptr) = NULL;
			}
			else{
				if(!check_is_struct_type(structdecl)){
					raise("incomplete type"); // not the case here
					(yyval.declptr) = NULL;
				}
				else{
					(yyval.declptr) = structdecl;
				}
			}
		}
#line 1548 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 189 "subc.y" /* yacc.c:1646  */
    {
			decl *funcdecl = finddecl_in_current_scope((yyvsp[-2].idptr));
			if(funcdecl) { 
				raise("redeclaration");
				(yyval.declptr) = NULL; 
				push_scope();
				if(!(yyvsp[-3].intVal)){
					declare(returnid, (yyvsp[-4].declptr));
				}
				else{
					declare(returnid, makeptrdecl((yyvsp[-4].declptr)));
				}
				ste *formals = pop_scope();
				push_scope();
				pushstelist(formals);
			}
			else{
				funcdecl = makefuncdecl();
				declare((yyvsp[-2].idptr), funcdecl);
				push_scope();
				if(!(yyvsp[-3].intVal)){
					declare(returnid, (yyvsp[-4].declptr));
				}
				else{
					declare(returnid, makeptrdecl((yyvsp[-4].declptr)));
				}
				ste *formals = pop_scope();
				funcdecl->returntype = formals->decl;
				returntype = formals->decl;
				funcdecl->formals = NULL;
				(yyval.declptr) = funcdecl;
				push_scope();
				pushstelist(formals);
			}
		}
#line 1588 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 224 "subc.y" /* yacc.c:1646  */
    {
			decl *funcdecl = finddecl_in_current_scope((yyvsp[-3].idptr));
			if(funcdecl){
				raise("redeclaration");
				push_scope();
				if(!(yyvsp[-4].intVal)){
					declare(returnid, (yyvsp[-5].declptr));
				}
				else{
					declare(returnid, makeptrdecl((yyvsp[-5].declptr)));
				}
				ste *formals = pop_scope();
				push_scope();
				pushstelist(formals);
				(yyval.declptr) = NULL;
			}
			else{
				funcdecl = makefuncdecl();
				declare((yyvsp[-3].idptr), funcdecl);
				push_scope();
				if(!(yyvsp[-4].intVal)){
					declare(returnid, (yyvsp[-5].declptr));
				}
				else{
					declare(returnid, makeptrdecl((yyvsp[-5].declptr)));
				}
				ste *formals = pop_scope();
				funcdecl->returntype = formals->decl;
				returntype = formals->decl;
				funcdecl->formals = NULL;
				(yyval.declptr) = funcdecl;
				push_scope();
				pushstelist(formals);
			}
		}
#line 1628 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 259 "subc.y" /* yacc.c:1646  */
    {
			decl *funcdecl = finddecl_in_current_scope((yyvsp[-1].idptr));
			if(funcdecl){
				push_scope();
				if(!(yyvsp[-2].intVal)){
					declare(returnid, (yyvsp[-3].declptr));
				}
				else{
					declare(returnid, makeptrdecl((yyvsp[-3].declptr)));
				}
				(yyval.declptr) = NULL;
			}
			else{
				decl *funcdecl = makefuncdecl();
				declare((yyvsp[-1].idptr), funcdecl);
				push_scope();
				if(!(yyvsp[-2].intVal)){
					declare(returnid, (yyvsp[-3].declptr));
				}
				else{
					declare(returnid, makeptrdecl((yyvsp[-3].declptr)));
				}
				(yyval.declptr) = funcdecl;
			}
		}
#line 1658 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 284 "subc.y" /* yacc.c:1646  */
    {
			decl *funcdecl = (yyvsp[-2].declptr);
			if((yyvsp[-1].declptr) && funcdecl){
				ste *formals = pop_scope();
				funcdecl->returntype = formals->decl;
				returntype = formals->decl;
				funcdecl->formals = copy_ste(formals->prev);
				push_scope();
				pushstelist(formals);
				(yyval.declptr) = funcdecl;
			}
			else if((yyvsp[-1].declptr)){
				raise("redeclaration");
				ste *formals = pop_scope();
				push_scope();
				pushstelist(formals);
				(yyval.declptr) = NULL;
			}
			else{
				ste *formals = pop_scope();
				push_scope();
				pushstelist(formals);
				(yyval.declptr) = NULL;
			}
		}
#line 1688 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 311 "subc.y" /* yacc.c:1646  */
    {
			(yyval.intVal) = 1;  // 1 if pointer
		}
#line 1696 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 314 "subc.y" /* yacc.c:1646  */
    {
			(yyval.intVal) = 0;  // 0 if not
		}
#line 1704 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 319 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = (yyvsp[0].declptr); }
#line 1710 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 320 "subc.y" /* yacc.c:1646  */
    { 
			if((yyvsp[-2].declptr)&&(yyvsp[0].declptr)) { (yyval.declptr) = (yyvsp[-2].declptr); }
			else { (yyval.declptr)=NULL; } 
		}
#line 1719 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 326 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-2].declptr) || !(yyvsp[0].idptr)) { (yyval.declptr) = NULL; }
			else if((yyvsp[-1].intVal)) { 
				decl *paramdecl = finddecl_in_current_scope((yyvsp[0].idptr));
				if(paramdecl){
					raise("redeclaration");
					(yyval.declptr) = NULL;
				}
				else{
					decl *vardecl = makevardecl(makeptrdecl((yyvsp[-2].declptr)));
					declare((yyvsp[0].idptr), vardecl);
				}
			}
			else {
				decl *paramdecl = finddecl_in_current_scope((yyvsp[0].idptr));
				if(paramdecl){
					raise("redeclaration");
					(yyval.declptr) = NULL;
				}
				else { declare((yyvsp[0].idptr), makevardecl((yyvsp[-2].declptr))); }
			}
		}
#line 1746 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 348 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-5].declptr) || !(yyvsp[-3].idptr) || !(yyvsp[-1].declptr)) { (yyval.declptr) = NULL; }
			else if((yyvsp[-4].intVal)) {
				decl *paramdecl = finddecl_in_current_scope((yyvsp[-3].idptr));
				if(paramdecl){
					raise("redeclaration");
					(yyval.declptr) = NULL;
				}
				else if(!check_is_const((yyvsp[-1].declptr)) || !check_is_int_type((yyvsp[-1].declptr)->type)){
					raise("none integer constant index in array");
					(yyval.declptr) = NULL;
				}
				else{
					declare((yyvsp[-3].idptr),makeconstdecl(makearraydecl((yyvsp[-1].declptr)->int_value,makevardecl(makeptrdecl((yyvsp[-5].declptr))))));
				}
			}
			else {
				decl *paramdecl = finddecl_in_current_scope((yyvsp[-3].idptr));
				if(paramdecl){
					raise("redeclaration");
					(yyval.declptr) = NULL;
				}
				else if(!check_is_const((yyvsp[-1].declptr)) || !check_is_int_type((yyvsp[-1].declptr)->type)){
					raise("none integer constant index in array");
					(yyval.declptr) = NULL;
				}
				else{
					declare((yyvsp[-3].idptr), makeconstdecl(makearraydecl((yyvsp[-1].declptr)->int_value, makevardecl((yyvsp[-5].declptr)))));
				}
			}
		}
#line 1782 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 381 "subc.y" /* yacc.c:1646  */
    {}
#line 1788 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 382 "subc.y" /* yacc.c:1646  */
    {}
#line 1794 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 385 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-3].declptr) || !(yyvsp[-1].idptr)){
				(yyval.declptr) = NULL;
			}
			else if(!check_is_type((yyvsp[-3].declptr))){
				// debug("not type"); // not the case here
				(yyval.declptr) = NULL;
			}
			else{
				decl *paramdecl = finddecl_in_current_scope((yyvsp[-1].idptr));
				if(paramdecl){
					raise("redeclaration");
					(yyval.declptr) = NULL;
				}
				else if((yyvsp[-2].intVal)) {
					declare((yyvsp[-1].idptr), makevardecl(makeptrdecl((yyvsp[-3].declptr))));
				}
				else {
					declare((yyvsp[-1].idptr), makevardecl((yyvsp[-3].declptr)));
				}
			}
		}
#line 1821 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 407 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-6].declptr) || !(yyvsp[-4].idptr)){
				(yyval.declptr) = NULL;
			}
			decl *paramdecl = finddecl_in_current_scope((yyvsp[-4].idptr));
			if(paramdecl){
				raise("redeclaration");
				(yyval.declptr) = NULL;
			}
			else if((yyvsp[-5].intVal)) {
				if(!check_is_const((yyvsp[-2].declptr)) || !check_is_int_type((yyvsp[-2].declptr)->type)){
					raise("none integer constant index in array");
					(yyval.declptr) = NULL;
				}
				else{
					declare((yyvsp[-4].idptr),makeconstdecl(makearraydecl((yyvsp[-2].declptr)->int_value,makevardecl(makeptrdecl((yyvsp[-6].declptr))))));
				}
			}
			else {
				if(!check_is_const((yyvsp[-2].declptr)) || !check_is_int_type((yyvsp[-2].declptr)->type)){
					raise("none integer constant index in array");
					(yyval.declptr) = NULL;
				}
				else{
					declare((yyvsp[-4].idptr), makeconstdecl(makearraydecl((yyvsp[-2].declptr)->int_value, makevardecl((yyvsp[-6].declptr)))));
				}
			}
		}
#line 1854 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 435 "subc.y" /* yacc.c:1646  */
    {}
#line 1860 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 436 "subc.y" /* yacc.c:1646  */
    {}
#line 1866 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 450 "subc.y" /* yacc.c:1646  */
    { push_scope(); }
#line 1872 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 450 "subc.y" /* yacc.c:1646  */
    { pop_scope(); }
#line 1878 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 451 "subc.y" /* yacc.c:1646  */
    {
		// Return type compatibility check
			ste *formals = pop_scope(); // get return type
			// if(formals->decl==voidtype){
			if(returntype==voidtype){
				(yyval.declptr) = formals;
			}
			else{
				raise("incompatible return types");
				(yyval.declptr) = NULL;
			}
			push_scope();
			pushstelist(formals);
		}
#line 1897 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 465 "subc.y" /* yacc.c:1646  */
    {
			// Return type compatibility check
			if(!(yyvsp[-1].declptr)) { (yyval.declptr) = NULL; }
			else{
				ste *formals = pop_scope();
				if(check_sametype(returntype, (yyvsp[-1].declptr)->type)){
					(yyval.declptr) = formals;
				}
				else{
					raise("incompatible return types");
					(yyval.declptr) = NULL;
				}
				push_scope();
				pushstelist(formals);
			}
		}
#line 1918 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 492 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = (yyvsp[0].declptr); }
#line 1924 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 496 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = (yyvsp[0].declptr); }
#line 1930 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 499 "subc.y" /* yacc.c:1646  */
    {
			// check if unary is declared (if not, not declared error) :done in  unary : ID
			// check if unary is variable
			// check if type of unary and expr are the same
			if(!(yyvsp[-2].declptr) || !(yyvsp[0].declptr)) { (yyval.declptr) = NULL; }
			else if(check_is_var((yyvsp[-2].declptr))){
				if(check_sametype((yyvsp[-2].declptr)->type, (yyvsp[0].declptr)->type)){
					if(check_is_pointer_type((yyvsp[-2].declptr)->type)==0 && check_is_null_type((yyvsp[0].declptr)->type)){
						raise("RHS is not a const or variable");
					}
					else{
						(yyval.declptr) = (yyvsp[-2].declptr);
					}
				}
				else{
					raise("LHS and RHS are not same type");
				}
			}
			else{
				raise("LHS is not a variable");
				(yyval.declptr) = NULL;
			}
		}
#line 1958 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 522 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = (yyvsp[0].declptr); }
#line 1964 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 525 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = (yyvsp[0].declptr); }
#line 1970 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 528 "subc.y" /* yacc.c:1646  */
    {
			// check if both or_list and and_expr have inttype
			if(!(yyvsp[-2].declptr) || !(yyvsp[0].declptr)){ (yyval.declptr) = NULL; }
			else{
				if(check_is_int_type((yyvsp[-2].declptr)->type) && check_is_int_type((yyvsp[0].declptr)->type)){
					(yyval.declptr) = makeconstdecl(inttype);
					if(check_is_const((yyvsp[-2].declptr)) && check_is_const((yyvsp[0].declptr))){
						(yyval.declptr)->int_value = ((yyvsp[-2].declptr)->int_value || (yyvsp[0].declptr)->int_value);
					}
					else{
						(yyval.declptr)->declclass = _EXPR;
					}
				}
				else{
					raise("not computable");
					(yyval.declptr) = NULL;
				}
			}
		}
#line 1994 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 547 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = (yyvsp[0].declptr); }
#line 2000 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 550 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = (yyvsp[0].declptr); }
#line 2006 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 553 "subc.y" /* yacc.c:1646  */
    {
			// check if both and_list and binary have inttype
			if(!(yyvsp[-2].declptr) || !(yyvsp[0].declptr)){ (yyval.declptr) = NULL; }
			else{
				if(check_is_int_type((yyvsp[-2].declptr)->type) && check_is_int_type((yyvsp[0].declptr)->type)){
					(yyval.declptr) = makeconstdecl(inttype);
					if(check_is_const((yyvsp[-2].declptr)) && check_is_const((yyvsp[0].declptr))){
						(yyval.declptr)->int_value = ((yyvsp[-2].declptr)->int_value && (yyvsp[0].declptr)->int_value);
					}
					else{
						(yyval.declptr)->declclass = _EXPR;
					}
				}
				else{
					raise("not computable");
					(yyval.declptr) = NULL;
				}
			}
		}
#line 2030 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 572 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = (yyvsp[0].declptr); }
#line 2036 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 575 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-2].declptr) || !(yyvsp[0].declptr)){ (yyval.declptr) = NULL; }
			else if(check_relop_compatible((yyvsp[-2].declptr), (yyvsp[0].declptr))){
				(yyval.declptr) = makevardecl(inttype);
				if(check_is_const((yyvsp[-2].declptr)) && check_is_const((yyvsp[0].declptr))){
					if((yyvsp[-1].intVal)==_LT){ (yyval.declptr)->int_value = ((yyvsp[-2].declptr)->int_value < (yyvsp[0].declptr)->int_value); }
					else if((yyvsp[-1].intVal)==_LTE){ (yyval.declptr)->int_value = ((yyvsp[-2].declptr)->int_value <= (yyvsp[0].declptr)->int_value); }
					else if((yyvsp[-1].intVal)==_GT){ (yyval.declptr)->int_value = ((yyvsp[-2].declptr)->int_value > (yyvsp[0].declptr)->int_value); }
					else if((yyvsp[-1].intVal)==_GTE){ (yyval.declptr)->int_value = ((yyvsp[-2].declptr)->int_value >= (yyvsp[0].declptr)->int_value); }
					(yyval.declptr)->declclass = _CONST;
				}
				else{
					(yyval.declptr)->declclass = _EXPR;
				}
			}
			else{
				raise("not comparable");
				(yyval.declptr) = NULL;
			}
		}
#line 2061 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 595 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-2].declptr) || !(yyvsp[0].declptr)){ (yyval.declptr) = NULL; }
			else if(check_equop_compatible((yyvsp[-2].declptr), (yyvsp[0].declptr))){
				(yyval.declptr) = makevardecl(inttype);
				if(check_is_const((yyvsp[-2].declptr)) && check_is_const((yyvsp[0].declptr))){
					if((yyvsp[-1].intVal)==_EQ){ (yyval.declptr)->int_value = ((yyvsp[-2].declptr)->int_value == (yyvsp[0].declptr)->int_value); }
					else if((yyvsp[-1].intVal)==_NEQ){ (yyval.declptr)->int_value = ((yyvsp[-2].declptr)->int_value != (yyvsp[0].declptr)->int_value); }
					(yyval.declptr)->declclass = _CONST;
				}
				else{
					(yyval.declptr)->declclass = _EXPR;
				}
			}
			else{
				raise("not comparable");
				(yyval.declptr) = NULL;
			}
		}
#line 2084 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 613 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-2].declptr) || !(yyvsp[0].declptr)) { (yyval.declptr) = NULL; }
			else if(check_plus_minus_compatible((yyvsp[-2].declptr), (yyvsp[0].declptr))){
				(yyval.declptr) = makevardecl(inttype);
				if(check_is_const((yyvsp[-2].declptr)) && check_is_const((yyvsp[0].declptr))){
					(yyval.declptr)->int_value = (yyvsp[-2].declptr)->int_value + (yyvsp[0].declptr)->int_value;
				}
				else{
					(yyval.declptr)->declclass = _EXPR;
				}
			}
			else{
				raise("not computable");
				(yyval.declptr) = NULL;
			}
		}
#line 2105 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 629 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-2].declptr) || !(yyvsp[0].declptr)){ (yyval.declptr) = NULL; }
			else if(check_plus_minus_compatible((yyvsp[-2].declptr), (yyvsp[0].declptr))){
				(yyval.declptr) = makevardecl(inttype);
				if(check_is_const((yyvsp[-2].declptr)) && check_is_const((yyvsp[0].declptr))){
					(yyval.declptr)->int_value = (yyvsp[-2].declptr)->int_value - (yyvsp[0].declptr)->int_value;
				}
				else{
					(yyval.declptr)->declclass = _EXPR;
				}
			}
			else{
				raise("not computable");
				(yyval.declptr) = NULL;
			}
		}
#line 2126 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 645 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 2134 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 650 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[-1].declptr);
		}
#line 2142 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 653 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[-1].declptr);
		}
#line 2150 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 656 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = makenumconstdecl(inttype, (yyvsp[0].intVal));
		}
#line 2158 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 659 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = makecharconstdecl(chartype, (yyvsp[0].charVal));
		}
#line 2166 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 662 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = makevardecl(makeptrdecl(chartype));
			(yyval.declptr)->declclass = _EXPR;
		}
#line 2175 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 666 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = makevardecl(makeptrdecl(nulltype));
			(yyval.declptr)->declclass = _EXPR;
		}
#line 2184 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 670 "subc.y" /* yacc.c:1646  */
    {
			// $1 is idptr
			decl *iddecl = findcurrentdecl((yyvsp[0].idptr));
			if(iddecl){
				(yyval.declptr) = iddecl;
				char *s = (yyvsp[0].idptr)->name;
			}
			else{
				raise("not declared");
				(yyval.declptr) = NULL;
			}
		}
#line 2201 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 682 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[0].declptr)) { (yyval.declptr) = NULL; }
			else if(check_is_int_type((yyvsp[0].declptr)->type)){
				(yyval.declptr) = makeconstdecl(inttype);
				if(check_is_const((yyvsp[0].declptr))){
					(yyval.declptr)->int_value = -((yyvsp[0].declptr)->int_value);
				}
				else{ (yyval.declptr)->declclass = _EXPR; }
			}
			else{
				raise("not computable");
				(yyval.declptr) = NULL;
			}
		}
#line 2220 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 696 "subc.y" /* yacc.c:1646  */
    {
			if((yyvsp[0].declptr)==NULL){ (yyval.declptr)=NULL; }
			else if(check_is_int_type((yyvsp[0].declptr)->type)){
				(yyval.declptr) = makeconstdecl(inttype);
				if(check_is_const((yyvsp[0].declptr))){
					(yyval.declptr)->int_value = !((yyvsp[0].declptr)->int_value);
				}
				else{
					(yyval.declptr)->declclass=_EXPR;
				}
			}
			else{
				raise("not computable");
				(yyval.declptr) = NULL;
			}
		}
#line 2241 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 712 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-1].declptr)){ (yyval.declptr)=NULL; }
			else if(check_is_int_type((yyvsp[-1].declptr)->type) || check_is_char_type((yyvsp[-1].declptr)->type)){
				if(check_is_const((yyvsp[-1].declptr))){ raise("not computable"); (yyval.declptr)=NULL; }
				else if(check_is_int_type((yyvsp[-1].declptr)->type)){
					(yyval.declptr) = (yyvsp[-1].declptr);
					(yyval.declptr)->int_value = (yyval.declptr)->int_value + 1;
				}
				else if(check_is_char_type((yyvsp[-1].declptr)->type)){
					(yyval.declptr) = (yyvsp[-1].declptr);
					(yyval.declptr)->char_value = (yyval.declptr)->char_value + 1;
				}
			}
			else{
				raise("not computable");
				(yyval.declptr) = NULL;
			}
		}
#line 2264 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 730 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-1].declptr)){ (yyval.declptr)=NULL; }
			else if(check_is_int_type((yyvsp[-1].declptr)->type) || check_is_char_type((yyvsp[-1].declptr)->type)){
				if(check_is_const((yyvsp[-1].declptr))){ raise("not computable"); (yyval.declptr)=NULL; }
				else if(check_is_int_type((yyvsp[-1].declptr)->type)){
					(yyval.declptr) = (yyvsp[-1].declptr);
					(yyval.declptr)->int_value = (yyval.declptr)->int_value - 1;
				}
				else if(check_is_char_type((yyvsp[-1].declptr)->type)){
					(yyval.declptr) = (yyvsp[-1].declptr);
					(yyval.declptr)->char_value = (yyval.declptr)->char_value - 1;
				}
			}
			else{
				raise("not computable");
				(yyval.declptr) = NULL;
			}
		}
#line 2287 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 748 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[0].declptr)){ (yyval.declptr)=NULL; }
			else if(check_is_int_type((yyvsp[0].declptr)->type) || check_is_char_type((yyvsp[0].declptr)->type)){
				if(check_is_const((yyvsp[0].declptr))){ raise("not computable"); (yyval.declptr)=NULL; }
				else if(check_is_int_type((yyvsp[0].declptr)->type)){
					(yyval.declptr) = (yyvsp[0].declptr);
					(yyval.declptr)->int_value = (yyval.declptr)->int_value + 1;
				}
				else if(check_is_char_type((yyvsp[0].declptr)->type)){
					(yyval.declptr) = (yyvsp[0].declptr);
					(yyval.declptr)->char_value = (yyval.declptr)->char_value + 1;
				}
			}
			else{
				raise("not computable");
				(yyval.declptr) = NULL;
			}
		}
#line 2310 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 766 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[0].declptr)){ (yyval.declptr)=NULL; }
			else if(check_is_int_type((yyvsp[0].declptr)->type) || check_is_char_type((yyvsp[0].declptr)->type)){
				if(check_is_const((yyvsp[0].declptr))){ raise("not computable"); (yyval.declptr)=NULL; }
				else if(check_is_int_type((yyvsp[0].declptr)->type)){
					(yyval.declptr) = (yyvsp[0].declptr);
					(yyval.declptr)->int_value = (yyval.declptr)->int_value - 1;
				}
				else if(check_is_char_type((yyvsp[0].declptr)->type)){
					(yyval.declptr) = (yyvsp[0].declptr);
					(yyval.declptr)->char_value = (yyval.declptr)->char_value - 1;
				}
			}
			else{
				raise("not computable");
				(yyval.declptr) = NULL;
			}
		}
#line 2333 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 784 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[0].declptr)){ (yyval.declptr) = NULL; }
			else if(check_is_var((yyvsp[0].declptr))){
				// make pointer declaration with the given type
				// return type to _EXPR
				(yyval.declptr) = makevardecl(makeptrdecl((yyvsp[0].declptr)->type));
				(yyval.declptr)->declclass = _EXPR;
			}
			else{
				// error case
				raise("not a variable");
				(yyval.declptr) = NULL;
			}
		}
#line 2352 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 798 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[0].declptr)){ (yyval.declptr) = NULL; }
			else if(check_is_pointer_type((yyvsp[0].declptr)->type)){
				(yyval.declptr) = makevardecl((yyvsp[0].declptr)->type->ptrto);
			}
			else{
				raise("not a pointer");
				(yyval.declptr) = NULL;
			}
		}
#line 2367 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 808 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-3].declptr) || !(yyvsp[-1].declptr)){ (yyval.declptr) = NULL; }
			else if(check_is_array_type((yyvsp[-3].declptr)->type)){
				if(check_is_const((yyvsp[-1].declptr)) && check_is_int_type((yyvsp[-1].declptr)->type)){
					(yyval.declptr) = makevardecl((yyvsp[-3].declptr)->type->elementvar->type);
				}
				else{
					(yyval.declptr) = NULL;
				}
			}
			else{
				raise("not an array type");
				(yyval.declptr) = NULL;
			}
		}
#line 2387 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 823 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-2].declptr)){ (yyval.declptr) = NULL; }
			else if(check_is_struct_type((yyvsp[-2].declptr)->type)){
				decl* temp = finddecl((yyvsp[0].idptr), (yyvsp[-2].declptr)->type->fieldlist);
				if(!temp){
					raise("struct not have same name field");
					(yyval.declptr) = NULL;
				}
				else{
					(yyval.declptr) = makevardecl(temp->type);
				}
			}
			else{
				raise("not a struct");
				(yyval.declptr) = NULL;
			}
		}
#line 2409 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 840 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-2].declptr)){ (yyval.declptr) = NULL; }
			else if(check_is_pointer_type((yyvsp[-2].declptr)->type) && check_is_struct_type((yyvsp[-2].declptr)->type->ptrto)){
				decl* temp = finddecl((yyvsp[0].idptr), (yyvsp[-2].declptr)->type->ptrto->fieldlist);
				if(!temp){
					raise("struct not have same name field");
					(yyval.declptr) = NULL;
				}
				else{
					(yyval.declptr) = makevardecl(temp->type);
				}
			}
			else{
				raise("not a struct pointer");
				(yyval.declptr) = NULL;
			}
		}
#line 2431 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 857 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-3].declptr) || !(yyvsp[-1].declptr)){ (yyval.declptr) = NULL; }
			else if(check_is_func_type((yyvsp[-3].declptr))){
				decl *temp = check_function_call((yyvsp[-3].declptr), (yyvsp[-1].declptr));
				if(temp){
					temp = makevardecl(temp);
					temp->declclass = _EXPR;
					(yyval.declptr) = temp;
				}
				else{
					raise("actual args are not equal to formal args");
					(yyval.declptr) = NULL;
				}
			}
			else{
				raise("not a function");
				(yyval.declptr) = NULL;
			}
		}
#line 2455 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 876 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-2].declptr)){ (yyval.declptr) = NULL; }
			else if(check_is_func_type((yyvsp[-2].declptr))){
				decl *temp = check_function_call((yyvsp[-2].declptr), NULL);
				if(temp){
					temp = makevardecl(temp);
					(yyval.declptr) = temp;
					(yyval.declptr)->declclass = _EXPR;
				}
				else{
					raise("actual args are not equal to formal args");
					(yyval.declptr) = NULL;
				}
			}
			else{
				raise("not a function");
				(yyval.declptr) = NULL;
			}
		}
#line 2479 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 897 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[0].declptr)) { (yyval.declptr) = NULL; }
			else{
				(yyval.declptr) = (yyvsp[0].declptr);
				(yyval.declptr)->next = NULL;
			}
		}
#line 2491 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 904 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-2].declptr) || !(yyvsp[0].declptr)) { (yyval.declptr) = NULL; }
			else{
				(yyvsp[0].declptr)->next = (yyvsp[-2].declptr);
				(yyval.declptr) = (yyvsp[0].declptr);
			}
		}
#line 2503 "subc.tab.c" /* yacc.c:1646  */
    break;


#line 2507 "subc.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 913 "subc.y" /* yacc.c:1906  */


/*  Additional C Codes  */

int    yyerror (char* s)
{
	fprintf (stderr, "%s\n", s);
}

void 	REDUCE( char* s)
{
	printf("%s\n",s);
}

void raise(char *message){
	int lineno = read_line();
	if(error_msg){
		printf("%s:%d: error:%s\n",filename, lineno, message);
		error_msg = 0;
	}
}

void debug(char *message){
	int lineno = read_line();
	printf("line %d, %s\n",lineno, message);
}
