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



#line 82 "subc.tab.c" /* yacc.c:339  */

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
    STRUCTOP = 265,
    TYPE = 266,
    VOID = 267,
    NULL_TOKEN = 268,
    WRITE_INT = 269,
    WRITE_CHAR = 270,
    WRITE_STRING = 271,
    STRUCT = 272,
    RETURN = 273,
    WHILE = 274,
    FOR = 275,
    BREAK = 276,
    CONTINUE = 277,
    IF = 278,
    ELSE = 279,
    ID = 280,
    INTEGER_CONST = 281,
    CHAR_CONST = 282,
    STRING = 283
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "subc.y" /* yacc.c:355  */

	int		intVal;
	char	charVal;
	char	*stringVal;
	struct id *idptr;
	struct decl *declptr;
	struct ste *steptr;

#line 160 "subc.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SUBC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 177 "subc.tab.c" /* yacc.c:358  */

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
#define YYLAST   248

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

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
      22,    23,    13,    11,     3,    12,    24,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
       2,     5,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
       7,     9,    10,    17,    18,    19,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    68,    68,    72,    73,    77,    98,   125,   126,   127,
     139,   143,   147,   152,   152,   193,   211,   211,   253,   253,
     295,   295,   351,   354,   359,   360,   366,   370,   375,   404,
     443,   444,   447,   469,   498,   499,   502,   502,   511,   514,
     517,   518,   521,   537,   537,   538,   553,   553,   604,   605,
     609,   609,   621,   623,   630,   621,   640,   649,   651,   655,
     640,   662,   665,   668,   671,   674,   679,   685,   693,   694,
     700,   705,   705,   773,   776,   779,   799,   802,   805,   825,
     828,   860,   884,   901,   918,   924,   927,   930,   934,   938,
     945,   949,   970,   988,  1006,  1027,  1048,  1069,  1090,  1106,
    1118,  1138,  1159,  1179,  1217,  1247,  1260,  1267
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "','", "ASSIGNOP", "'='", "LOGICAL_OR",
  "LOGICAL_AND", "'&'", "EQUOP", "RELOP", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'!'", "INCOP", "DECOP", "STRUCTOP", "'['", "']'", "'('", "')'",
  "'.'", "TYPE", "VOID", "NULL_TOKEN", "WRITE_INT", "WRITE_CHAR",
  "WRITE_STRING", "STRUCT", "RETURN", "WHILE", "FOR", "BREAK", "CONTINUE",
  "IF", "ELSE", "ID", "INTEGER_CONST", "CHAR_CONST", "STRING", "';'",
  "'{'", "'}'", "$accept", "program", "ext_def_list", "ext_def",
  "type_specifier", "struct_specifier", "$@1", "func_decl", "@2", "@3",
  "@4", "pointers", "param_list", "param_type_specifier", "param_decl",
  "def_list", "def", "func_compound_stmt", "$@5", "compound_stmt",
  "local_defs", "stmt_list", "stmt", "$@6", "$@7", "@8", "@9", "@10",
  "$@11", "$@12", "$@13", "$@14", "$@15", "before_if", "after_if",
  "expr_e", "const_expr", "expr", "$@16", "or_expr", "or_list", "and_expr",
  "and_list", "binary", "unary", "while_func_call", "args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    44,   258,    61,   259,   260,    38,   261,
     262,    43,    45,    42,    47,    37,    33,   263,   264,   265,
      91,    93,    40,    41,    46,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,    59,   123,   125
};
# endif

#define YYPACT_NINF -162

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-162)))

