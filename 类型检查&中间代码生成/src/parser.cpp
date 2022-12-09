/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 2 "src/parser.y"

    #include <iostream>
    #include <assert.h>
    #include <queue>
    #include "parser.h"
    extern char* yytext;
    extern int yylineno;
    extern Ast ast;
    int yylex();
    int yyerror( char const * );

#line 80 "src/parser.cpp"




# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INTEGER = 4,                    /* INTEGER  */
  YYSYMBOL_HEXADECIMAL = 5,                /* HEXADECIMAL  */
  YYSYMBOL_OCTAL = 6,                      /* OCTAL  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_WHILE = 9,                      /* WHILE  */
  YYSYMBOL_INT = 10,                       /* INT  */
  YYSYMBOL_VOID = 11,                      /* VOID  */
  YYSYMBOL_CONST = 12,                     /* CONST  */
  YYSYMBOL_LPAREN = 13,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 14,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 15,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 16,                    /* RBRACE  */
  YYSYMBOL_SEMICOLON = 17,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 18,                     /* COMMA  */
  YYSYMBOL_ADD = 19,                       /* ADD  */
  YYSYMBOL_SUB = 20,                       /* SUB  */
  YYSYMBOL_OR = 21,                        /* OR  */
  YYSYMBOL_AND = 22,                       /* AND  */
  YYSYMBOL_LESS = 23,                      /* LESS  */
  YYSYMBOL_ASSIGN = 24,                    /* ASSIGN  */
  YYSYMBOL_LESSEQ = 25,                    /* LESSEQ  */
  YYSYMBOL_MOREEQ = 26,                    /* MOREEQ  */
  YYSYMBOL_NOTEQUAL = 27,                  /* NOTEQUAL  */
  YYSYMBOL_EQUAL = 28,                     /* EQUAL  */
  YYSYMBOL_MORE = 29,                      /* MORE  */
  YYSYMBOL_NOT = 30,                       /* NOT  */
  YYSYMBOL_DIV = 31,                       /* DIV  */
  YYSYMBOL_MUL = 32,                       /* MUL  */
  YYSYMBOL_MOD = 33,                       /* MOD  */
  YYSYMBOL_RETURN = 34,                    /* RETURN  */
  YYSYMBOL_THEN = 35,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_Program = 37,                   /* Program  */
  YYSYMBOL_Stmts = 38,                     /* Stmts  */
  YYSYMBOL_Stmt = 39,                      /* Stmt  */
  YYSYMBOL_IDList = 40,                    /* IDList  */
  YYSYMBOL_ParaList = 41,                  /* ParaList  */
  YYSYMBOL_ParaIDList = 42,                /* ParaIDList  */
  YYSYMBOL_InitIDList = 43,                /* InitIDList  */
  YYSYMBOL_InitStmt = 44,                  /* InitStmt  */
  YYSYMBOL_LVal = 45,                      /* LVal  */
  YYSYMBOL_AssignStmt = 46,                /* AssignStmt  */
  YYSYMBOL_BlockStmt = 47,                 /* BlockStmt  */
  YYSYMBOL_48_1 = 48,                      /* $@1  */
  YYSYMBOL_IfStmt = 49,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 50,                 /* WhileStmt  */
  YYSYMBOL_ReturnStmt = 51,                /* ReturnStmt  */
  YYSYMBOL_Exp = 52,                       /* Exp  */
  YYSYMBOL_Cond = 53,                      /* Cond  */
  YYSYMBOL_Intint = 54,                    /* Intint  */
  YYSYMBOL_PrimaryExp = 55,                /* PrimaryExp  */
  YYSYMBOL_NotExp = 56,                    /* NotExp  */
  YYSYMBOL_MulExp = 57,                    /* MulExp  */
  YYSYMBOL_AddExp = 58,                    /* AddExp  */
  YYSYMBOL_RelExp = 59,                    /* RelExp  */
  YYSYMBOL_LAndExp = 60,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 61,                    /* LOrExp  */
  YYSYMBOL_Type = 62,                      /* Type  */
  YYSYMBOL_ExprStmt = 63,                  /* ExprStmt  */
  YYSYMBOL_FuncExpr = 64,                  /* FuncExpr  */
  YYSYMBOL_FuncDef = 65,                   /* FuncDef  */
  YYSYMBOL_66_2 = 66,                      /* $@2  */
  YYSYMBOL_DeclStmt = 67                   /* DeclStmt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   154

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  126

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    54,    54,    59,    60,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    78,    86,    97,   107,   115,   121,
     128,   134,   139,   150,   163,   171,   186,   193,   192,   202,
     207,   210,   215,   221,   227,   231,   235,   237,   239,   243,
     245,   248,   252,   258,   260,   265,   270,   277,   279,   285,
     291,   299,   301,   307,   315,   317,   323,   329,   335,   341,
     347,   355,   357,   365,   367,   375,   378,   381,   388,   392,
     398,   414,   414,   443
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INTEGER",
  "HEXADECIMAL", "OCTAL", "IF", "ELSE", "WHILE", "INT", "VOID", "CONST",
  "LPAREN", "RPAREN", "LBRACE", "RBRACE", "SEMICOLON", "COMMA", "ADD",
  "SUB", "OR", "AND", "LESS", "ASSIGN", "LESSEQ", "MOREEQ", "NOTEQUAL",
  "EQUAL", "MORE", "NOT", "DIV", "MUL", "MOD", "RETURN", "THEN", "$accept",
  "Program", "Stmts", "Stmt", "IDList", "ParaList", "ParaIDList",
  "InitIDList", "InitStmt", "LVal", "AssignStmt", "BlockStmt", "$@1",
  "IfStmt", "WhileStmt", "ReturnStmt", "Exp", "Cond", "Intint",
  "PrimaryExp", "NotExp", "MulExp", "AddExp", "RelExp", "LAndExp",
  "LOrExp", "Type", "ExprStmt", "FuncExpr", "FuncDef", "$@2", "DeclStmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-77)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     120,     4,   -77,   -77,   -77,    19,    25,   -77,   -77,    11,
       9,    33,   -77,     9,     9,     9,     9,    53,   120,   -77,
     -77,    43,   -77,   -77,   -77,   -77,   -77,    51,   -77,   -77,
     -77,    10,   -15,    66,   -77,   -77,   -77,   -77,     9,     9,
       9,   -77,   -77,    59,   -77,   120,   -77,   -77,   -77,    57,
     -77,   -77,     9,   -77,     9,     9,     9,     9,     9,     3,
      46,    48,     5,   -77,    61,   -15,     8,    54,    56,    67,
     -77,    88,   -77,    63,   -77,   -77,   -77,    10,    10,    36,
       9,   -77,    79,   -77,    80,   -77,     9,   120,     9,     9,
       9,     9,     9,     9,     9,     9,   120,   -77,   -77,     6,
      81,   -77,   -77,    62,   -77,    77,   -15,   -15,   -15,   -15,
     -15,   -15,     8,    54,   -77,   -77,    36,   -77,     9,   120,
      73,    86,   -77,   -77,   -77,   -77
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    25,    36,    37,    38,     0,     0,    66,    67,     0,
       0,    27,    69,     0,     0,     0,     0,     0,     2,     3,
      11,    40,     5,     6,     7,    13,     8,     0,    41,    43,
      47,    51,    34,     0,    12,    42,    10,     9,    21,     0,
       0,    65,    40,     0,    29,     0,    45,    46,    44,     0,
       1,     4,     0,    68,     0,     0,     0,     0,     0,    14,
       0,     0,     0,    19,     0,    54,    61,    63,    35,     0,
      39,     0,    33,     0,    49,    48,    50,    52,    53,    18,
       0,    73,     0,    24,     0,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    26,     0,
       0,    22,    15,     0,    20,    30,    57,    55,    56,    60,
      59,    58,    62,    64,    32,    71,     0,    16,     0,     0,
       0,     0,    23,    31,    72,    17
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -77,   -77,    45,   -17,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -14,   -77,   -77,   -77,   -77,    -8,    69,   -77,   -77,
      -4,   -32,   -33,    17,    18,   -77,   -76,   -77,   -77,   -77,
     -77,   -77
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    17,    18,    19,    60,    99,    62,    61,    20,    42,
      22,    23,    45,    24,    25,    26,    27,    64,    28,    29,
      30,    31,    32,    66,    67,    68,    33,    34,    35,    36,
     120,    37
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      21,    51,    43,   100,    57,    58,    65,    65,    49,    46,
      47,    48,     1,     2,     3,     4,    79,    38,    21,    85,
     115,    41,    10,    86,   116,    77,    78,    80,    13,    14,
      63,    88,    39,    89,    90,    91,    92,    93,    40,    15,
     121,    54,    55,    56,    73,    21,     7,     8,     9,    44,
      74,    75,    76,    50,    51,   106,   107,   108,   109,   110,
     111,    65,    65,    81,    82,    83,    84,    52,    53,    59,
     105,    21,   101,    70,    72,    87,    94,    95,   104,   114,
      98,    96,   102,   103,   117,   119,   118,    21,    11,   125,
      71,     1,     2,     3,     4,     5,    21,     6,     7,     8,
       9,    10,   123,    11,    97,    12,   124,    13,    14,    69,
     122,   112,     0,   113,     0,     0,     0,     0,    15,    21,
       0,     0,    16,     1,     2,     3,     4,     5,     0,     6,
       7,     8,     9,    10,     0,    11,     0,    12,     0,    13,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,     0,     0,     0,    16
};

static const yytype_int8 yycheck[] =
{
       0,    18,    10,    79,    19,    20,    39,    40,    16,    13,
      14,    15,     3,     4,     5,     6,    13,    13,    18,    14,
      14,    10,    13,    18,    18,    57,    58,    24,    19,    20,
      38,    23,    13,    25,    26,    27,    28,    29,    13,    30,
     116,    31,    32,    33,    52,    45,    10,    11,    12,    16,
      54,    55,    56,     0,    71,    88,    89,    90,    91,    92,
      93,    94,    95,    17,    18,    17,    18,    24,    17,     3,
      87,    71,    80,    14,    17,    14,    22,    21,    86,    96,
      17,    14,     3,     3,     3,     8,    24,    87,    15,     3,
      45,     3,     4,     5,     6,     7,    96,     9,    10,    11,
      12,    13,   119,    15,    16,    17,   120,    19,    20,    40,
     118,    94,    -1,    95,    -1,    -1,    -1,    -1,    30,   119,
      -1,    -1,    34,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    -1,    15,    -1,    17,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    34
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     9,    10,    11,    12,
      13,    15,    17,    19,    20,    30,    34,    37,    38,    39,
      44,    45,    46,    47,    49,    50,    51,    52,    54,    55,
      56,    57,    58,    62,    63,    64,    65,    67,    13,    13,
      13,    10,    45,    52,    16,    48,    56,    56,    56,    52,
       0,    39,    24,    17,    31,    32,    33,    19,    20,     3,
      40,    43,    42,    52,    53,    58,    59,    60,    61,    53,
      14,    38,    17,    52,    56,    56,    56,    57,    57,    13,
      24,    17,    18,    17,    18,    14,    18,    14,    23,    25,
      26,    27,    28,    29,    22,    21,    14,    16,    17,    41,
      62,    52,     3,     3,    52,    39,    58,    58,    58,    58,
      58,    58,    59,    60,    39,    14,    18,     3,    24,     8,
      66,    62,    52,    39,    47,     3
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    40,    40,    41,    41,    41,    42,
      42,    42,    43,    43,    44,    45,    46,    48,    47,    47,
      49,    49,    50,    51,    52,    53,    54,    54,    54,    55,
      55,    55,    55,    56,    56,    56,    56,    57,    57,    57,
      57,    58,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    62,    62,    62,    63,    63,
      64,    66,    65,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     4,     0,     1,
       3,     0,     3,     5,     3,     1,     4,     0,     4,     2,
       5,     7,     5,     3,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     2,     2,     2,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     1,     3,     2,     1,     1,     2,     1,
       4,     0,     7,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* Program: Stmts  */