#define YYTABLE_NINF -72

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -162,    13,    97,  -162,  -162,  -162,   -22,  -162,   -10,  -162,
     -17,   -23,  -162,  -162,    -1,  -162,  -162,  -162,  -162,    -4,
      97,  -162,  -162,    10,     5,  -162,     1,     9,  -162,  -162,
      28,  -162,    36,    47,    46,    30,  -162,    38,  -162,    70,
    -162,    32,  -162,    58,  -162,  -162,    33,    72,  -162,    15,
     180,   180,   180,   180,   180,   180,   180,  -162,    68,    86,
     112,    96,  -162,   103,   111,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,    85,   122,   126,   115,  -162,   153,  -162,   157,
      84,   194,  -162,  -162,    30,  -162,   128,    10,  -162,   206,
     206,   206,   206,   206,   206,   142,   186,   180,   180,   180,
    -162,   180,   146,  -162,  -162,  -162,  -162,  -162,   147,  -162,
     180,   180,   180,   180,   180,   180,  -162,  -162,   131,   180,
    -162,   136,   177,  -162,   169,   173,  -162,  -162,   167,   172,
     178,   174,   180,  -162,   193,   180,  -162,   206,    84,   121,
     107,  -162,  -162,  -162,   179,     7,  -162,   180,    10,   184,
    -162,  -162,  -162,  -162,   195,  -162,   108,   180,   213,  -162,
    -162,  -162,    37,  -162,   208,  -162,  -162,  -162,   214,  -162,
     180,  -162,  -162,   180,  -162,   144,  -162,   196,   144,   202,
    -162,  -162,  -162,   180,   144,   218,  -162,  -162,   144,  -162
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    10,    11,     0,     3,    23,    12,
       0,    15,    22,     8,     0,     7,    31,     9,    13,     0,
      39,    36,    31,     0,    20,     5,    23,     0,    30,    41,
       0,    70,     0,     0,     0,     0,    34,     0,    35,    43,
      14,     0,    17,     0,    26,    27,     0,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,    46,    56,     0,     0,    91,    87,    88,    89,    48,
      37,    40,     0,     0,     0,     0,    73,    74,    76,    77,
      79,    84,     6,    19,     0,    21,     0,     0,    32,    98,
      92,    99,    93,    96,    97,     0,    84,     0,     0,     0,
      45,     0,     0,    61,    62,    31,    44,    53,     0,    42,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
     105,     0,     0,    25,    28,     0,    85,    86,     0,     0,
       0,     0,    69,    41,     0,     0,    75,    84,    78,    81,
      80,    82,    83,   102,     0,     0,   101,     0,     0,     0,
      63,    64,    65,    47,     0,    68,    43,     0,     0,   100,
     104,   106,     0,    72,     0,    33,    57,    38,     0,    67,
       0,   103,    29,    69,    54,    43,   107,     0,    43,    49,
      58,    55,    50,    69,    43,     0,    51,    59,    43,    60
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -162,  -162,  -162,  -162,   240,   -33,  -162,   241,  -162,  -162,
    -162,   -15,  -162,  -162,   160,   223,  -162,  -162,  -162,  -162,
     141,   114,  -104,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,  -162,  -162,  -162,  -161,   -86,   -56,  -162,  -162,
    -162,   138,  -162,   120,   -46,  -162,  -162
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,    26,     9,    22,    27,    33,    34,
      35,    14,    46,    47,    48,    20,    28,    17,    29,   106,
      21,    39,    71,    72,   101,   184,    73,   134,   178,   102,
     173,   183,   188,    74,   175,   154,    32,    75,   122,    76,
      77,    78,    79,    80,    81,   145,   162
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      95,   125,    45,    12,    89,    90,    91,    92,    93,    94,
      96,    37,   177,     3,    12,    50,    23,    11,    24,    51,
      52,    18,   185,    53,    54,    55,    15,    16,   -16,    56,
     160,   -18,    86,    13,    57,    87,    84,    24,    19,    25,
     170,   128,   129,   130,    36,   131,    65,    66,    67,    68,
      31,    45,    38,     4,     5,    44,    85,    41,    88,     6,
     171,     6,   164,   144,   137,   137,   137,   137,   137,   137,
      42,   179,    43,    40,   181,    82,   155,    49,    50,   158,
     186,    83,    51,    52,   189,    12,    53,    54,    55,   161,
      97,   163,    56,   112,   113,   114,   115,    57,    58,    59,
      60,   168,    61,   -52,    62,    63,    64,   -66,    98,    65,
      66,    67,    68,    69,   176,    70,    50,   155,   114,   115,
      51,    52,     4,     5,    53,    54,    55,   155,     6,   105,
      56,   113,   114,   115,    99,    57,    58,    59,    60,   100,
      61,   -52,    62,    63,    64,   -66,   103,    65,    66,    67,
      68,    69,    50,   167,   104,   107,    51,    52,   109,   110,
      53,    54,    55,   108,   111,   126,    56,   124,   132,   135,
     143,    57,    58,    59,    60,   146,    61,   -52,    62,    63,
      64,   -66,   147,    65,    66,    67,    68,    69,    50,   148,
     150,   -71,    51,    52,   149,   151,    53,    54,    55,   -71,
     159,   152,    56,   116,   117,   118,   119,    57,   120,   127,
     121,   116,   117,   118,   119,   157,   120,   153,   121,    65,
      66,    67,    68,   116,   117,   118,   119,   165,   120,   172,
     121,   138,   139,   140,   141,   142,   169,   174,   166,   180,
     182,   187,     8,    10,   123,    30,   133,   156,   136
};

static const yytype_uint8 yycheck[] =
{
      56,    87,    35,    13,    50,    51,    52,    53,    54,    55,
      56,    26,   173,     0,    13,     8,    20,    39,    22,    12,
      13,    44,   183,    16,    17,    18,    43,    44,    23,    22,
      23,    26,    47,    43,    27,    20,     3,    22,    39,    43,
       3,    97,    98,    99,    43,   101,    39,    40,    41,    42,
      40,    84,    43,    25,    26,    25,    23,    21,    43,    31,
      23,    31,   148,   119,   110,   111,   112,   113,   114,   115,
      23,   175,    26,    45,   178,    43,   132,    39,     8,   135,
     184,    23,    12,    13,   188,    13,    16,    17,    18,   145,
      22,   147,    22,     9,    10,    11,    12,    27,    28,    29,
      30,   157,    32,    33,    34,    35,    36,    37,    22,    39,
      40,    41,    42,    43,   170,    45,     8,   173,    11,    12,
      12,    13,    25,    26,    16,    17,    18,   183,    31,    44,
      22,    10,    11,    12,    22,    27,    28,    29,    30,    43,
      32,    33,    34,    35,    36,    37,    43,    39,    40,    41,
      42,    43,     8,    45,    43,    33,    12,    13,    43,     6,
      16,    17,    18,    37,     7,    23,    22,    39,    22,    22,
      39,    27,    28,    29,    30,    39,    32,    33,    34,    35,
      36,    37,     5,    39,    40,    41,    42,    43,     8,    20,
      23,     5,    12,    13,    21,    23,    16,    17,    18,     5,
      21,    23,    22,    17,    18,    19,    20,    27,    22,    23,
      24,    17,    18,    19,    20,    22,    22,    43,    24,    39,
      40,    41,    42,    17,    18,    19,    20,    43,    22,    21,
      24,   111,   112,   113,   114,   115,    23,    23,    43,    43,
      38,    23,     2,     2,    84,    22,   105,   133,   110
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    47,    48,     0,    25,    26,    31,    49,    50,    51,
      53,    39,    13,    43,    57,    43,    44,    63,    44,    39,
      61,    66,    52,    20,    22,    43,    50,    53,    62,    64,
      61,    40,    82,    54,    55,    56,    43,    57,    43,    67,
      45,    21,    23,    26,    25,    51,    58,    59,    60,    39,
       8,    12,    13,    16,    17,    18,    22,    27,    28,    29,
      30,    32,    34,    35,    36,    39,    40,    41,    42,    43,
      45,    68,    69,    72,    79,    83,    85,    86,    87,    88,
      89,    90,    43,    23,     3,    23,    57,    20,    43,    90,
      90,    90,    90,    90,    90,    83,    90,    22,    22,    22,
      43,    70,    75,    43,    43,    44,    65,    33,    37,    43,
       6,     7,     9,    10,    11,    12,    17,    18,    19,    20,
      22,    24,    84,    60,    39,    82,    23,    23,    83,    83,
      83,    83,    22,    66,    73,    22,    87,    90,    89,    89,
      89,    89,    89,    39,    83,    91,    39,     5,    20,    21,
      23,    23,    23,    43,    81,    83,    67,    22,    83,    21,
      23,    83,    92,    83,    82,    43,    43,    45,    83,    23,
       3,    23,    21,    76,    23,    80,    83,    81,    74,    68,
      43,    68,    38,    77,    71,    81,    68,    23,    78,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    49,    49,
      50,    50,    50,    52,    51,    51,    54,    53,    55,    53,
      56,    53,    57,    57,    58,    58,    59,    59,    60,    60,
      61,    61,    62,    62,    62,    62,    64,    63,    65,    66,
      67,    67,    68,    69,    68,    68,    70,    68,    68,    68,
      71,    68,    72,    73,    74,    68,    75,    76,    77,    78,
      68,    68,    68,    68,    68,    68,    79,    80,    81,    81,
      82,    84,    83,    83,    85,    86,    86,    87,    88,    88,
      89,    89,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    91,    92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     4,     7,     2,     2,     2,
       1,     1,     1,     0,     6,     2,     0,     6,     0,     7,
       0,     7,     1,     0,     1,     3,     1,     1,     3,     6,
       2,     0,     4,     7,     2,     2,     0,     5,     4,     1,
       2,     0,     2,     0,     2,     2,     0,     4,     1,     7,
       0,    10,     0,     0,     0,     8,     0,     0,     0,     0,
      13,     2,     2,     4,     4,     4,     0,     0,     1,     0,
       1,     0,     4,     1,     1,     3,     1,     1,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     3,     3,     5,     4,     0,     1,     3
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
#line 68 "subc.y" /* yacc.c:1646  */
    {}
#line 1401 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 72 "subc.y" /* yacc.c:1646  */
    {}
#line 1407 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 73 "subc.y" /* yacc.c:1646  */
    {}
#line 1413 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 77 "subc.y" /* yacc.c:1646  */
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
#line 1439 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 98 "subc.y" /* yacc.c:1646  */
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
#line 1471 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 125 "subc.y" /* yacc.c:1646  */
    {}
#line 1477 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 126 "subc.y" /* yacc.c:1646  */
    {}
#line 1483 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 127 "subc.y" /* yacc.c:1646  */
    {
			fprintf(fp, "%s_final:\n", current_func_name);
			codegen("push_reg fp");
			codegen("pop_reg sp");
			codegen("pop_reg fp");
			codegen("pop_reg pc");
			fprintf(fp, "%s_end:\n", current_func_name);
			current_func_actuals_size = 0;
			pop_scope();
		}
#line 1498 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 139 "subc.y" /* yacc.c:1646  */
    {
			decl *typedecl = findcurrentdecl((yyvsp[0].idptr));
			(yyval.declptr) = typedecl;
		}
#line 1507 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 143 "subc.y" /* yacc.c:1646  */
    {
			decl *voiddecl = findcurrentdecl((yyvsp[0].idptr));
			(yyval.declptr) = voiddecl;
		}
#line 1516 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 147 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1524 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 152 "subc.y" /* yacc.c:1646  */
    {
			decl *structdecl = findcurrentdecl((yyvsp[-1].idptr));
			if(structdecl){
				raise("redeclaration");
			}
			push_scope();
			isStruct++;
		}
#line 1537 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 160 "subc.y" /* yacc.c:1646  */
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
						if(struct_ste->prev == globalscope->topste){
							symboltable = struct_ste;
						}
						else{
							symboltable = struct_ste->prev;
						}
						temp->prev = struct_ste;
						struct_ste -> prev = globalscope->topste;
						globalscope->topste = struct_ste;
						structdecl->scope = globalscope;
						scopestack->topste = symboltable;
					}
				}
			}
			(yyval.declptr) = structdecl;
			isStruct--;
		}
#line 1575 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 193 "subc.y" /* yacc.c:1646  */
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
#line 1596 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 211 "subc.y" /* yacc.c:1646  */
    {
			decl *funcdecl = finddecl_in_current_scope((yyvsp[-1].idptr));
			if(funcdecl) { 
				raise("redeclaration");
				(yyval.declptr) = NULL; 
				push_scope();
				if(!(yyvsp[-2].intVal)){
					declare(returnid, (yyvsp[-3].declptr));
				}
				else{
					declare(returnid, makeptrdecl((yyvsp[-3].declptr)));
				}
				ste *formals = pop_scope();
				push_scope();
				pushstelist(formals);
			}
			else{
				fprintf(fp, "%s:\n", (yyvsp[-1].idptr)->name);
				funcdecl = makefuncdecl();
				declare((yyvsp[-1].idptr), funcdecl);
				push_scope();
				if(!(yyvsp[-2].intVal)){
					declare(returnid, (yyvsp[-3].declptr));
				}
				else{
					declare(returnid, makeptrdecl((yyvsp[-3].declptr)));
				}
				ste *formals = pop_scope();
				funcdecl->returntype = formals->decl;
				returntype = formals->decl;
				funcdecl->formals = NULL;
				(yyval.declptr) = funcdecl;
				push_scope();
				pushstelist(formals);
				current_func_name = (yyvsp[-1].idptr)->name;
				current_func_decl = funcdecl;
			}
		}
#line 1639 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 249 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[-1].declptr);
			current_func_actuals_size = 0;
		}