#line 54 "src/parser.y"
            {
        ast.setRoot((yyvsp[0].stmttype));
    }
#line 1500 "src/parser.cpp"
    break;

  case 3: /* Stmts: Stmt  */
#line 59 "src/parser.y"
           {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1506 "src/parser.cpp"
    break;

  case 4: /* Stmts: Stmts Stmt  */
#line 60 "src/parser.y"
                {
        (yyval.stmttype) = new SeqNode((yyvsp[-1].stmttype), (yyvsp[0].stmttype));
    }
#line 1514 "src/parser.cpp"
    break;

  case 5: /* Stmt: AssignStmt  */
#line 65 "src/parser.y"
                 {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1520 "src/parser.cpp"
    break;

  case 6: /* Stmt: BlockStmt  */
#line 66 "src/parser.y"
                {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1526 "src/parser.cpp"
    break;

  case 7: /* Stmt: IfStmt  */
#line 67 "src/parser.y"
             {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1532 "src/parser.cpp"
    break;

  case 8: /* Stmt: ReturnStmt  */
#line 68 "src/parser.y"
                 {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1538 "src/parser.cpp"
    break;

  case 9: /* Stmt: DeclStmt  */
#line 69 "src/parser.y"
               {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1544 "src/parser.cpp"
    break;

  case 10: /* Stmt: FuncDef  */
#line 70 "src/parser.y"
              {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1550 "src/parser.cpp"
    break;

  case 11: /* Stmt: InitStmt  */
#line 71 "src/parser.y"
               {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1556 "src/parser.cpp"
    break;

  case 12: /* Stmt: ExprStmt  */
#line 72 "src/parser.y"
               {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1562 "src/parser.cpp"
    break;

  case 13: /* Stmt: WhileStmt  */
#line 73 "src/parser.y"
                {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1568 "src/parser.cpp"
    break;

  case 14: /* IDList: ID  */
#line 78 "src/parser.y"
         {
    	SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::voidType, (yyvsp[0].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[0].strtype), se);
        std::queue<SymbolEntry*> idlist;
        idlist.push(se);
        (yyval.idlist) = new IDList(idlist);
    }
#line 1581 "src/parser.cpp"
    break;

  case 15: /* IDList: IDList COMMA ID  */
#line 86 "src/parser.y"
                      {
    	SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::voidType, (yyvsp[0].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[0].strtype), se);
        std::queue<SymbolEntry*> idl = (yyvsp[-2].idlist)->getList();
        idl.push(se);
        (yyval.idlist)=new IDList(idl);
    }
#line 1594 "src/parser.cpp"
    break;

  case 16: /* ParaList: Type ID  */
#line 97 "src/parser.y"
            {
        SymbolEntry *se = new IdentifierSymbolEntry((yyvsp[-1].type), (yyvsp[0].strtype), identifiers->getLevel());
        
        identifiers->install((yyvsp[0].strtype), se);
        std::queue<SymbolEntry*> idList;
        idList.push(se);
        (yyval.paraList) = new ParaList(idList);
        // delete []$2;
    }
#line 1608 "src/parser.cpp"
    break;

  case 17: /* ParaList: ParaList COMMA Type ID  */
#line 107 "src/parser.y"
                          {
        SymbolEntry *se = new IdentifierSymbolEntry((yyvsp[-1].type), (yyvsp[0].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[0].strtype), se);
        std::queue<SymbolEntry*> idList = (yyvsp[-3].paraList)->getList();
        idList.push(se);
        (yyval.paraList) = new ParaList(idList);
        // delete []$2;
    }
#line 1621 "src/parser.cpp"
    break;

  case 18: /* ParaList: %empty  */
#line 115 "src/parser.y"
             {(yyval.paraList) = new ParaList();}
#line 1627 "src/parser.cpp"
    break;

  case 19: /* ParaIDList: Exp  */
#line 121 "src/parser.y"
        {
        std::queue<ExprNode*> exprlist;
        exprlist.push((yyvsp[0].exprtype));
        (yyval.paraIdList) = new ParaIDList(exprlist);
        // delete []$2;
    }
#line 1638 "src/parser.cpp"
    break;

  case 20: /* ParaIDList: ParaIDList COMMA Exp  */
#line 128 "src/parser.y"
                         {
        std::queue<ExprNode*> exprlist=(yyvsp[-2].paraIdList)->getList();
        exprlist.push((yyvsp[0].exprtype));
        (yyval.paraIdList) = new ParaIDList(exprlist);
        // delete []$2;
    }
#line 1649 "src/parser.cpp"
    break;

  case 21: /* ParaIDList: %empty  */
#line 134 "src/parser.y"
             {(yyval.paraIdList) = new ParaIDList();}
#line 1655 "src/parser.cpp"
    break;

  case 22: /* InitIDList: ID ASSIGN Exp  */
#line 139 "src/parser.y"
                  {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[-2].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-2].strtype), se);
        std::queue<SymbolEntry*> idList;
        std::queue<ExprNode*> nums;
        idList.push(se);
        nums.push((yyvsp[0].exprtype));
        (yyval.initIdList) = new InitIDList(idList, nums);
        delete (yyvsp[-2].strtype);
    }
#line 1670 "src/parser.cpp"
    break;

  case 23: /* InitIDList: InitIDList COMMA ID ASSIGN Exp  */
#line 150 "src/parser.y"
                                   {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[-2].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-2].strtype), se);
        std::queue<SymbolEntry*> idList = (yyvsp[-4].initIdList)->getList();
        std::queue<ExprNode*> nums = (yyvsp[-4].initIdList)->getNums();
        idList.push(se);
        nums.push((yyvsp[0].exprtype));
        (yyval.initIdList) = new InitIDList(idList, nums);
        delete (yyvsp[-2].strtype);
    }
#line 1685 "src/parser.cpp"
    break;

  case 24: /* InitStmt: Type InitIDList SEMICOLON  */
#line 163 "src/parser.y"
                              {
        (yyvsp[-1].initIdList)->setType((yyvsp[-2].type));
        (yyval.stmttype) = new InitStmt((yyvsp[-1].initIdList));
        // delete []$2;
    }
#line 1695 "src/parser.cpp"
    break;

  case 25: /* LVal: ID  */
#line 171 "src/parser.y"
         {
        SymbolEntry *se;
        se = identifiers->lookup((yyvsp[0].strtype));
        if(se == nullptr)
        {
            fprintf(stderr, "identifier \"%s\" is undefined\n", (char*)(yyvsp[0].strtype));
            delete [](char*)(yyvsp[0].strtype);
            assert(se != nullptr);
        }
        (yyval.exprtype) = new Id(se);
        delete [](yyvsp[0].strtype);
    }
#line 1712 "src/parser.cpp"
    break;

  case 26: /* AssignStmt: LVal ASSIGN Exp SEMICOLON  */
#line 186 "src/parser.y"
                              {
        (yyval.stmttype) = new AssignStmt((yyvsp[-3].exprtype), (yyvsp[-1].exprtype));
    }
#line 1720 "src/parser.cpp"
    break;

  case 27: /* $@1: %empty  */
#line 193 "src/parser.y"
        {identifiers = new SymbolTable(identifiers);}
#line 1726 "src/parser.cpp"
    break;

  case 28: /* BlockStmt: LBRACE $@1 Stmts RBRACE  */
#line 195 "src/parser.y"
        {
            (yyval.stmttype) = new CompoundStmt((yyvsp[-1].stmttype));
            SymbolTable *top = identifiers;
            identifiers = identifiers->getPrev();
            delete top;
        }
#line 1737 "src/parser.cpp"
    break;

  case 29: /* BlockStmt: LBRACE RBRACE  */
#line 202 "src/parser.y"
                  {
        (yyval.stmttype) = new CompoundStmt();
    }
#line 1745 "src/parser.cpp"
    break;

  case 30: /* IfStmt: IF LPAREN Cond RPAREN Stmt  */
#line 207 "src/parser.y"
                                            {
        (yyval.stmttype) = new IfStmt((yyvsp[-2].exprtype), (yyvsp[0].stmttype));
    }
#line 1753 "src/parser.cpp"
    break;

  case 31: /* IfStmt: IF LPAREN Cond RPAREN Stmt ELSE Stmt  */
#line 210 "src/parser.y"
                                           {
        (yyval.stmttype) = new IfElseStmt((yyvsp[-4].exprtype), (yyvsp[-2].stmttype), (yyvsp[0].stmttype));
    }
#line 1761 "src/parser.cpp"
    break;

  case 32: /* WhileStmt: WHILE LPAREN Cond RPAREN Stmt  */
#line 215 "src/parser.y"
                                    {
    	(yyval.stmttype) = new WhileStmt((yyvsp[-2].exprtype), (yyvsp[0].stmttype));
    }
#line 1769 "src/parser.cpp"
    break;

  case 33: /* ReturnStmt: RETURN Exp SEMICOLON  */
#line 221 "src/parser.y"
                         {
        (yyval.stmttype) = new ReturnStmt((yyvsp[-1].exprtype));
    }
#line 1777 "src/parser.cpp"
    break;

  case 34: /* Exp: AddExp  */
#line 227 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1783 "src/parser.cpp"
    break;

  case 35: /* Cond: LOrExp  */
#line 231 "src/parser.y"
          {(yyval.exprtype)=(yyvsp[0].exprtype);}
#line 1789 "src/parser.cpp"
    break;

  case 36: /* Intint: INTEGER  */
#line 235 "src/parser.y"
            {(yyval.itype)=(yyvsp[0].itype);}
#line 1795 "src/parser.cpp"
    break;

  case 37: /* Intint: HEXADECIMAL  */
#line 237 "src/parser.y"
                {(yyval.itype)=(yyvsp[0].itype);}
#line 1801 "src/parser.cpp"
    break;

  case 38: /* Intint: OCTAL  */
#line 239 "src/parser.y"
          {(yyval.itype)=(yyvsp[0].itype);}
#line 1807 "src/parser.cpp"
    break;

  case 39: /* PrimaryExp: LPAREN Exp RPAREN  */
#line 243 "src/parser.y"
                      {(yyval.exprtype)=(yyvsp[-1].exprtype);}
#line 1813 "src/parser.cpp"
    break;

  case 40: /* PrimaryExp: LVal  */
#line 245 "src/parser.y"
         {
        (yyval.exprtype) = (yyvsp[0].exprtype);
    }
#line 1821 "src/parser.cpp"
    break;

  case 41: /* PrimaryExp: Intint  */
#line 248 "src/parser.y"
             {
        SymbolEntry *se = new ConstantSymbolEntry(TypeSystem::intType, (yyvsp[0].itype));
        (yyval.exprtype) = new Constant(se);
    }
#line 1830 "src/parser.cpp"
    break;

  case 42: /* PrimaryExp: FuncExpr  */
#line 252 "src/parser.y"
               {
    	(yyval.exprtype)=(yyvsp[0].exprtype);
    }
#line 1838 "src/parser.cpp"
    break;

  case 43: /* NotExp: PrimaryExp  */
#line 258 "src/parser.y"
               {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1844 "src/parser.cpp"
    break;

  case 44: /* NotExp: NOT NotExp  */
#line 260 "src/parser.y"
               {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new SingelExpr(se, SingelExpr::NOT, (yyvsp[0].exprtype));        
    }
#line 1853 "src/parser.cpp"
    break;

  case 45: /* NotExp: ADD NotExp  */
#line 265 "src/parser.y"
               {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new SingelExpr(se, SingelExpr::POS, (yyvsp[0].exprtype));  
    }
#line 1862 "src/parser.cpp"
    break;

  case 46: /* NotExp: SUB NotExp  */
#line 270 "src/parser.y"
               {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new SingelExpr(se, SingelExpr::MIN, (yyvsp[0].exprtype));  
    }
#line 1871 "src/parser.cpp"
    break;

  case 47: /* MulExp: NotExp  */
#line 277 "src/parser.y"
           {(yyval.exprtype)=(yyvsp[0].exprtype);}
#line 1877 "src/parser.cpp"
    break;

  case 48: /* MulExp: MulExp MUL NotExp  */
#line 280 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MUL, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1886 "src/parser.cpp"
    break;

  case 49: /* MulExp: MulExp DIV NotExp  */
#line 286 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::DIV, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1895 "src/parser.cpp"
    break;

  case 50: /* MulExp: MulExp MOD NotExp  */
#line 292 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MOD, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1904 "src/parser.cpp"
    break;

  case 51: /* AddExp: MulExp  */
#line 299 "src/parser.y"
          {(yyval.exprtype)=(yyvsp[0].exprtype);}
#line 1910 "src/parser.cpp"
    break;

  case 52: /* AddExp: AddExp ADD MulExp  */
#line 302 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::ADD, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1919 "src/parser.cpp"
    break;

  case 53: /* AddExp: AddExp SUB MulExp  */
#line 308 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::SUB, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1928 "src/parser.cpp"
    break;

  case 54: /* RelExp: AddExp  */
#line 315 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1934 "src/parser.cpp"
    break;

  case 55: /* RelExp: RelExp LESSEQ AddExp  */
#line 318 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::LESSEQ, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1943 "src/parser.cpp"
    break;

  case 56: /* RelExp: RelExp MOREEQ AddExp  */
#line 324 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MOREEQ, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1952 "src/parser.cpp"
    break;

  case 57: /* RelExp: RelExp LESS AddExp  */
#line 330 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::LESS, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1961 "src/parser.cpp"
    break;

  case 58: /* RelExp: RelExp MORE AddExp  */
#line 336 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MORE, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1970 "src/parser.cpp"
    break;

  case 59: /* RelExp: RelExp EQUAL AddExp  */
#line 342 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::EQUAL, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1979 "src/parser.cpp"
    break;

  case 60: /* RelExp: RelExp NOTEQUAL AddExp  */
#line 348 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::NOTEQUAL, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1988 "src/parser.cpp"
    break;

  case 61: /* LAndExp: RelExp  */
#line 355 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1994 "src/parser.cpp"
    break;

  case 62: /* LAndExp: LAndExp AND RelExp  */
#line 358 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::AND, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 2003 "src/parser.cpp"
    break;

  case 63: /* LOrExp: LAndExp  */
#line 365 "src/parser.y"
            {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 2009 "src/parser.cpp"
    break;

  case 64: /* LOrExp: LOrExp OR LAndExp  */
#line 368 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::OR, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 2018 "src/parser.cpp"
    break;

  case 65: /* Type: CONST INT  */
#line 375 "src/parser.y"
              {
        (yyval.type)=TypeSystem::constintType;
    }
#line 2026 "src/parser.cpp"
    break;

  case 66: /* Type: INT  */
#line 378 "src/parser.y"
          {
        (yyval.type) = TypeSystem::intType;
    }
#line 2034 "src/parser.cpp"
    break;

  case 67: /* Type: VOID  */
#line 381 "src/parser.y"
           {
        (yyval.type) = TypeSystem::voidType;
    }
#line 2042 "src/parser.cpp"
    break;

  case 68: /* ExprStmt: Exp SEMICOLON  */
#line 388 "src/parser.y"
                  {
    	(yyval.stmttype) = new ExprStmt((yyvsp[-1].exprtype));  
    }
#line 2050 "src/parser.cpp"
    break;

  case 69: /* ExprStmt: SEMICOLON  */
#line 392 "src/parser.y"
              {
        (yyval.stmttype) = new ExprStmt();
    }
#line 2058 "src/parser.cpp"
    break;

  case 70: /* FuncExpr: ID LPAREN ParaIDList RPAREN  */
#line 398 "src/parser.y"
                                {
        SymbolEntry *se;
        se = identifiers->lookup((yyvsp[-3].strtype));
        if(se == nullptr)
        {
            fprintf(stderr, "identifier \"%s\" is undefined\n", (char*)(yyvsp[-3].strtype));
            delete [](char*)(yyvsp[-3].strtype);
            assert(se != nullptr);
        }
    	(yyval.exprtype) = new FuncExpr(se, (yyvsp[-1].paraIdList));
        delete [](yyvsp[-3].strtype);   
    }
#line 2075 "src/parser.cpp"
    break;

  case 71: /* $@2: %empty  */
#line 414 "src/parser.y"
                                   {
        Type *funcType;
        std::vector<Type*> paramsType;
        std::queue<SymbolEntry*> idList = (yyvsp[-1].paraList)->getList();
        while(!idList.empty()){
            SymbolEntry *se0=idList.front();
            Type *t=se0->getType();
            paramsType.emplace_back(t);
            idList.pop();
        }
        funcType = new FunctionType((yyvsp[-4].type),paramsType);
        SymbolEntry *se = new IdentifierSymbolEntry(funcType, (yyvsp[-3].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-3].strtype), se);
        identifiers = new SymbolTable(identifiers);
    }
#line 2095 "src/parser.cpp"
    break;

  case 72: /* FuncDef: Type ID LPAREN ParaList RPAREN $@2 BlockStmt  */
#line 430 "src/parser.y"
    {   
        SymbolEntry *se;
        se = identifiers->lookup((yyvsp[-5].strtype));
        (yyval.stmttype) = new FunctionDef(se, (yyvsp[-3].paraList), (yyvsp[0].stmttype));
        SymbolTable *top = identifiers;
        identifiers = identifiers->getPrev();
        delete top;
        delete [](yyvsp[-5].strtype);
    }
#line 2109 "src/parser.cpp"
    break;

  case 73: /* DeclStmt: Type IDList SEMICOLON  */
#line 443 "src/parser.y"
                          {
        (yyvsp[-1].idlist)->setType((yyvsp[-2].type));
        (yyval.stmttype) = new DeclStmt((yyvsp[-1].idlist));
        //delete []$2;
    }
#line 2119 "src/parser.cpp"
    break;


#line 2123 "src/parser.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 449 "src/parser.y"


int yyerror(char const* message)
{
    std::cerr<<message<<std::endl;
    std::cout<<yytext<<std::endl;
    std::cout<<yylineno<<std::endl;
    return -1;
}