#line 1648 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 253 "subc.y" /* yacc.c:1646  */
    {
			decl *funcdecl = finddecl_in_current_scope((yyvsp[-1].idptr));
			if(funcdecl){
				raise("redeclaration");
				push_scope();
				if(!(yyvsp[-2].intVal)){
					declare(returnid, (yyvsp[-3].declptr));
				}
				else{
					declare(returnid, makeptrdecl((yyvsp[-3].declptr)));
				}
				ste *formals = pop_scope();
				push_scope();
				pushstelist(formals);
				(yyval.declptr) = NULL;
			}
			else{
				fprintf(fp, "%s:\n", (yyvsp[-1].idptr)->name);
				funcdecl = makefuncdecl();
				declare((yyvsp[-1].idptr), funcdecl);
				push_scope();
				if(!(yyvsp[-2].intVal)){
					declare(returnid, (yyvsp[-3].declptr));
				}
				else{
					declare(returnid, makeptrdecl((yyvsp[-3].declptr)));
				}
				ste *formals = pop_scope();
				funcdecl->returntype = formals->decl;
				returntype = formals->decl;
				funcdecl->formals = NULL;
				(yyval.declptr) = funcdecl;
				push_scope();
				pushstelist(formals);
				current_func_name = (yyvsp[-1].idptr)->name;
				current_func_decl = funcdecl;
			}
		}
#line 1691 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 291 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[-2].declptr);
			current_func_actuals_size = 0;
		}
#line 1700 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 295 "subc.y" /* yacc.c:1646  */
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
				current_func_name = (yyvsp[-1].idptr)->name;
				current_func_decl = funcdecl;
				current_func_actuals_size = 0;
			}
		}
#line 1733 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 323 "subc.y" /* yacc.c:1646  */
    {
			decl *funcdecl = (yyvsp[-2].declptr);
			if((yyvsp[-1].declptr) && funcdecl){
				fprintf(fp, "%s:\n", (yyvsp[-4].idptr)->name);
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
#line 1764 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 351 "subc.y" /* yacc.c:1646  */
    {
			(yyval.intVal) = 1;  // 1 if pointer
		}
#line 1772 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 354 "subc.y" /* yacc.c:1646  */
    {
			(yyval.intVal) = 0;  // 0 if not
		}
#line 1780 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 359 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = (yyvsp[0].declptr); }
#line 1786 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 360 "subc.y" /* yacc.c:1646  */
    { 
			if((yyvsp[-2].declptr)&&(yyvsp[0].declptr)) { (yyval.declptr) = (yyvsp[-2].declptr); }
			else { (yyval.declptr)=NULL; } 
		}
#line 1795 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 366 "subc.y" /* yacc.c:1646  */
    {
			decl *typedecl = findcurrentdecl((yyvsp[0].idptr));
			(yyval.declptr) = typedecl;
		}
#line 1804 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 370 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
		}
#line 1812 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 375 "subc.y" /* yacc.c:1646  */
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
					vardecl->is_param = 1;
					declare((yyvsp[0].idptr), vardecl);
					current_func_actuals_size++;
				}
			}
			else {
				decl *paramdecl = finddecl_in_current_scope((yyvsp[0].idptr));
				if(paramdecl){
					raise("redeclaration");
					(yyval.declptr) = NULL;
				}
				else {
					decl *vardecl = makevardecl((yyvsp[-2].declptr));
					vardecl->is_param = 1;
					declare((yyvsp[0].idptr), vardecl);
					current_func_actuals_size += (vardecl->size);
				}
			}
		}
#line 1846 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 404 "subc.y" /* yacc.c:1646  */
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
					decl *constdecl = makeconstdecl(makearraydecl((yyvsp[-1].declptr)->int_value,makevardecl(makeptrdecl((yyvsp[-5].declptr)))));
					constdecl->is_param = 1;
					declare((yyvsp[-3].idptr), constdecl);
					current_func_actuals_size += (constdecl->size);
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
					decl *constdecl = makeconstdecl(makearraydecl((yyvsp[-1].declptr)->int_value, makevardecl((yyvsp[-5].declptr))));
					constdecl->is_param = 1;
					declare((yyvsp[-3].idptr), constdecl);
					current_func_actuals_size += (constdecl->size);
				}
			}
		}
#line 1888 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 443 "subc.y" /* yacc.c:1646  */
    {}
#line 1894 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 444 "subc.y" /* yacc.c:1646  */
    {}
#line 1900 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 447 "subc.y" /* yacc.c:1646  */
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
#line 1927 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 469 "subc.y" /* yacc.c:1646  */
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
					// printf("%d\n", scopestack->size);
					declare((yyvsp[-4].idptr), makeconstdecl(makearraydecl((yyvsp[-2].declptr)->int_value, makevardecl((yyvsp[-6].declptr)))));
				}
			}
		}
#line 1961 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 498 "subc.y" /* yacc.c:1646  */
    {}
#line 1967 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 499 "subc.y" /* yacc.c:1646  */
    {}
#line 1973 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 502 "subc.y" /* yacc.c:1646  */
    {
			if(scopestack->size>0){
				fprintf(fp, "\tshift_sp %d\n", scopestack->size);
			}
			fprintf(fp, "%s_start:\n", current_func_name);
		}
#line 1984 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 517 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = NULL; }
#line 1990 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 518 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = NULL; }
#line 1996 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 521 "subc.y" /* yacc.c:1646  */
    {
			if((yyvsp[-1].declptr)){
				if((yyvsp[-1].declptr)->size > 0){
					if(assign){
						fprintf(fp, "\tshift_sp -%d\n", (yyvsp[-1].declptr)->size+2);
						assign = 0;
					}
					else{
						fprintf(fp, "\tshift_sp -%d\n", (yyvsp[-1].declptr)->size);
					}
				}
				else{
					fprintf(fp, "\tshift_sp -1\n");
				}
			}
		}
#line 2017 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 537 "subc.y" /* yacc.c:1646  */
    { push_scope(); }
#line 2023 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 537 "subc.y" /* yacc.c:1646  */
    { pop_scope(); }
#line 2029 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 538 "subc.y" /* yacc.c:1646  */
    {
		// Return type compatibility check
			ste *formals = pop_scope(); // get return type
			// if(formals->decl==voidtype){
			if(returntype==voidtype){
				(yyval.declptr) = formals->decl;
			}
			else{
				raise("incompatible return types");
				(yyval.declptr) = NULL;
			}
			push_scope();
			pushstelist(formals);
			fprintf(fp, "\tjump %s_final\n", current_func_name);
		}
#line 2049 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 553 "subc.y" /* yacc.c:1646  */
    {
			int func_return_size = current_func_decl->returntype->size;
			returning = 1;
			return_size = func_return_size;
			codegen("push_reg fp");
			codegen("push_const -1");
			codegen("add");
			fprintf(fp, "\tpush_const -%d\n", func_return_size);
			codegen("add");
			codegen("push_reg sp");
			codegen("fetch");
		}
#line 2066 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 565 "subc.y" /* yacc.c:1646  */
    {
			// Return type compatibility check
			if(!(yyvsp[-1].declptr)) { (yyval.declptr) = NULL; }
			else{
				int offset;
				ste *formals = pop_scope();
				if(check_sametype(returntype, (yyvsp[-1].declptr)->type)){
					(yyval.declptr) = formals->decl;
					codegen("assign");
					return_size--;
					while(return_size > 0){
						// codegen("push_reg sp");
						// codegen("fetch");
						codegen("push_const 1");
						codegen("add");
						codegen("push_reg sp");
						codegen("fetch");
						codegen("push_reg fp");
						if((yyvsp[-1].declptr)->is_param==0) offset = (yyvsp[-1].declptr)->offset+current_func_actuals_size+(yyvsp[-1].declptr)->size-return_size;
						else offset = (yyvsp[-1].declptr)->offset + (yyvsp[-1].declptr)->size - return_size;
						if(offset != 0){
							fprintf(fp, "\tpush_const %d\n", offset);
							codegen("add");
						}
						codegen("fetch");
						codegen("assign");
						return_size--;
					}
					fprintf(fp, "\tjump %s_final\n", current_func_name);
				}
				else{
					raise("incompatible return types");
					(yyval.declptr) = NULL;
				}
				push_scope();
				pushstelist(formals);
				returning = 0;
			}
		}
#line 2110 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 605 "subc.y" /* yacc.c:1646  */
    {
			int not_label = (yyvsp[-1].intVal);
			fprintf(fp, "label_%d:\n", not_label);
		}
#line 2119 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 609 "subc.y" /* yacc.c:1646  */
    {
			int else_label = (yyvsp[-2].intVal);
			int if_end = else_label + 1;
			fprintf(fp, "\tjump label_%d\n", if_end);
			fprintf(fp, "label_%d:\n", else_label);
			(yyval.intVal) = if_end;
		}
#line 2131 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 616 "subc.y" /* yacc.c:1646  */
    {
			int if_end = (yyvsp[-1].intVal);
			fprintf(fp, "label_%d:\n", if_end);
			label_index++;
		}
#line 2141 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 621 "subc.y" /* yacc.c:1646  */
    {
			(yyval.intVal) = while_end;
		}
#line 2149 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 623 "subc.y" /* yacc.c:1646  */
    {
			while_cond = label_index++;
			while_end = label_index++;
			break_label = while_end;
			continue_label = while_cond;
			fprintf(fp, "label_%d:\n", while_cond);
			(yyval.intVal) = while_end;
		}
#line 2162 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 630 "subc.y" /* yacc.c:1646  */
    {
			fprintf(fp, "\tbranch_false label_%d\n", while_end);
		}
#line 2170 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 632 "subc.y" /* yacc.c:1646  */
    {
			while_end = (yyvsp[-5].intVal);
			while_cond = while_end - 1;
			fprintf(fp, "\tjump label_%d\n", while_cond);
			fprintf(fp, "label_%d:\n", while_end);
			break_label = (yyvsp[-7].intVal);
			continue_label = break_label - 1;
		}
#line 2183 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 640 "subc.y" /* yacc.c:1646  */
    {
			for_init = label_index++;
			for_cond = label_index++;
			for_update = label_index++;
			for_internal = label_index++;
			for_end = label_index++;
			break_label = for_end;
			continue_label = for_update;
			fprintf(fp, "label_%d:\n", for_init);
		}
#line 2198 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 649 "subc.y" /* yacc.c:1646  */
    {
			fprintf(fp, "label_%d:\n", for_cond);
		}
#line 2206 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 651 "subc.y" /* yacc.c:1646  */
    {
			fprintf(fp, "\tbranch_false label_%d\n", for_end);
			fprintf(fp, "\tjump label_%d\n", for_internal);
			fprintf(fp, "label_%d:\n", for_update);
		}
#line 2216 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 655 "subc.y" /* yacc.c:1646  */
    {
			fprintf(fp, "\tjump label_%d\n", for_cond);
			fprintf(fp, "label_%d:\n", for_internal);
		}
#line 2225 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 658 "subc.y" /* yacc.c:1646  */
    {
			fprintf(fp, "\tjump label_%d\n", for_update);
			fprintf(fp, "label_%d:\n", for_end);
		}
#line 2234 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 662 "subc.y" /* yacc.c:1646  */
    {
			fprintf(fp, "\tjump label_%d\n", break_label);
		}
#line 2242 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 665 "subc.y" /* yacc.c:1646  */
    {
			fprintf(fp, "\tjump label_%d\n", continue_label);
		}
#line 2250 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 668 "subc.y" /* yacc.c:1646  */
    {
			codegen("write_int");
		}
#line 2258 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 671 "subc.y" /* yacc.c:1646  */
    {
			codegen("write_char");
		}
#line 2266 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 674 "subc.y" /* yacc.c:1646  */
    {
			codegen("write_string");
		}
#line 2274 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 679 "subc.y" /* yacc.c:1646  */
    {
			//fprintf(fp, "label_%d:\n", label_index);
			//label_index++;
		}
#line 2283 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 685 "subc.y" /* yacc.c:1646  */
    {
			int not_label = label_index++;
			label_index++; // for if_end label
			fprintf(fp, "\tbranch_false label_%d\n", not_label);
			(yyval.intVal) = not_label;
		}
#line 2294 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 693 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = (yyvsp[0].declptr); }
#line 2300 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 694 "subc.y" /* yacc.c:1646  */
    { 
			codegen("push_const 1");
			(yyval.declptr) = NULL;
		}
#line 2309 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 700 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = makenumconstdecl(inttype, (yyvsp[0].intVal));
		}
#line 2317 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 705 "subc.y" /* yacc.c:1646  */
    {
			assign = 1;
			codegen("push_reg sp");
			codegen("fetch");
		}
#line 2327 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 710 "subc.y" /* yacc.c:1646  */
    {
			// check if unary is declared (if not, not declared error) :done in  unary : ID
			// check if unary is variable
			// check if type of unary and expr are the same
			if(!(yyvsp[-3].declptr) || !(yyvsp[0].declptr)) { (yyval.declptr) = NULL; }
			else if(check_is_var((yyvsp[-3].declptr))){
				if(check_sametype((yyvsp[-3].declptr)->type, (yyvsp[0].declptr)->type)){
					if(check_is_pointer_type((yyvsp[-3].declptr)->type)==0 && check_is_null_type((yyvsp[0].declptr)->type)){
						(yyval.declptr) = NULL;
						raise("RHS is not a const or variable");
					}
					else{
						unary_size_while_assign = (yyvsp[-3].declptr)->size;
						if(unary_size_while_assign==1){
							codegen("assign");
							codegen("fetch");
							unary_size_while_assign--;
						}
						else{
							codegen("push_reg sp");
							fprintf(fp, "\tpush_const -%d\n", unary_size_while_assign+1);
							codegen("add");
							codegen("fetch");
							codegen("push_reg sp");
							codegen("fetch");
							codegen("push_reg sp");
							codegen("push_const -1");
							codegen("add");
							fprintf(fp, "\tpush_const -%d\n", unary_size_while_assign);
							codegen("add");
							codegen("fetch");
							codegen("assign");
							unary_size_while_assign--;
							while(unary_size_while_assign > 0){
								codegen("push_const 1");
								codegen("add");
								codegen("push_reg sp");
								codegen("fetch");
								codegen("push_reg sp");
								codegen("push_const -1");
								codegen("add");
								fprintf(fp, "\tpush_const -%d\n", unary_size_while_assign);
								codegen("add");
								codegen("fetch");
								codegen("assign");
								unary_size_while_assign--;
							}
						}
						(yyval.declptr) = copy_decl((yyvsp[-3].declptr));
						(yyvsp[-3].declptr)->type->offset = (yyvsp[0].declptr)->offset;
					}
				}
				else{
					raise("LHS and RHS are not same type");
					(yyval.declptr) = NULL;
				}
			}
			else{
				raise("LHS is not a variable");
				(yyval.declptr) = NULL;
			}
			assign = 0;
		}
#line 2395 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 773 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = (yyvsp[0].declptr); }
#line 2401 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 776 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = (yyvsp[0].declptr); }
#line 2407 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 779 "subc.y" /* yacc.c:1646  */
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
					codegen("or");
				}
				else{
					raise("not computable");
					(yyval.declptr) = NULL;
				}
			}
		}
#line 2432 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 799 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = (yyvsp[0].declptr); }
#line 2438 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 802 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = (yyvsp[0].declptr); }
#line 2444 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 805 "subc.y" /* yacc.c:1646  */
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
					codegen("and");
				}
				else{
					raise("not computable");
					(yyval.declptr) = NULL;
				}
			}
		}
#line 2469 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 825 "subc.y" /* yacc.c:1646  */
    { (yyval.declptr) = (yyvsp[0].declptr); }
#line 2475 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 828 "subc.y" /* yacc.c:1646  */
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
				if((yyvsp[-1].intVal)==_LT){
					codegen("less");
				}
				else if((yyvsp[-1].intVal)==_LTE){
					codegen("less_equal"); 
				}
				else if((yyvsp[-1].intVal)==_GT){
					codegen("greater"); 
				}
				else if((yyvsp[-1].intVal)==_GTE){ 
					codegen("greater_equal"); 
				}
			}
			else{
				raise("not comparable");
				(yyval.declptr) = NULL;
			}
		}
#line 2512 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 860 "subc.y" /* yacc.c:1646  */
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
				if((yyvsp[-1].intVal)==_EQ) { 
					codegen("equal"); 
				}
				else if((yyvsp[-1].intVal)==_NEQ) { 
					codegen("not_equal"); 
				}
			}
			else{
				raise("not comparable");
				(yyval.declptr) = NULL;
			}
		}
#line 2541 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 884 "subc.y" /* yacc.c:1646  */
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
				codegen("add");
			}
			else{
				raise("not computable");
				(yyval.declptr) = NULL;
			}
		}
#line 2563 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 901 "subc.y" /* yacc.c:1646  */
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
				codegen("sub");
			}
			else{
				raise("not computable");
				(yyval.declptr) = NULL;
			}
		}
#line 2585 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 918 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[0].declptr);
			print_get_unary_val((yyvsp[0].declptr));
		}
#line 2594 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 924 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[-1].declptr);
		}
#line 2602 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 927 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = (yyvsp[-1].declptr);
		}
#line 2610 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 930 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = makenumconstdecl(inttype, (yyvsp[0].intVal));
			// fprintf(fp, "\tpush_const %d\n", $1);
		}
#line 2619 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 934 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = makecharconstdecl(chartype, (yyvsp[0].charVal));
			// fprintf(fp, "\tpush_const %d\n", $1);
		}
#line 2628 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 938 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = makevardecl(makeptrdecl(chartype));
			(yyval.declptr)->declclass = _EXPR;
			fprintf(fp, "str_%d. string %s\n", str_index, (yyvsp[0].stringVal));
			fprintf(fp, "\tpush_const str_%d\n", str_index);
			str_index++;
		}
#line 2640 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 945 "subc.y" /* yacc.c:1646  */
    {
			(yyval.declptr) = makevardecl(makeptrdecl(nulltype));
			(yyval.declptr)->declclass = _EXPR;
		}
#line 2649 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 949 "subc.y" /* yacc.c:1646  */
    {
			// $1 is idptr
			decl *iddecl = findcurrentdecl((yyvsp[0].idptr));
			if(iddecl){
				(yyval.declptr) = iddecl;
				char *s = (yyvsp[0].idptr)->name;
				if(iddecl->declclass == _VAR){
					print_get_var_addr(iddecl);
				}
				else if(iddecl->declclass == _CONST && iddecl->type->typeclass == _ARRAY){
					print_get_array_addr(iddecl);
				}
				else if(check_is_func_type(iddecl)){
					func_return_size = iddecl->returntype->size;
				}
			}
			else{
				raise("not declared");
				(yyval.declptr) = NULL;
			}
		}
#line 2675 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 970 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[0].declptr)) { (yyval.declptr) = NULL; }
			else if(check_is_int_type((yyvsp[0].declptr)->type)){
				(yyval.declptr) = makeconstdecl(inttype);
				if(check_is_const((yyvsp[0].declptr))){
					(yyval.declptr)->int_value = -((yyvsp[0].declptr)->int_value);
				}
				else{
					(yyval.declptr)->declclass = _EXPR;
					print_get_unary_val((yyvsp[0].declptr));
					codegen("negate");
				}
			}
			else{
				raise("not computable");
				(yyval.declptr) = NULL;
			}
		}
#line 2698 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 988 "subc.y" /* yacc.c:1646  */
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
				print_get_unary_val((yyvsp[0].declptr));
				codegen("not");
			}
			else{
				raise("not computable");
				(yyval.declptr) = NULL;
			}
		}
#line 2721 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1006 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-1].declptr)){ (yyval.declptr)=NULL; }
			else if(check_is_int_type((yyvsp[-1].declptr)->type) || check_is_char_type((yyvsp[-1].declptr)->type)){
				if(check_is_const((yyvsp[-1].declptr))){ raise("not computable"); (yyval.declptr)=NULL; }
				else if(check_is_int_type((yyvsp[-1].declptr)->type)){
					(yyval.declptr) = copy_decl((yyvsp[-1].declptr));
					(yyval.declptr)->int_value = (yyval.declptr)->int_value + 1;
					(yyval.declptr)->declclass = _EXPR;
				}
				else if(check_is_char_type((yyvsp[-1].declptr)->type)){
					(yyval.declptr) = copy_decl((yyvsp[-1].declptr));
					(yyval.declptr)->char_value = (yyval.declptr)->char_value + 1;
					(yyval.declptr)->declclass = _EXPR;
				}
				print_INC_DEC((yyvsp[-1].declptr), 1, 0);
			}
			else{
				raise("not computable");
				(yyval.declptr) = NULL;
			}
		}
#line 2747 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1027 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-1].declptr)){ (yyval.declptr)=NULL; }
			else if(check_is_int_type((yyvsp[-1].declptr)->type) || check_is_char_type((yyvsp[-1].declptr)->type)){
				if(check_is_const((yyvsp[-1].declptr))){ raise("not computable"); (yyval.declptr)=NULL; }
				else if(check_is_int_type((yyvsp[-1].declptr)->type)){
					(yyval.declptr) = copy_decl((yyvsp[-1].declptr));
					(yyval.declptr)->int_value = (yyval.declptr)->int_value - 1;
					(yyval.declptr)->declclass = _EXPR;
				}
				else if(check_is_char_type((yyvsp[-1].declptr)->type)){
					(yyval.declptr) = copy_decl((yyvsp[-1].declptr));
					(yyval.declptr)->char_value = (yyval.declptr)->char_value - 1;
					(yyval.declptr)->declclass = _EXPR;
				}
				print_INC_DEC((yyvsp[-1].declptr), 0, 0);
			}
			else{
				raise("not computable");
				(yyval.declptr) = NULL;
			}
		}
#line 2773 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1048 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[0].declptr)){ (yyval.declptr)=NULL; }
			else if(check_is_int_type((yyvsp[0].declptr)->type) || check_is_char_type((yyvsp[0].declptr)->type)){
				if(check_is_const((yyvsp[0].declptr))){ raise("not computable"); (yyval.declptr)=NULL; }
				else if(check_is_int_type((yyvsp[0].declptr)->type)){
					(yyval.declptr) = copy_decl((yyvsp[0].declptr));
					(yyval.declptr)->int_value = (yyval.declptr)->int_value + 1;
					(yyval.declptr)->declclass = _EXPR;
				}
				else if(check_is_char_type((yyvsp[0].declptr)->type)){
					(yyval.declptr) = copy_decl((yyvsp[0].declptr));
					(yyval.declptr)->char_value = (yyval.declptr)->char_value + 1;
					(yyval.declptr)->declclass = _EXPR;
				}
				print_INC_DEC((yyvsp[0].declptr), 1, 1);
			}
			else{
				raise("not computable");
				(yyval.declptr) = NULL;
			}
		}
#line 2799 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1069 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[0].declptr)){ (yyval.declptr)=NULL; }
			else if(check_is_int_type((yyvsp[0].declptr)->type) || check_is_char_type((yyvsp[0].declptr)->type)){
				if(check_is_const((yyvsp[0].declptr))){ raise("not computable"); (yyval.declptr)=NULL; }
				else if(check_is_int_type((yyvsp[0].declptr)->type)){
					(yyval.declptr) = copy_decl((yyvsp[0].declptr));
					(yyval.declptr)->int_value = (yyval.declptr)->int_value - 1;
					(yyval.declptr)->declclass = _EXPR;
				}
				else if(check_is_char_type((yyvsp[0].declptr)->type)){
					(yyval.declptr) = copy_decl((yyvsp[0].declptr));
					(yyval.declptr)->char_value = (yyval.declptr)->char_value - 1;
					(yyval.declptr)->declclass = _EXPR;
				}
				print_INC_DEC((yyvsp[0].declptr), 0, 1);
			}
			else{
				raise("not computable");
				(yyval.declptr) = NULL;
			}
		}
#line 2825 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1090 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[0].declptr)){ (yyval.declptr) = NULL; }
			else if(check_is_var((yyvsp[0].declptr))){
				// make pointer declaration with the given type
				// return type to _EXPR
				(yyval.declptr) = makevardecl(makeptrdecl((yyvsp[0].declptr)->type));
				(yyval.declptr)->type->offset = (yyvsp[0].declptr)->offset;
				(yyval.declptr)->offset = (yyvsp[0].declptr)->offset;
				(yyval.declptr)->declclass = _EXPR;
			}
			else{
				// error case
				raise("not a variable");
				(yyval.declptr) = NULL;
			}
		}
#line 2846 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1106 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[0].declptr)){ (yyval.declptr) = NULL; }
			else if(check_is_pointer_type((yyvsp[0].declptr)->type)){
				(yyval.declptr) = makevardecl((yyvsp[0].declptr)->type->ptrto);
				(yyval.declptr)->offset = (yyvsp[0].declptr)->type->offset;
				if((yyvsp[0].declptr)->declclass!=_EXPR) codegen("fetch");
			}
			else{
				raise("not a pointer");
				(yyval.declptr) = NULL;
			}
		}
#line 2863 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1118 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-3].declptr) || !(yyvsp[-1].declptr)){ (yyval.declptr) = NULL; }
			else if(check_is_array_type((yyvsp[-3].declptr)->type)){
				if(check_is_int_type((yyvsp[-1].declptr)->type)){
					(yyval.declptr) = copy_decl((yyvsp[-3].declptr)->type->elementvar);
					if((yyvsp[-3].declptr)->type->elementvar->size != 1){
						fprintf(fp, "\tpush_const %d\n", (yyvsp[-3].declptr)->type->elementvar->size);
						codegen("mul");
					}
					codegen("add");
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
#line 2888 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1138 "subc.y" /* yacc.c:1646  */
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
					if(temp->offset > 0){
						fprintf(fp, "\tpush_const %d\n", temp->offset);
						codegen("add");
					}
				}
			}
			else{
				raise("not a struct");
				(yyval.declptr) = NULL;
			}
		}
#line 2914 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1159 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-2].declptr)){ (yyval.declptr) = NULL; }
			else if(check_is_pointer_type((yyvsp[-2].declptr)->type) && check_is_struct_type((yyvsp[-2].declptr)->type->ptrto)){
				decl* temp = finddecl((yyvsp[0].idptr), (yyvsp[-2].declptr)->type->ptrto->fieldlist);
				if(!temp){
					raise("struct not have same name field");
					(yyval.declptr) = NULL;
				}
				else{
					if(check_is_var((yyvsp[-2].declptr))) codegen("fetch");
					(yyval.declptr) = makevardecl(temp->type);
					fprintf(fp, "\tpush_const %d\n", temp->offset);
					codegen("add");
				}
			}
			else{
				raise("not a struct pointer");
				(yyval.declptr) = NULL;
			}
		}
#line 2939 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1179 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-4].declptr) || !(yyvsp[-1].declptr)){ (yyval.declptr) = NULL; }
			else if(check_is_func_type((yyvsp[-4].declptr))){
				decl *temp = check_function_call((yyvsp[-4].declptr), (yyvsp[-1].declptr));
				if(temp){
					temp = makevardecl(temp);
					temp->declclass = _EXPR;
					temp->size = temp->type->size;
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
			if((yyval.declptr)){
				int actual_size = 0;
				ste* temp = (yyvsp[-4].declptr)->formals;
				while(temp){
					actual_size += temp->decl->size;
					temp = temp->prev;
				}
				codegen("push_reg sp");
				if(actual_size > 0){
					fprintf(fp, "\tpush_const -%d\n", actual_size);
					codegen("add");
				}
				codegen("pop_reg fp");
				char* name = findid((yyvsp[-4].declptr))->name;
				fprintf(fp, "\tjump %s\n", name);
				fprintf(fp, "label_%d:\n", (yyvsp[-2].intVal));
				label_index++;
			}
		}
#line 2982 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1217 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-3].declptr)){ (yyval.declptr) = NULL; }
			else if(check_is_func_type((yyvsp[-3].declptr))){
				decl *temp = check_function_call((yyvsp[-3].declptr), NULL);
				if(temp){
					temp = makevardecl(temp);
					(yyval.declptr) = temp;
					(yyval.declptr)->declclass = _EXPR;
					(yyval.declptr)->size = (yyval.declptr)->type->size;
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
			if((yyval.declptr)){
				codegen("push_reg sp");
				codegen("pop_reg fp");
				char* name = findid((yyvsp[-3].declptr))->name;
				fprintf(fp, "\tjump %s\n", name);
				fprintf(fp, "label_%d:\n", (yyvsp[-1].intVal));
				label_index++;
			}
		}
#line 3015 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1247 "subc.y" /* yacc.c:1646  */
    {
			if(func_return_size > 0){
				fprintf(fp, "\tshift_sp %d\n", func_return_size);
			}
			else{
				codegen("shift_sp 1"); // for safety zone
			}
			fprintf(fp, "\tpush_const label_%d\n", label_index++);
			codegen("push_reg fp");
			(yyval.intVal) = label_index-1;
		}
#line 3031 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1260 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[0].declptr)) { (yyval.declptr) = NULL; }
			else{
				(yyval.declptr) = (yyvsp[0].declptr);
				(yyval.declptr)->next = NULL;
			}
		}
#line 3043 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1267 "subc.y" /* yacc.c:1646  */
    {
			if(!(yyvsp[-2].declptr) || !(yyvsp[0].declptr)) { (yyval.declptr) = NULL; }
			else{
				(yyvsp[0].declptr)->next = (yyvsp[-2].declptr);
				(yyval.declptr) = (yyvsp[0].declptr);
			}
		}
#line 3055 "subc.tab.c" /* yacc.c:1646  */
    break;


#line 3059 "subc.tab.c" /* yacc.c:1646  */
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
#line 1276 "subc.y" /* yacc.c:1906  */


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

