
#line 3 "lex.yy.c"

#define  YY_INT_ALIGNED short int

/* Un escáner léxico generado por flex */

#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 6
#define YY_FLEX_SUBMINOR_VERSION 4
#if YY_FLEX_SUBMINOR_VERSION > 0
#define FLEX_BETA
#endif

/* Primero, nos ocupamos de problemas específicos de la plataforma o del compilador. */

/* comience los encabezados C estándar. */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

/* terminar los encabezados C estándar. */

/* definiciones de tipo de entero flexible */

#ifndef FLEXINT_H
#define FLEXINT_H

/* Los sistemas C99 tienen <inttypes.h>. Los sistemas que no son C99 pueden o no. */

#if defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

/* C99 dice que defina __STDC_LIMIT_MACROS antes de incluir stdint.h,
 *  si desea macros de límite (máximo / mínimo) para tipos int.
 */
#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS 1
#endif

#include <inttypes.h>
typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
#else
typedef signed char flex_int8_t;
typedef short int flex_int16_t;
typedef int flex_int32_t;
typedef unsigned char flex_uint8_t; 
typedef unsigned short int flex_uint16_t;
typedef unsigned int flex_uint32_t;

/* Límites de tipos integrales. */
#ifndef INT8_MIN
#define INT8_MIN               (-128)
#endif
#ifndef INT16_MIN
#define INT16_MIN              (-32767-1)
#endif
#ifndef INT32_MIN
#define INT32_MIN              (-2147483647-1)
#endif
#ifndef INT8_MAX
#define INT8_MAX               (127)
#endif
#ifndef INT16_MAX
#define INT16_MAX              (32767)
#endif
#ifndef INT32_MAX
#define INT32_MAX              (2147483647)
#endif
#ifndef UINT8_MAX
#define UINT8_MAX              (255U)
#endif
#ifndef UINT16_MAX
#define UINT16_MAX             (65535U)
#endif
#ifndef UINT32_MAX
#define UINT32_MAX             (4294967295U)
#endif

#ifndef SIZE_MAX
#define SIZE_MAX               (~(size_t)0)
#endif

#endif /* ! C99 */

#endif /* ! FLEXINT_H */

/* comenzar los encabezados estándar de C ++. */

/* TODO: esto siempre está definido, así que en línea */
#define yyconst const

#if defined(__GNUC__) && __GNUC__ >= 3
#define yynoreturn __attribute__((__noreturn__))
#else
#define yynoreturn
#endif

/* Devuelto al final del archivo.*/
#define YY_NULL 0

/* Promueve un carácter posiblemente negativo, posiblemente con signo, a un número entero en el rango [0..255] para su uso como índice de matriz.*/
#define YY_SC_TO_UI(c) ((YY_CHAR) (c))

/* Ingrese una condición de inicio. Esta macro realmente debería tomar un parámetro ,
 * pero lo hacemos de la manera repugnante y cruda que nos impone el () -less
 * definicion de BEGIN.
 */
#define BEGIN (yy_start) = 1 + 2 *
/* Traducir el estado de inicio actual a un valor que se pueda entregar posteriormente
 * para BEGIN a regresar al estado. El alias YYSTATE es para compatibilidad con lex.
 */
#define YY_START (((yy_start) - 1) / 2)
#define YYSTATE YY_START
/*Número de acción para la regla EOF de un estado de inicio determinado. */
#define YY_STATE_EOF(state) (YY_END_OF_BUFFER + state + 1)
/* Acción especial que significa "comenzar a procesar un nuevo archivo". */
#define YY_NEW_FILE yyrestart( yyin  )
#define YY_END_OF_BUFFER_CHAR 0

/* Tamaño del búfer de entrada predeterminado. */
#ifndef YY_BUF_SIZE
#ifdef __ia64__
/* En IA-64, el tamaño del búfer es 16 k, no 8 k.
 * Además, YY_BUF_SIZE es 2 * YY_READ_BUF_SIZE en el caso general.
 * Lo mismo ocurre con el caso __ia64__ en consecuencia.
 */
#define YY_BUF_SIZE 32768
#else
#define YY_BUF_SIZE 16384
#endif /* __ia64__ */
#endif

/* El búfer de estado debe ser lo suficientemente grande para contener un estado por carácter en el búfer principal.
 */
#define YY_STATE_BUF_SIZE   ((YY_BUF_SIZE + 2) * sizeof(yy_state_type))

#ifndef YY_TYPEDEF_YY_BUFFER_STATE
#define YY_TYPEDEF_YY_BUFFER_STATE
typedef struct yy_buffer_state *YY_BUFFER_STATE;
#endif

#ifndef YY_TYPEDEF_YY_SIZE_T
#define YY_TYPEDEF_YY_SIZE_T
typedef size_t yy_size_t;
#endif

extern int yyleng;

extern FILE *yyin, *yyout;

#define EOB_ACT_CONTINUE_SCAN 0
#define EOB_ACT_END_OF_FILE 1
#define EOB_ACT_LAST_MATCH 2
    
    #define YY_LESS_LINENO(n)
    #define YY_LINENO_REWIND_TO(ptr)
    
/* Devuelve todos los caracteres coincidentes excepto los primeros "n" al flujo de entrada. */
#define yyless(n) \
	do \
		{ \
		/* Deshace los efectos de configurar yytext.*/ \
        int yyless_macro_arg = (n); \
        YY_LESS_LINENO(yyless_macro_arg);\
		*yy_cp = (yy_hold_char); \
		YY_RESTORE_YY_MORE_OFFSET \
		(yy_c_buf_p) = yy_cp = yy_bp + yyless_macro_arg - YY_MORE_ADJ; \
		YY_DO_BEFORE_ACTION; /*configurar yytext de nuevo */ \
		} \
	while ( 0 )
#define unput(c) yyunput( c, (yytext_ptr)  )

#ifndef YY_STRUCT_YY_BUFFER_STATE
#define YY_STRUCT_YY_BUFFER_STATE
struct yy_buffer_state
	{
	FILE *yy_input_file;

	char *yy_ch_buf;		/* búfer de entrada */
	char *yy_buf_pos;		/* posición actual en el búfer de entrada*/

	/* Tamaño del búfer de entrada en bytes, sin incluir espacio para caracteres EOB.
	 */
	int yy_buf_size;

	/* Número de caracteres leídos en yy_ch_buf, sin incluir los caracteres EOB.
	 */
	int yy_n_chars;

	/* Si somos "own" del bufer - i.e., sabemos que lo creamos,
	 * y podemos realloc() para cultivarlo,y deberia free() para borrarlo
	 */
	int yy_is_our_buffer;

	/* Si se trata de una fuente de entrada "interactiva"; si es así, y
	 * si usamos stdio para la entrada, entonces queremos usar getc ()
     * en lugar de fread (), para asegurarnos de que dejamos de obtener la entrada después
	 * cada nueva línea.
	 */
	int yy_is_interactive;

	/* Si se considera que estamos al principio de una línea.
	 * Si es así, las reglas '^' estarán activas en el próximo partido, de lo contrario
	 * no.
	 */
	int yy_at_bol;

    int yy_bs_lineno; /**< El recuento de líneas. */
    int yy_bs_column; /**< El recuento de columnas. */

	/* Ya sea para intentar llenar el búfer de entrada cuando llegamos al
	* fin de la misma.
	 */
	int yy_fill_buffer;

	int yy_buffer_status;

#define YY_BUFFER_NEW 0
#define YY_BUFFER_NORMAL 1
	/* Cuando se ha visto un EOF pero todavía hay algo de texto por procesar
	 * luego marcamos el búfer como YY_EOF_PENDING, para indicar que
	* No debería intentar leer más desde la fuente de entrada. Podríamos
	* Sin embargo, todavía tengo un montón de tokens para igualar, debido a
	* posible respaldo.
	*
	* Cuando vemos el EOF, cambiamos el estado a "nuevo".
	* (a través de yyrestart ()), para que el usuario pueda continuar escaneando
	* simplemente apuntando yyin a un nuevo archivo de entrada.
	 */
#define YY_BUFFER_EOF_PENDING 2

	};
#endif /* ! YY_STRUCT_YY_BUFFER_STATE */

/* Pila de búferes de entrada. */
static size_t yy_buffer_stack_top = 0; /**< índice de la parte superior de la pila. */
static size_t yy_buffer_stack_max = 0; /**< capacidad de pila. */
static YY_BUFFER_STATE * yy_buffer_stack = NULL; /** <Apilar como una matriz. */

/* Proporcionamos macros para acceder a los estados del búfer en caso de que
 * futuro queremos poner los estados del búfer en una forma más general
 * "estado del escáner".
 *
 * Devuelve la parte superior de la pila o NULL.
 */
#define YY_CURRENT_BUFFER ( (yy_buffer_stack) \
                          ? (yy_buffer_stack)[(yy_buffer_stack_top)] \
                          : NULL)
/* Igual que la macro anterior, pero útil cuando sabemos que la pila de búfer no es
 * NULL o cuando necesitamos un lvalue. Sólo para uso interno.
 */
#define YY_CURRENT_BUFFER_LVALUE (yy_buffer_stack)[(yy_buffer_stack_top)]

/* yy_hold_char contiene el carácter perdido cuando se forma yytext. */
static char yy_hold_char;
static int yy_n_chars;		/* número de caracteres leídos en yy_ch_buf */
int yyleng;

/* Apunta al carácter actual en el búfer. */
static char *yy_c_buf_p = NULL;
static int yy_init = 0;		/* si necesitamos inicializar */
static int yy_start = 0;	/* número de estado de inicio */

/* Bandera que se usa para permitir que yywrap () realice cambios de búfer
 * en lugar de configurar un yyin nuevo. Un poco de truco ...
 */
static int yy_did_buffer_switch_on_eof;

void yyrestart ( FILE *input_file  );
void yy_switch_to_buffer ( YY_BUFFER_STATE new_buffer  );
YY_BUFFER_STATE yy_create_buffer ( FILE *file, int size  );
void yy_delete_buffer ( YY_BUFFER_STATE b  );
void yy_flush_buffer ( YY_BUFFER_STATE b  );
void yypush_buffer_state ( YY_BUFFER_STATE new_buffer  );
void yypop_buffer_state ( void );

static void yyensure_buffer_stack ( void );
static void yy_load_buffer_state ( void );
static void yy_init_buffer ( YY_BUFFER_STATE b, FILE *file  );
#define YY_FLUSH_BUFFER yy_flush_buffer( YY_CURRENT_BUFFER )

YY_BUFFER_STATE yy_scan_buffer ( char *base, yy_size_t size  );
YY_BUFFER_STATE yy_scan_string ( const char *yy_str  );
YY_BUFFER_STATE yy_scan_bytes ( const char *bytes, int len  );

void *yyalloc ( yy_size_t  );
void *yyrealloc ( void *, yy_size_t  );
void yyfree ( void *  );

#define yy_new_buffer yy_create_buffer
#define yy_set_interactive(is_interactive) \
	{ \
	if ( ! YY_CURRENT_BUFFER ){ \
        yyensure_buffer_stack (); \
		YY_CURRENT_BUFFER_LVALUE =    \
            yy_create_buffer( yyin, YY_BUF_SIZE ); \
	} \
	YY_CURRENT_BUFFER_LVALUE->yy_is_interactive = is_interactive; \
	}
#define yy_set_bol(at_bol) \
	{ \
	if ( ! YY_CURRENT_BUFFER ){\
        yyensure_buffer_stack (); \
		YY_CURRENT_BUFFER_LVALUE =    \
            yy_create_buffer( yyin, YY_BUF_SIZE ); \
	} \
	YY_CURRENT_BUFFER_LVALUE->yy_at_bol = at_bol; \
	}
#define YY_AT_BOL() (YY_CURRENT_BUFFER_LVALUE->yy_at_bol)

/* Empezar usuario sect3 */
typedef flex_uint8_t YY_CHAR;

FILE *yyin = NULL, *yyout = NULL;

typedef int yy_state_type;

extern int yylineno;
int yylineno = 1;

extern char *yytext;
#ifdef yytext_ptr
#undef yytext_ptr
#endif
#define yytext_ptr yytext

static yy_state_type yy_get_previous_state ( void );
static yy_state_type yy_try_NUL_trans ( yy_state_type current_state  );
static int yy_get_next_buffer ( void );
static void yynoreturn yy_fatal_error ( const char* msg  );

/* Hecho después de que el patrón actual ha sido emparejado y antes de
 * acción correspondiente: configura yytext. 
 */
#define YY_DO_BEFORE_ACTION \
	(yytext_ptr) = yy_bp; \
	yyleng = (int) (yy_cp - yy_bp); \
	(yy_hold_char) = *yy_cp; \
	*yy_cp = '\0'; \
	(yy_c_buf_p) = yy_cp;
#define YY_NUM_RULES 28
#define YY_END_OF_BUFFER 29
/* Esta estructura no se utiliza en este escáner,
   pero su presencia es necesaria. */
struct yy_trans_info
	{
	flex_int32_t yy_verify;
	flex_int32_t yy_nxt;
	};
static const flex_int16_t yy_accept[164] =
    {   0,
       26,   26,   29,   28,   19,    6,   21,    7,    4,    5,
       20,    8,   20,   24,   13,   17,   14,   26,   26,   26,
       26,   26,   26,   26,   26,   26,   26,   26,   26,    9,
       10,   19,   18,    0,    6,    0,   21,    7,    4,    5,
       20,    8,    2,    0,   24,   26,   11,   15,   17,   16,
       12,   26,   26,   26,   26,   26,   26,   26,   22,   26,
       26,   26,   26,   26,   26,   26,   26,   26,    9,   10,
        0,   27,    0,    6,    2,   20,    0,   25,   13,    0,
        0,   14,    0,   26,   26,   26,   26,   26,   26,   26,
        1,   26,   26,   26,   26,   26,   22,   26,   26,    0,

        0,    2,   25,   26,   26,   23,   26,   26,   26,   26,
       26,   26,   26,   22,   26,   26,   26,   26,   26,   26,
        2,   26,   26,   26,   26,   26,   26,    0,   26,   26,
       26,   26,   26,    3,   26,    0,   26,    0,    0,    0,
       26,    3,    0,    0,    0,   26,   26,   26,   26,    0,
        0,    0,   26,   26,    0,    0,    0,   26,    0,    0,
        0,    0,    0
    } ;

static const YY_CHAR yy_ec[256] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    2,    3,    4,    5,    1,    6,    1,    1,    7,
        8,    9,   10,    1,   11,   12,   13,   14,   14,   14,
       14,   14,   14,   14,   14,   14,   14,    1,    1,   15,
       16,   17,    1,    1,   18,   18,   18,   18,   18,   18,
       18,   18,   18,   18,   18,   18,   18,   18,   18,   18,
       18,   18,   19,   18,   18,   18,   18,   18,   18,   18,
        1,    1,    1,    1,    1,    1,   20,   18,   21,   22,

       23,   24,   25,   26,   27,   18,   18,   28,   29,   30,
       31,   32,   18,   33,   34,   35,   36,   18,   37,   18,
       18,   18,   38,    1,   39,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,

        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1
    } ;

static const YY_CHAR yy_meta[40] =
    {   0,
        1,    2,    1,    3,    1,    1,    1,    1,    4,    4,
        4,    5,    6,    5,    1,    1,    1,    7,    7,    7,
        7,    7,    7,    7,    7,    7,    7,    7,    7,    7,
        7,    7,    7,    7,    7,    7,    7,    1,    1
    } ;

static const flex_int16_t yy_base[169] =
    {   0,
        0,    0,  413,  427,   37,   39,  407,  405,  400,  396,
       35,  391,   41,   35,   40,  386,   41,   47,   48,   51,
       56,   52,   75,   55,   59,   62,   76,   79,   82,  359,
      357,  392,  391,   93,  389,   99,  387,  385,  382,  380,
      105,  375,  110,  357,   90,   95,  355,  341,  328,  321,
      318,  110,  113,  114,  117,  118,  121,  124,  125,  128,
      133,  136,  137,  145,  148,  149,  153,  161,  280,  275,
      295,  306,  174,  175,   79,  176,  182,  182,  284,  271,
      260,  256,  242,  185,  186,  190,  189,  194,  193,  197,
      204,  208,  215,  218,  223,  222,  226,  227,  235,  246,

      242,  213,  240,  247,  248,  252,  253,  256,  257,  260,
      263,  267,  268,  271,  272,  278,  282,  286,  291,  290,
      238,  294,  295,  307,  310,  311,  314,  216,  315,  319,
      322,  327,  328,  324,  340,  207,  343,  188,  190,  155,
      347,  350,  148,  146,  147,  351,  355,  361,  331,  131,
      130,  114,  364,  368,  101,  105,   79,  371,   75,   65,
       52,   13,  427,  398,  401,  407,  413,  419
    } ;

static const flex_int16_t yy_def[169] =
    {   0,
      163,    1,  163,  163,  163,  164,  163,  163,  163,  163,
      163,  163,  163,  165,  163,  163,  163,  165,  165,  165,
      165,  165,  165,  165,  165,  165,  165,  165,  165,  163,
      163,  163,  163,  166,  163,  164,  163,  163,  163,  163,
      163,  163,  167,  163,  165,  165,  163,  163,  163,  163,
      163,  165,  165,  165,  165,  165,  165,  165,  165,  165,
      165,  165,  165,  165,  165,  165,  165,  165,  163,  163,
      163,  163,  166,  164,  168,  163,  167,  165,  163,  163,
      163,  163,  163,  165,  165,  165,  165,  165,  165,  165,
      165,  165,  165,  165,  165,  165,  165,  165,  165,  164,

      163,  168,  165,  165,  165,  165,  165,  165,  165,  165,
      165,  165,  165,  165,  165,  165,  165,  165,  165,  165,
       77,  165,  165,  165,  165,  165,  165,  163,  165,  165,
      165,  165,  165,  163,  165,  163,  165,  163,  163,  163,
      165,  165,  163,  163,  163,  165,  165,  165,  165,  163,
      163,  163,  165,  165,  163,  163,  163,  165,  163,  163,
      163,  163,    0,  163,  163,  163,  163,  163
    } ;

static const flex_int16_t yy_nxt[467] =
    {   0,
        4,    4,    5,    6,    7,    8,    9,   10,   11,   11,
       11,   12,   13,   14,   15,   16,   17,   18,   19,   18,
       20,   18,   21,   22,   18,   18,   23,   18,   24,   25,
       18,   18,   26,   27,   18,   28,   29,   30,   31,   32,
       34,  134,   35,   41,   41,   41,   44,   41,   45,   41,
       41,   41,   33,   43,   47,   48,   50,   51,  163,  163,
       52,   52,  163,  163,   52,   52,  163,  163,   52,   52,
      163,  162,   52,  163,   63,   52,  136,   54,   64,   58,
       75,   55,   53,   56,   65,   57,  163,  163,   52,   52,
      163,  101,   52,  163,   34,   52,   72,  161,   59,   60,

       34,   44,  163,   45,   61,   62,  163,   68,   52,  160,
       66,   75,   67,   41,   41,   41,  128,   41,   41,   41,
       41,   83,   76,   52,  163,  163,   52,   52,  163,  163,
       52,   52,  163,  159,   52,  163,  163,   52,   52,  163,
      157,   52,   87,   59,  163,   84,   52,  163,  163,   52,
       52,   86,   85,   90,   88,  156,  163,   89,   52,  163,
      163,   52,   52,   93,  163,  155,   52,   91,  152,   92,
       97,   94,  163,   95,   52,   34,   34,   72,   35,   98,
      151,  150,   96,   75,   41,   41,   41,   99,   43,  145,
      163,  163,  163,  163,  163,  103,  163,  163,   52,   52,

      163,  163,   52,   52,  163,  163,   52,   52,  163,  144,
       52,  105,   59,  107,   75,  163,  106,   52,  143,  163,
       59,   52,  110,  108,  109,  101,  163,  111,   52,  163,
      112,   52,  134,  163,  163,   52,   52,  163,  163,   52,
       52,  134,  113,  115,  114,  116,  163,   34,   52,   72,
      101,   44,  118,  103,  121,  104,  119,  117,  163,  163,
      122,   52,  120,  163,  163,   52,   52,  163,  163,   52,
       52,  163,   51,   52,  163,   50,   52,  123,  163,  163,
       52,   52,  163,  128,   52,   52,   48,   91,  124,  163,
       58,   52,  125,  163,   53,   52,  126,  163,   47,   52,

      127,  163,  163,   52,   52,   83,  163,  122,   52,  100,
       33,  129,   59,   70,  130,   59,  131,   69,  163,   91,
       52,  163,  163,   52,   52,  163,  163,   52,   52,   59,
      163,  132,   52,  136,   82,   52,  133,   81,  163,  163,
       52,   52,  163,   49,   52,   91,  135,  137,   59,   59,
      138,  163,  139,   52,  163,   80,   52,  140,  163,  141,
       52,  163,  163,   52,   52,  154,  163,  146,   52,   79,
       78,  142,  163,   59,   52,  163,  147,   52,  148,  163,
      153,   52,  163,  149,   52,   62,   42,   40,   39,  158,
       38,   37,   74,   71,   32,   70,   69,  118,   94,   36,

       36,   49,   42,   40,   36,   46,   39,   46,   73,   73,
       38,   37,  163,   73,   77,  163,   77,  163,   77,   77,
      102,  163,  163,  163,  102,  102,    3,  163,  163,  163,
      163,  163,  163,  163,  163,  163,  163,  163,  163,  163,
      163,  163,  163,  163,  163,  163,  163,  163,  163,  163,
      163,  163,  163,  163,  163,  163,  163,  163,  163,  163,
      163,  163,  163,  163,  163,  163
    } ;

static const flex_int16_t yy_chk[467] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    5,
        6,  162,    6,   11,   11,   11,   14,   11,   14,   13,
       13,   13,    5,   13,   15,   15,   17,   17,   18,   19,
       18,   19,   20,   22,   20,   22,   24,   21,   24,   21,
       25,  161,   25,   26,   24,   26,  160,   20,   25,   22,
       75,   20,   19,   21,   26,   21,   23,   27,   23,   27,
       28,   75,   28,   29,   34,   29,   34,  159,   23,   23,

       36,   45,   36,   45,   23,   23,   46,   29,   46,  157,
       27,   43,   28,   41,   41,   41,  156,   41,   43,   43,
       43,   52,   43,   52,   53,   54,   53,   54,   55,   56,
       55,   56,   57,  155,   57,   58,   59,   58,   59,   60,
      152,   60,   57,   54,   61,   53,   61,   62,   63,   62,
       63,   56,   55,   61,   58,  151,   64,   60,   64,   65,
       66,   65,   66,   63,   67,  150,   67,   61,  145,   62,
       66,   63,   68,   64,   68,   73,   74,   73,   74,   67,
      144,  143,   65,   77,   76,   76,   76,   68,   76,  140,
       77,   77,   77,   78,   77,   78,   84,   85,   84,   85,

       87,   86,   87,   86,   89,   88,   89,   88,   90,  139,
       90,   84,   86,   88,  102,   91,   87,   91,  138,   92,
       85,   92,   91,   89,   90,  102,   93,   91,   93,   94,
       91,   94,  136,   96,   95,   96,   95,   97,   98,   97,
       98,  128,   92,   94,   93,   95,   99,  100,   99,  100,
      121,  103,   97,  103,  101,   83,   98,   96,  104,  105,
      104,  105,   99,  106,  107,  106,  107,  108,  109,  108,
      109,  110,   82,  110,  111,   81,  111,  105,  112,  113,
      112,  113,  114,  115,  114,  115,   80,  107,  108,  116,
      111,  116,  109,  117,  110,  117,  112,  118,   79,  118,

      113,  120,  119,  120,  119,  122,  123,  122,  123,   72,
       71,  116,  120,   70,  117,  119,  118,   69,  124,  123,
      124,  125,  126,  125,  126,  127,  129,  127,  129,  124,
      130,  125,  130,  131,   51,  131,  127,   50,  132,  133,
      132,  133,  149,   49,  149,  126,  129,  133,  130,  132,
      134,  135,  134,  135,  137,   48,  137,  134,  141,  135,
      141,  142,  146,  142,  146,  149,  147,  141,  147,   47,
       44,  137,  148,  146,  148,  153,  142,  153,  142,  154,
      148,  154,  158,  142,  158,  147,   42,   40,   39,  154,
       38,   37,   35,   33,   32,   31,   30,  158,  153,  164,

      164,   16,   12,   10,  164,  165,    9,  165,  166,  166,
        8,    7,    3,  166,  167,    0,  167,    0,  167,  167,
      168,    0,    0,    0,  168,  168,  163,  163,  163,  163,
      163,  163,  163,  163,  163,  163,  163,  163,  163,  163,
      163,  163,  163,  163,  163,  163,  163,  163,  163,  163,
      163,  163,  163,  163,  163,  163,  163,  163,  163,  163,
      163,  163,  163,  163,  163,  163
    } ;

static yy_state_type yy_last_accepting_state;
static char *yy_last_accepting_cpos;

extern int yy_flex_debug;
int yy_flex_debug = 0;

/* La intención detrás de esta definición es que captará
 * cualquier uso de RECHAZO que no haya flexionado.
 */
#define REJECT reject_used_but_not_detected
#define yymore() yymore_used_but_not_detected
#define YY_MORE_ADJ 0
#define YY_RESTORE_YY_MORE_OFFSET
char *yytext;
#line 1 "analizador.lex"
#line 2 "analizador.lex"
#include <stdio.h>
#include <math.h>
#line 598 "lex.yy.c"
#line 599 "lex.yy.c"

#define INITIAL 0

#ifndef YY_NO_UNISTD_H
/* Caso especial para "unistd.h", ya que no es ANSI. Lo incluimos de manera
 * aquí abajo porque queremos que la sección 1 del usuario se haya escaneado primero.
 * El usuario tiene la posibilidad de anularlo con una opción.
 */
#include <unistd.h>
#endif

#ifndef YY_EXTRA_TYPE
#define YY_EXTRA_TYPE void *
#endif

static int yy_init_globals ( void );

/* Métodos de acceso a globales.
   Estos se hacen visibles para los escáneres no reentrantes para mayor comodidad. */

int yylex_destroy ( void );

int yyget_debug ( void );

void yyset_debug ( int debug_flag  );

YY_EXTRA_TYPE yyget_extra ( void );

void yyset_extra ( YY_EXTRA_TYPE user_defined  );

FILE *yyget_in ( void );

void yyset_in  ( FILE * _in_str  );

FILE *yyget_out ( void );

void yyset_out  ( FILE * _out_str  );

			int yyget_leng ( void );

char *yyget_text ( void );

int yyget_lineno ( void );

void yyset_lineno ( int _line_number  );

/* Las macros posteriores a este punto pueden ser anuladas por definiciones de usuario en
 * sección 1.
 */

#ifndef YY_SKIP_YYWRAP
#ifdef __cplusplus
extern "C" int yywrap ( void );
#else
extern int yywrap ( void );
#endif
#endif

#ifndef YY_NO_UNPUT
    
    static void yyunput ( int c, char *buf_ptr  );
    
#endif

#ifndef yytext_ptr
static void yy_flex_strncpy ( char *, const char *, int );
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen ( const char * );
#endif

#ifndef YY_NO_INPUT
#ifdef __cplusplus
static int yyinput ( void );
#else
static int input ( void );
#endif

#endif

/* Cantidad de cosas para sorber con cada lectura. */
#ifndef YY_READ_BUF_SIZE
#ifdef __ia64__
/* En IA-64, el tamaño del búfer es 16 k, no 8 k */
#define YY_READ_BUF_SIZE 16384
#else
#define YY_READ_BUF_SIZE 8192
#endif /* __ia64__ */
#endif

/* Copie la última regla que coincida con la salida estándar.  */
#ifndef ECHO
/* Esto solía ser un fputs (), pero dado que la cadena puede contener NUL,
 * ahora usamos fwrite ().
 */
#define ECHO do { if (fwrite( yytext, (size_t) yyleng, 1, yyout )) {} } while (0)
#endif

/* Obtiene la entrada y la mete en "buf". número de caracteres leídos, o YY_NULL,
 * se devuelve en "resultado".
 */
#ifndef YY_INPUT
#define YY_INPUT(buf,result,max_size) \
	if ( YY_CURRENT_BUFFER_LVALUE->yy_is_interactive ) \
		{ \
		int c = '*'; \
		int n; \
		for ( n = 0; n < max_size && \
			     (c = getc( yyin )) != EOF && c != '\n'; ++n ) \
			buf[n] = (char) c; \
		if ( c == '\n' ) \
			buf[n++] = (char) c; \
		if ( c == EOF && ferror( yyin ) ) \
			YY_FATAL_ERROR( "input in flex scanner failed" ); \
		result = n; \
		} \
	else \
		{ \
		errno=0; \
		while ( (result = (int) fread(buf, 1, (yy_size_t) max_size, yyin)) == 0 && ferror(yyin)) \
			{ \
			if( errno != EINTR) \
				{ \
				YY_FATAL_ERROR( "input in flex scanner failed" ); \
				break; \
				} \
			errno=0; \
			clearerr(yyin); \
			} \
		}\
\

#endif

/* Sin punto y coma después del regreso; el uso correcto es escribir "yyterminate ();" -
 * no queremos un extra ';' después del "retorno" porque eso causará
 * algunos compiladores se quejan de declaraciones inalcanzables.
 */
#ifndef yyterminate
#define yyterminate() return YY_NULL
#endif

/* Número de entradas por las que crece la pila de condiciones de inicio. */
#ifndef YY_START_STACK_INCR
#define YY_START_STACK_INCR 25
#endif

/* Informar un error fatal. */
#ifndef YY_FATAL_ERROR
#define YY_FATAL_ERROR(msg) yy_fatal_error( msg )
#endif

/* tablas finales estructuras de serialización y prototipos */

/* Declaración predeterminada del escáner generado: una definición para que el usuario pueda
 * agregar parámetros fácilmente.
 */
#ifndef YY_DECL
#define YY_DECL_IS_OURS 1

extern int yylex (void);

#define YY_DECL int yylex (void)
#endif /* !YY_DECL */

/* Código ejecutado al principio de cada regla, después de yytext y yyleng
 * Ha sido configurado.
 */
#ifndef YY_USER_ACTION
#define YY_USER_ACTION
#endif

/* Código ejecutado al final de cada regla. */
#ifndef YY_BREAK
#define YY_BREAK /*LINTED*/break;
#endif

#define YY_RULE_SETUP \
	YY_USER_ACTION

/** La función principal del escáner que hace todo el trabajo.
 */
YY_DECL
{
	yy_state_type yy_current_state;
	char *yy_cp, *yy_bp;
	int yy_act;
    
	if ( !(yy_init) )
		{
		(yy_init) = 1;

#ifdef YY_USER_INIT
		YY_USER_INIT;
#endif

		if ( ! (yy_start) )
			(yy_start) = 1;	/* primer estado de inicio */

		if ( ! yyin )
			yyin = stdin;

		if ( ! yyout )
			yyout = stdout;

		if ( ! YY_CURRENT_BUFFER ) {
			yyensure_buffer_stack ();
			YY_CURRENT_BUFFER_LVALUE =
				yy_create_buffer( yyin, YY_BUF_SIZE );
		}

		yy_load_buffer_state(  );
		}

	{
#line 39 "analizador.lex"


#line 819 "lex.yy.c"

	while ( /*CONSTCOND*/1 )		/* se repite hasta que se alcanza el final del archivo */
		{
		yy_cp = (yy_c_buf_p);

		/* Soporte de yytext. */
		*yy_cp = (yy_hold_char);

		/* yy_bp apunta a la posición en yy_ch_buf del inicio de
		 * la ejecución actual.
		 */
		yy_bp = yy_cp;

		yy_current_state = (yy_start);
yy_match:
		do
			{
			YY_CHAR yy_c = yy_ec[YY_SC_TO_UI(*yy_cp)] ;
			if ( yy_accept[yy_current_state] )
				{
				(yy_last_accepting_state) = yy_current_state;
				(yy_last_accepting_cpos) = yy_cp;
				}
			while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
				{
				yy_current_state = (int) yy_def[yy_current_state];
				if ( yy_current_state >= 164 )
					yy_c = yy_meta[yy_c];
				}
			yy_current_state = yy_nxt[yy_base[yy_current_state] + yy_c];
			++yy_cp;
			}
		while ( yy_base[yy_current_state] != 427 );

yy_find_action:
		yy_act = yy_accept[yy_current_state];
		if ( yy_act == 0 )
			{ /* tengo que retroceder */
			yy_cp = (yy_last_accepting_cpos);
			yy_current_state = (yy_last_accepting_state);
			yy_act = yy_accept[yy_current_state];
			}

		YY_DO_BEFORE_ACTION;

do_action:	/* Esta etiqueta se usa solo para acceder a las acciones EOF. */

		switch ( yy_act )
	{ /*interruptor de inicio de acción */
			case 0: /* debe retroceder */
			/* deshacer los efectos de YY_DO_BEFORE_ACTION */
			*yy_cp = (yy_hold_char);
			yy_cp = (yy_last_accepting_cpos);
			yy_current_state = (yy_last_accepting_state);
			goto yy_find_action;

case 1:
YY_RULE_SETUP
#line 41 "analizador.lex"
{printf("tok_Tipo_dato (%s) ", yytext);}
	YY_BREAK
case 2:
YY_RULE_SETUP
#line 43 "analizador.lex"
{printf("tok_Comentario (%s) ", yytext);}
	YY_BREAK
case 3:
YY_RULE_SETUP
#line 45 "analizador.lex"
{printf("tok_Libreria (%s) ", yytext);}
	YY_BREAK
case 4:
YY_RULE_SETUP
#line 47 "analizador.lex"
{printf("tok_Abre_parentesis (%s) ", yytext);}
	YY_BREAK
case 5:
YY_RULE_SETUP
#line 48 "analizador.lex"
{printf("tok_Cierra_parentesis (%s) ", yytext);}
	YY_BREAK
case 6:
YY_RULE_SETUP
#line 50 "analizador.lex"
{printf("tok_Comillas (%s) ", yytext);}
	YY_BREAK
case 7:
YY_RULE_SETUP
#line 52 "analizador.lex"
{printf("tok_Modulo (%s) ", yytext);}
	YY_BREAK
case 8:
YY_RULE_SETUP
#line 54 "analizador.lex"
{printf("tok_Punto (%s) ", yytext);}
	YY_BREAK
case 9:
YY_RULE_SETUP
#line 56 "analizador.lex"
{printf("tok_Abre_llaves (%s) ", yytext);}
	YY_BREAK
case 10:
YY_RULE_SETUP
#line 57 "analizador.lex"
{printf("tok_Cierra_llaves (%s) ", yytext);}
	YY_BREAK
case 11:
YY_RULE_SETUP
#line 59 "analizador.lex"
{printf("tok_Desplaza_izq (%s) ", yytext);}
	YY_BREAK
case 12:
YY_RULE_SETUP
#line 60 "analizador.lex"
{printf("tok_Desplaza_der (%s) ", yytext);}
	YY_BREAK
case 13:
YY_RULE_SETUP
#line 62 "analizador.lex"
{printf("tok_Menor (%s) ", yytext);}
	YY_BREAK
case 14:
YY_RULE_SETUP
#line 63 "analizador.lex"
{printf("tok_Mayor (%s) ", yytext);}
	YY_BREAK
case 15:
YY_RULE_SETUP
#line 65 "analizador.lex"
{printf("tok_Menor_igual (%s) ", yytext);}
	YY_BREAK
case 16:
YY_RULE_SETUP
#line 66 "analizador.lex"
{printf("tok_Mayor_igual (%s) ", yytext);}
	YY_BREAK
case 17:
YY_RULE_SETUP
#line 68 "analizador.lex"
{printf("tok_Igual (%s) ", yytext);}
	YY_BREAK
case 18:
YY_RULE_SETUP
#line 69 "analizador.lex"
{printf("tok_No_igual (%s) ", yytext);}
	YY_BREAK
case 19:
YY_RULE_SETUP
#line 71 "analizador.lex"
{printf("tok_Negacion (%s) ", yytext);}
	YY_BREAK
case 20:
YY_RULE_SETUP
#line 73 "analizador.lex"
{printf("tok_Operador (%s) ", yytext);}
	YY_BREAK
case 21:
YY_RULE_SETUP
#line 75 "analizador.lex"
{printf("tok_Numeral (%s) ", yytext);}
	YY_BREAK
case 22:
YY_RULE_SETUP
#line 77 "analizador.lex"
{printf("tok_Palabra_reservada (%s) ", yytext);}
	YY_BREAK
case 23:
YY_RULE_SETUP
#line 79 "analizador.lex"
{printf("tok_Fin_linea (%s) ", yytext);}
	YY_BREAK
case 24:
YY_RULE_SETUP
#line 81 "analizador.lex"
{printf("tok_Entero (%s) ", yytext);}
	YY_BREAK
case 25:
YY_RULE_SETUP
#line 83 "analizador.lex"
{printf("tok_Decimal (%s) ", yytext);}
	YY_BREAK
case 26:
YY_RULE_SETUP
#line 85 "analizador.lex"
{printf("tok_Id (%s) ", yytext);}
	YY_BREAK
case 27:
YY_RULE_SETUP
#line 87 "analizador.lex"
printf("tok_Cadena_palabras (%s) ", yytext);
	YY_BREAK
case 28:
YY_RULE_SETUP
#line 89 "analizador.lex"
ECHO;
	YY_BREAK
#line 1016 "lex.yy.c"
case YY_STATE_EOF(INITIAL):
	yyterminate();

	case YY_END_OF_BUFFER:
		{
		/* Cantidad de texto coincidente sin incluir el carácter EOB. */
		int yy_amount_of_matched_text = (int) (yy_cp - (yytext_ptr)) - 1;

		/* Deshace los efectos de YY_DO_BEFORE_ACTION. */
		*yy_cp = (yy_hold_char);
		YY_RESTORE_YY_MORE_OFFSET

		if ( YY_CURRENT_BUFFER_LVALUE->yy_buffer_status == YY_BUFFER_NEW )
			{
			/* Estamos escaneando un nuevo archivo o fuente de entrada. Sus
			 * posible que esto sucediera porque el usuario
			 * solo señaló yyin a una nueva fuente y llamó
			 * yylex (). Si es así, tenemos que asegurarnos
			 * coherencia entre YY_CURRENT_BUFFER y nuestro
			 * globales. Este es el lugar adecuado para hacerlo, porque
			 * esta es la primera acción (que no sea posiblemente una
			 * copia de seguridad) que coincidirá con la nueva fuente de entrada. 
			 */
			(yy_n_chars) = YY_CURRENT_BUFFER_LVALUE->yy_n_chars;
			YY_CURRENT_BUFFER_LVALUE->yy_input_file = yyin;
			YY_CURRENT_BUFFER_LVALUE->yy_buffer_status = YY_BUFFER_NORMAL;
			}

		/* Tenga en cuenta que aquí probamos para yy_c_buf_p "<=" a la posición
		 * del primer EOB en el búfer, ya que yy_c_buf_p
		 * ya se ha incrementado más allá del carácter NUL
		 * (dado que todos los estados hacen transiciones de EOB a
		 * estado de fin de búfer). Compare esto con la prueba
		 * en entrada ().
		 */
		if ( (yy_c_buf_p) <= &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars)] )
			{ /* Esto fue realmente un NUL. */
			yy_state_type yy_next_state;

			(yy_c_buf_p) = (yytext_ptr) + yy_amount_of_matched_text;

			yy_current_state = yy_get_previous_state(  );

			/* Bien, ahora estamos posicionados para hacer el NUL
			 * transición. No pudimos tener
			 * yy_get_previous_state () adelante y hazlo
			 * para nosotros porque no sabe cómo tratar
			 * con posibilidad de interferencias (y no
			 * quiero incorporar jamming en él porque entonces
			 * funcionará más lentamente). 
			 */

			yy_next_state = yy_try_NUL_trans( yy_current_state );

			yy_bp = (yytext_ptr) + YY_MORE_ADJ;

			if ( yy_next_state )
				{
				/* Consume the NUL. */
				yy_cp = ++(yy_c_buf_p);
				yy_current_state = yy_next_state;
				goto yy_match;
				}

			else
				{
				yy_cp = (yy_c_buf_p);
				goto yy_find_action;
				}
			}

		else switch ( yy_get_next_buffer(  ) )
			{
			case EOB_ACT_END_OF_FILE:
				{
				(yy_did_buffer_switch_on_eof) = 0;

				if ( yywrap(  ) )
					{
					/* Nota: porque nos hemos cuidado en
					* yy_get_next_buffer () para haber configurado
					* yytext, ahora podemos configurar
					* yy_c_buf_p de modo que si algo total
					* hoser (como el propio flex) quiere
					* llamar al escáner después de devolver el
					* YY_NULL, seguirá funcionando, otro
					* Se devolverá YY_NULL.
					 */
					(yy_c_buf_p) = (yytext_ptr) + YY_MORE_ADJ;

					yy_act = YY_STATE_EOF(YY_START);
					goto do_action;
					}

				else
					{
					if ( ! (yy_did_buffer_switch_on_eof) )
						YY_NEW_FILE;
					}
				break;
				}

			case EOB_ACT_CONTINUE_SCAN:
				(yy_c_buf_p) =
					(yytext_ptr) + yy_amount_of_matched_text;

				yy_current_state = yy_get_previous_state(  );

				yy_cp = (yy_c_buf_p);
				yy_bp = (yytext_ptr) + YY_MORE_ADJ;
				goto yy_match;

			case EOB_ACT_LAST_MATCH:
				(yy_c_buf_p) =
				&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars)];

				yy_current_state = yy_get_previous_state(  );

				yy_cp = (yy_c_buf_p);
				yy_bp = (yytext_ptr) + YY_MORE_ADJ;
				goto yy_find_action;
			}
		break;
		}

	default:
		YY_FATAL_ERROR(
			"fatal flex scanner internal error--no action found" );
	} /* interruptor de fin de acción  */
		} /* fin de escanear un token */
	} /* fin de las declaraciones del usuario  */
} /* fin de yylex */

/* yy_get_next_buffer - intenta leer en un nuevo búfer
 *
 * Devuelve un código que representa una acción:
 * EOB_ACT_LAST_MATCH -
 * EOB_ACT_CONTINUE_SCAN - continuar escaneando desde la posición actual
 * EOB_ACT_END_OF_FILE - final del archivo
 */
static int yy_get_next_buffer (void)
{
    	char *dest = YY_CURRENT_BUFFER_LVALUE->yy_ch_buf;
	char *source = (yytext_ptr);
	int number_to_move, i;
	int ret_val;

	if ( (yy_c_buf_p) > &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars) + 1] )
		YY_FATAL_ERROR(
		"fatal flex scanner internal error--end of buffer missed" );

	if ( YY_CURRENT_BUFFER_LVALUE->yy_fill_buffer == 0 )
		{ /* No intente llenar el búfer, entonces esto es un EOF. */
		if ( (yy_c_buf_p) - (yytext_ptr) - YY_MORE_ADJ == 1 )
			{
			/* Coincidimos con un solo carácter, el EOB, por lo que
			 * Trate esto como un EOF final.
			 */
			return EOB_ACT_END_OF_FILE;
			}

		else
			{
			/* Coincidimos con algún texto antes de la EOB, primero
			 * procesalo.
			 */
			return EOB_ACT_LAST_MATCH;
			}
		}

	/* Intente leer más datos. */

	/* Primero mueva los últimos caracteres al inicio del búfer. */
	number_to_move = (int) ((yy_c_buf_p) - (yytext_ptr) - 1);

	for ( i = 0; i < number_to_move; ++i )
		*(dest++) = *(source++);

	if ( YY_CURRENT_BUFFER_LVALUE->yy_buffer_status == YY_BUFFER_EOF_PENDING )
		/* no haga la lectura, no se garantiza que devuelva un EOF,
		 * solo fuerza un EOF
		 */
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = (yy_n_chars) = 0;

	else
		{
			int num_to_read =
			YY_CURRENT_BUFFER_LVALUE->yy_buf_size - number_to_move - 1;

		while ( num_to_read <= 0 )
			{ /* No hay suficiente espacio en el búfer, hágalo crecer. */

			/* solo un nombre más corto para el búfer actual */
			YY_BUFFER_STATE b = YY_CURRENT_BUFFER_LVALUE;

			int yy_c_buf_p_offset =
				(int) ((yy_c_buf_p) - b->yy_ch_buf);

			if ( b->yy_is_our_buffer )
				{
				int new_size = b->yy_buf_size * 2;

				if ( new_size <= 0 )
					b->yy_buf_size += b->yy_buf_size / 8;
				else
					b->yy_buf_size *= 2;

				b->yy_ch_buf = (char *)
					/* Incluya espacio para 2 caracteres EOB. */
					yyrealloc( (void *) b->yy_ch_buf,
							 (yy_size_t) (b->yy_buf_size + 2)  );
				}
			else
				/* No podemos cultivarlo, no lo poseemos. */
				b->yy_ch_buf = NULL;

			if ( ! b->yy_ch_buf )
				YY_FATAL_ERROR(
				"fatal error - scanner input buffer overflow" );

			(yy_c_buf_p) = &b->yy_ch_buf[yy_c_buf_p_offset];

			num_to_read = YY_CURRENT_BUFFER_LVALUE->yy_buf_size -
						number_to_move - 1;

			}

		if ( num_to_read > YY_READ_BUF_SIZE )
			num_to_read = YY_READ_BUF_SIZE;

		/* Leer más datos. */
		YY_INPUT( (&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[number_to_move]),
			(yy_n_chars), num_to_read );

		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = (yy_n_chars);
		}

	if ( (yy_n_chars) == 0 )
		{
		if ( number_to_move == YY_MORE_ADJ )
			{
			ret_val = EOB_ACT_END_OF_FILE;
			yyrestart( yyin  );
			}

		else
			{
			ret_val = EOB_ACT_LAST_MATCH;
			YY_CURRENT_BUFFER_LVALUE->yy_buffer_status =
				YY_BUFFER_EOF_PENDING;
			}
		}

	else
		ret_val = EOB_ACT_CONTINUE_SCAN;

	if (((yy_n_chars) + number_to_move) > YY_CURRENT_BUFFER_LVALUE->yy_buf_size) {
		/* Extiende la matriz en un 50%, más el número que realmente necesitamos. */
		int new_size = (yy_n_chars) + number_to_move + ((yy_n_chars) >> 1);
		YY_CURRENT_BUFFER_LVALUE->yy_ch_buf = (char *) yyrealloc(
			(void *) YY_CURRENT_BUFFER_LVALUE->yy_ch_buf, (yy_size_t) new_size  );
		if ( ! YY_CURRENT_BUFFER_LVALUE->yy_ch_buf )
			YY_FATAL_ERROR( "out of dynamic memory in yy_get_next_buffer()" );
		/* "- 2" para cuidar de los EOB */
		YY_CURRENT_BUFFER_LVALUE->yy_buf_size = (int) (new_size - 2);
	}

	(yy_n_chars) += number_to_move;
	YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars)] = YY_END_OF_BUFFER_CHAR;
	YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars) + 1] = YY_END_OF_BUFFER_CHAR;

	(yytext_ptr) = &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[0];

	return ret_val;
}

/* yy_get_previous_state: obtiene el estado justo antes de que se alcanzara el carácter EOB */

    static yy_state_type yy_get_previous_state (void)
{
	yy_state_type yy_current_state;
	char *yy_cp;
    
	yy_current_state = (yy_start);

	for ( yy_cp = (yytext_ptr) + YY_MORE_ADJ; yy_cp < (yy_c_buf_p); ++yy_cp )
		{
		YY_CHAR yy_c = (*yy_cp ? yy_ec[YY_SC_TO_UI(*yy_cp)] : 1);
		if ( yy_accept[yy_current_state] )
			{
			(yy_last_accepting_state) = yy_current_state;
			(yy_last_accepting_cpos) = yy_cp;
			}
		while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
			{
			yy_current_state = (int) yy_def[yy_current_state];
			if ( yy_current_state >= 164 )
				yy_c = yy_meta[yy_c];
			}
		yy_current_state = yy_nxt[yy_base[yy_current_state] + yy_c];
		}

	return yy_current_state;
}

/* yy_try_NUL_trans: intente hacer una transición en el carácter NUL
 *
 * sinopsis
 * next_state = yy_try_NUL_trans (current_state);
 */
    static yy_state_type yy_try_NUL_trans  (yy_state_type yy_current_state )
{
	int yy_is_jam;
    	char *yy_cp = (yy_c_buf_p);

	YY_CHAR yy_c = 1;
	if ( yy_accept[yy_current_state] )
		{
		(yy_last_accepting_state) = yy_current_state;
		(yy_last_accepting_cpos) = yy_cp;
		}
	while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
		{
		yy_current_state = (int) yy_def[yy_current_state];
		if ( yy_current_state >= 164 )
			yy_c = yy_meta[yy_c];
		}
	yy_current_state = yy_nxt[yy_base[yy_current_state] + yy_c];
	yy_is_jam = (yy_current_state == 163);

		return yy_is_jam ? 0 : yy_current_state;
}

#ifndef YY_NO_UNPUT

    static void yyunput (int c, char * yy_bp )
{
	char *yy_cp;
    
    yy_cp = (yy_c_buf_p);

	/*deshacer los efectos de configurar yytext */
	*yy_cp = (yy_hold_char);

	if ( yy_cp < YY_CURRENT_BUFFER_LVALUE->yy_ch_buf + 2 )
		{ /* Necesito cambiar las cosas para hacer espacio * /
  		/ * +2 para caracteres EOB. */
		int number_to_move = (yy_n_chars) + 2;
		char *dest = &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[
					YY_CURRENT_BUFFER_LVALUE->yy_buf_size + 2];
		char *source =
				&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[number_to_move];

		while ( source > YY_CURRENT_BUFFER_LVALUE->yy_ch_buf )
			*--dest = *--source;

		yy_cp += (int) (dest - source);
		yy_bp += (int) (dest - source);
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars =
			(yy_n_chars) = (int) YY_CURRENT_BUFFER_LVALUE->yy_buf_size;

		if ( yy_cp < YY_CURRENT_BUFFER_LVALUE->yy_ch_buf + 2 )
			YY_FATAL_ERROR( "flex scanner push-back overflow" );
		}

	*--yy_cp = (char) c;

	(yytext_ptr) = yy_bp;
	(yy_hold_char) = *yy_cp;
	(yy_c_buf_p) = yy_cp;
}

#endif

#ifndef YY_NO_INPUT
#ifdef __cplusplus
    static int yyinput (void)
#else
    static int input  (void)
#endif

{
	int c;
    
	*(yy_c_buf_p) = (yy_hold_char);

	if ( *(yy_c_buf_p) == YY_END_OF_BUFFER_CHAR )
		{
		/* yy_c_buf_p ahora apunta al carácter que queremos devolver.
		 * Si esto ocurre * antes * de los caracteres EOB, entonces es un
		 * NUL válido; si no, llegamos al final del búfer.
		 */
		if ( (yy_c_buf_p) < &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars)] )
			/* Esto fue realmente un NUL. */
			*(yy_c_buf_p) = '\0';

		else
			{ /* necesita más información */
			int offset = (int) ((yy_c_buf_p) - (yytext_ptr));
			++(yy_c_buf_p);

			switch ( yy_get_next_buffer(  ) )
				{
				case EOB_ACT_LAST_MATCH:
					/* Esto sucede porque yy_g_n_b ()
					* ve que hemos acumulado un
					* token y banderas que necesitamos
					* intente hacer coincidir el token antes
					* procediendo. Pero para input (),
					* no hay coincidencias para considerar.
					* Así que convierta el EOB_ACT_LAST_MATCH
					* a EOB_ACT_END_OF_FILE.
					 */

					/* Restablecer el estado del búfer.  */
					yyrestart( yyin );

					/*CAER A TRAVÉS*/

				case EOB_ACT_END_OF_FILE:
					{
					if ( yywrap(  ) )
						return 0;

					if ( ! (yy_did_buffer_switch_on_eof) )
						YY_NEW_FILE;
#ifdef __cplusplus
					return yyinput();
#else
					return input();
#endif
					}

				case EOB_ACT_CONTINUE_SCAN:
					(yy_c_buf_p) = (yytext_ptr) + offset;
					break;
				}
			}
		}

	c = *(unsigned char *) (yy_c_buf_p);	/*emitir para caracteres de 8 bits */
	*(yy_c_buf_p) = '\0';	/* preservar yytext*/
	(yy_hold_char) = *++(yy_c_buf_p);

	return c;
}
#endif	/* ifndef YY_NO_INPUT */

/** Cambie inmediatamente a un flujo de entrada diferente.
 * @param input_file Una secuencia legible.
 * 
 * @nota Esta función no restablece la condición de inicio a @c INITIAL.
 */
    void yyrestart  (FILE * input_file )
{
    
	if ( ! YY_CURRENT_BUFFER ){
        yyensure_buffer_stack ();
		YY_CURRENT_BUFFER_LVALUE =
            yy_create_buffer( yyin, YY_BUF_SIZE );
	}

	yy_init_buffer( YY_CURRENT_BUFFER, input_file );
	yy_load_buffer_state(  );
}

/** Cambie a un búfer de entrada diferente.
 * @param new_buffer El nuevo búfer de entrada.
 * 
 */
    void yy_switch_to_buffer  (YY_BUFFER_STATE  new_buffer )
{
    
	/* QUE HACER. Deberíamos poder reemplazar todo este cuerpo funcional
	 * con
	 * yypop_buffer_state ();
	 * yypush_buffer_state (new_buffer);
     */
	yyensure_buffer_stack ();
	if ( YY_CURRENT_BUFFER == new_buffer )
		return;

	if ( YY_CURRENT_BUFFER )
		{
		/* Elimina la información del búfer antiguo. */
		*(yy_c_buf_p) = (yy_hold_char);
		YY_CURRENT_BUFFER_LVALUE->yy_buf_pos = (yy_c_buf_p);
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = (yy_n_chars);
		}

	YY_CURRENT_BUFFER_LVALUE = new_buffer;
	yy_load_buffer_state(  );

	/*En realidad, no sabemos si hicimos este cambio durante
	 * Procesamiento EOF (yywrap ()), pero la única vez que esta bandera
	 * se mira después de llamar a yywrap (), por lo que es seguro
	 * para seguir adelante y configurarlo siempre. 
	 */
	(yy_did_buffer_switch_on_eof) = 1;
}

static void yy_load_buffer_state  (void)
{
    	(yy_n_chars) = YY_CURRENT_BUFFER_LVALUE->yy_n_chars;
	(yytext_ptr) = (yy_c_buf_p) = YY_CURRENT_BUFFER_LVALUE->yy_buf_pos;
	yyin = YY_CURRENT_BUFFER_LVALUE->yy_input_file;
	(yy_hold_char) = *(yy_c_buf_p);
}

/** Asignar e inicializar un estado de búfer de entrada.
 * Archivo @param Una secuencia legible.
 * @param size El tamaño del búfer de caracteres en bytes. En caso de duda, utilice @c YY_BUF_SIZE.
 *
 * @return el estado del búfer asignado.
 */
    YY_BUFFER_STATE yy_create_buffer  (FILE * file, int  size )
{
	YY_BUFFER_STATE b;
    
	b = (YY_BUFFER_STATE) yyalloc( sizeof( struct yy_buffer_state )  );
	if ( ! b )
		YY_FATAL_ERROR( "out of dynamic memory in yy_create_buffer()" );

	b->yy_buf_size = size;

	/* yy_ch_buf tiene que tener 2 caracteres más que el tamaño dado porque
	 * Necesitamos poner 2 caracteres de fin de búfer.
	 */
	b->yy_ch_buf = (char *) yyalloc( (yy_size_t) (b->yy_buf_size + 2)  );
	if ( ! b->yy_ch_buf )
		YY_FATAL_ERROR( "out of dynamic memory in yy_create_buffer()" );

	b->yy_is_our_buffer = 1;

	yy_init_buffer( b, file );

	return b;
}

/**Destruye el búfer.
 * @param b un búfer creado con yy_create_buffer ()
 *
 */
    void yy_delete_buffer (YY_BUFFER_STATE  b )
{
    
	if ( ! b )
		return;

	if ( b == YY_CURRENT_BUFFER ) /* No estoy seguro de si deberíamos aparecer aquí. */
		YY_CURRENT_BUFFER_LVALUE = (YY_BUFFER_STATE) 0;

	if ( b->yy_is_our_buffer )
		yyfree( (void *) b->yy_ch_buf  );

	yyfree( (void *) b  );
}

/* Inicializa o reinicializa un búfer.
 * Esta función a veces se llama más de una vez en el mismo búfer,
 * como durante un yyrestart () o en EOF.
 */
    static void yy_init_buffer  (YY_BUFFER_STATE  b, FILE * file )

{
	int oerrno = errno;
    
	yy_flush_buffer( b );

	b->yy_input_file = file;
	b->yy_fill_buffer = 1;

    /* Si b es el búfer actual, entonces yy_init_buffer era _probablemente_
     * llamado desde yyrestart () o mediante yy_get_next_buffer.
     * En ese caso, no queremos restablecer el lineno o la columna.
     */
    if (b != YY_CURRENT_BUFFER){
        b->yy_bs_lineno = 1;
        b->yy_bs_column = 0;
    }

        b->yy_is_interactive = file ? (isatty( fileno(file) ) > 0) : 0;
    
	errno = oerrno;
}

/** Descartar todos los caracteres almacenados en búfer. En el siguiente escaneo, se llamará a YY_INPUT.
 * @param b el estado del búfer que se va a limpiar, generalmente @c YY_CURRENT_BUFFER.
 *
 */
    void yy_flush_buffer (YY_BUFFER_STATE  b )
{
    	if ( ! b )
		return;

	b->yy_n_chars = 0;

	/* Siempre necesitamos dos caracteres de fin de búfer. Las primeras causas
 	 * una transición al estado de fin de búfer. La segunda causa
	 * un atasco en ese estado.
	 */
	b->yy_ch_buf[0] = YY_END_OF_BUFFER_CHAR;
	b->yy_ch_buf[1] = YY_END_OF_BUFFER_CHAR;

	b->yy_buf_pos = &b->yy_ch_buf[0];

	b->yy_at_bol = 1;
	b->yy_buffer_status = YY_BUFFER_NEW;

	if ( b == YY_CURRENT_BUFFER )
		yy_load_buffer_state(  );
}

/** Empuja el nuevo estado a la pila. El nuevo estado se convierte
 *  el estado actual. Esta función asignará la pila
 *  si necesario.
 * @param new_buffer El nuevo estado.
 *
 */
void yypush_buffer_state (YY_BUFFER_STATE new_buffer )
{
    	if (new_buffer == NULL)
		return;

	yyensure_buffer_stack();

	/* Este bloque se copia de yy_switch_to_buffer. */
	if ( YY_CURRENT_BUFFER )
		{
		/*Elimina la información del búfer antiguo. */
		*(yy_c_buf_p) = (yy_hold_char);
		YY_CURRENT_BUFFER_LVALUE->yy_buf_pos = (yy_c_buf_p);
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = (yy_n_chars);
		}

	/*Empuje solo si la parte superior existe. De lo contrario, reemplace la parte superior. */
	if (YY_CURRENT_BUFFER)
		(yy_buffer_stack_top)++;
	YY_CURRENT_BUFFER_LVALUE = new_buffer;

	/* copiado de yy_switch_to_buffer. */
	yy_load_buffer_state(  );
	(yy_did_buffer_switch_on_eof) = 1;
}

/** Elimina y elimina la parte superior de la pila, si está presente.
 * El siguiente elemento se convierte en la nueva tapa.
 *  
 */
void yypop_buffer_state (void)
{
    	if (!YY_CURRENT_BUFFER)
		return;

	yy_delete_buffer(YY_CURRENT_BUFFER );
	YY_CURRENT_BUFFER_LVALUE = NULL;
	if ((yy_buffer_stack_top) > 0)
		--(yy_buffer_stack_top);

	if (YY_CURRENT_BUFFER) {
		yy_load_buffer_state(  );
		(yy_did_buffer_switch_on_eof) = 1;
	}
}

/* Asigna la pila si no existe.
 * Garantiza espacio para al menos un empujón.
 */
static void yyensure_buffer_stack (void)
{
	yy_size_t num_to_alloc;
    
	if (!(yy_buffer_stack)) {

		/* La primera asignación es solo para 2 elementos, ya que no sabemos si esto
		 * el escáner incluso necesitará una pila. Usamos 2 en lugar de 1 para evitar un
		 * reasignación inmediata en la próxima llamada.
         */
      num_to_alloc = 1; /* Después de toda esa charla, esto se estableció en 1 de todos modos ...*/
		(yy_buffer_stack) = (struct yy_buffer_state**)yyalloc
								(num_to_alloc * sizeof(struct yy_buffer_state*)
								);
		if ( ! (yy_buffer_stack) )
			YY_FATAL_ERROR( "out of dynamic memory in yyensure_buffer_stack()" );

		memset((yy_buffer_stack), 0, num_to_alloc * sizeof(struct yy_buffer_state*));

		(yy_buffer_stack_max) = num_to_alloc;
		(yy_buffer_stack_top) = 0;
		return;
	}

	if ((yy_buffer_stack_top) >= ((yy_buffer_stack_max)) - 1){

		/* Aumente el búfer para prepararse para un posible empujón. */
		yy_size_t grow_size = 8 /* tamaño de crecimiento arbitrario  */;

		num_to_alloc = (yy_buffer_stack_max) + grow_size;
		(yy_buffer_stack) = (struct yy_buffer_state**)yyrealloc
								((yy_buffer_stack),
								num_to_alloc * sizeof(struct yy_buffer_state*)
								);
		if ( ! (yy_buffer_stack) )
			YY_FATAL_ERROR( "out of dynamic memory in yyensure_buffer_stack()" );

		/* cero sólo las nuevas ranuras. */
		memset((yy_buffer_stack) + (yy_buffer_stack_max), 0, grow_size * sizeof(struct yy_buffer_state*));
		(yy_buffer_stack_max) = num_to_alloc;
	}
}

/** Configure el estado del búfer de entrada para escanear directamente desde un búfer de caracteres especificado por el usuario.
 * @param base el búfer de caracteres
 * @param size el tamaño en bytes del búfer de caracteres
 * 
 * @return el objeto de estado del búfer recién asignado.
 */
YY_BUFFER_STATE yy_scan_buffer  (char * base, yy_size_t  size )
{
	YY_BUFFER_STATE b;
    
	if ( size < 2 ||
	     base[size-2] != YY_END_OF_BUFFER_CHAR ||
	     base[size-1] != YY_END_OF_BUFFER_CHAR )
		/* Ellos olvidaron dejar espacio para los EOB. */
		return NULL;

	b = (YY_BUFFER_STATE) yyalloc( sizeof( struct yy_buffer_state )  );
	if ( ! b )
		YY_FATAL_ERROR( "out of dynamic memory in yy_scan_buffer()" );

	b->yy_buf_size = (int) (size - 2);	/* "- 2" to take care of EOB's */
	b->yy_buf_pos = b->yy_ch_buf = base;
	b->yy_is_our_buffer = 0;
	b->yy_input_file = NULL;
	b->yy_n_chars = b->yy_buf_size;
	b->yy_is_interactive = 0;
	b->yy_at_bol = 1;
	b->yy_fill_buffer = 0;
	b->yy_buffer_status = YY_BUFFER_NEW;

	yy_switch_to_buffer( b  );

	return b;
}

/** Configure el estado del búfer de entrada para escanear una cadena. La próxima llamada a yylex () será
 * escanear desde una copia @e de @a str.
 * @param yystr una cadena terminada en NUL para escanear
 * 
 * @return el objeto de estado del búfer recién asignado.
 * @note Si desea escanear bytes que pueden contener valores NUL, utilice
 * yy_scan_bytes () en su lugar.
 */
YY_BUFFER_STATE yy_scan_string (const char * yystr )
{
    
	return yy_scan_bytes( yystr, (int) strlen(yystr) );
}

/** Configure el estado del búfer de entrada para escanear los bytes dados. La próxima llamada a yylex () será
 * escanear desde una copia @e de @a bytes.
 * @param yybytes el búfer de bytes para escanear
 * @param _yybytes_len el número de bytes en el búfer al que apunta @a bytes.
 * 
 * @return el objeto de estado del búfer recién asignado.
 */
YY_BUFFER_STATE yy_scan_bytes  (const char * yybytes, int  _yybytes_len )
{
	YY_BUFFER_STATE b;
	char *buf;
	yy_size_t n;
	int i;
    
	/* Obtenga memoria para el búfer completo, incluido el espacio para los EOB finales. */
	n = (yy_size_t) (_yybytes_len + 2);
	buf = (char *) yyalloc( n  );
	if ( ! buf )
		YY_FATAL_ERROR( "out of dynamic memory in yy_scan_bytes()" );

	for ( i = 0; i < _yybytes_len; ++i )
		buf[i] = yybytes[i];

	buf[_yybytes_len] = buf[_yybytes_len+1] = YY_END_OF_BUFFER_CHAR;

	b = yy_scan_buffer( buf, n );
	if ( ! b )
		YY_FATAL_ERROR( "bad buffer in yy_scan_bytes()" );

	/* Está bien hacer crecer, etc., este búfer, y deberíamos lanzarlo
     * lejos cuando hayamos terminado.
	 */
	b->yy_is_our_buffer = 1;

	return b;
}

#ifndef YY_EXIT_FAILURE
#define YY_EXIT_FAILURE 2
#endif

static void yynoreturn yy_fatal_error (const char* msg )
{
			fprintf( stderr, "%s\n", msg );
	exit( YY_EXIT_FAILURE );
}

/* Redefina yyless () para que funcione en el código de la sección 3.  */

#undef yyless
#define yyless(n) \
	do \
		{ \
		/* Deshace los efectos de configurar yytext.*/ \
        int yyless_macro_arg = (n); \
        YY_LESS_LINENO(yyless_macro_arg);\
		yytext[yyleng] = (yy_hold_char); \
		(yy_c_buf_p) = yytext + yyless_macro_arg; \
		(yy_hold_char) = *(yy_c_buf_p); \
		*(yy_c_buf_p) = '\0'; \
		yyleng = yyless_macro_arg; \
		} \
	while ( 0 )

/* Métodos de acceso (funciones get / set) para estructurar miembros. */

/** 
 * Obtenga el número de línea actual.
 */
int yyget_lineno  (void)
{
    
    return yylineno;
}

/** 
 * Obtén el flujo de entrada.
 */
FILE *yyget_in  (void)
{
        return yyin;
}

/** 
 * Obtenga el flujo de salida.
 */
FILE *yyget_out  (void)
{
        return yyout;
}

/** 
 * Obtiene la longitud del token actual.
 */
int yyget_leng  (void)
{
        return yyleng;
}

/** Obtén el token actual.
 */

char *yyget_text  (void)
{
        return yytext;
}

/** Configure el número de línea actual.
 * @param _line_number 
 * 
 */
void yyset_lineno (int  _line_number )
{
    
    yylineno = _line_number;
}

/** Configure el flujo de entrada. Esto no descarta la corriente
 * búfer de entrada.
 * @param _in_str Una secuencia legible.
 * 
 * @see yy_switch_to_buffer
 */
void yyset_in (FILE *  _in_str )
{
        yyin = _in_str ;
}

void yyset_out (FILE *  _out_str )
{
        yyout = _out_str ;
}

int yyget_debug  (void)
{
        return yy_flex_debug;
}

void yyset_debug (int  _bdebug )
{
        yy_flex_debug = _bdebug ;
}

static int yy_init_globals (void)
{
        /*La inicialización es la misma que para el escáner no reentrante.
         Esta función se llama desde yylex_destroy (), así que no asigne aquí. 
		*/

    (yy_buffer_stack) = NULL;
    (yy_buffer_stack_top) = 0;
    (yy_buffer_stack_max) = 0;
    (yy_c_buf_p) = NULL;
    (yy_init) = 0;
    (yy_start) = 0;

/* Definido en main.c */
#ifdef YY_STDINIT
    yyin = stdin;
    yyout = stdout;
#else
    yyin = NULL;
    yyout = NULL;
#endif

    /* Para referencia futura: establezca errno en error, ya que nos llama
     * yylex_init ()
     */
    return 0;
}

/* yylex_destroy es para escáneres reentrantes y no reentrantes. */
int yylex_destroy  (void)
{
    
    /*	Revienta la pila de búfer, destruyendo cada elemento.  */
	while(YY_CURRENT_BUFFER){
		yy_delete_buffer( YY_CURRENT_BUFFER  );
		YY_CURRENT_BUFFER_LVALUE = NULL;
		yypop_buffer_state();
	}

	/* Destruye la propia pila. */
	yyfree((yy_buffer_stack) );
	(yy_buffer_stack) = NULL;

    /* Restablezca los globales. Esto es importante en un escáner no reentrante, por lo que la próxima vez
     * yylex () es llamado, ocurrirá la inicialización. */
    yy_init_globals( );

    return 0;
}

/*
 * Rutinas de servicios internos.
 */

#ifndef yytext_ptr
static void yy_flex_strncpy (char* s1, const char * s2, int n )
{
		
	int i;
	for ( i = 0; i < n; ++i )
		s1[i] = s2[i];
}
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen (const char * s )
{
	int n;
	for ( n = 0; s[n]; ++n )
		;

	return n;
}
#endif

void *yyalloc (yy_size_t  size )
{
			return malloc(size);
}

void *yyrealloc  (void * ptr, yy_size_t  size )
{
		
	/* El elenco de (char *) en el siguiente acomoda tanto
	 * implementaciones que usan char * punteros genéricos, y aquellos
	 * que usan punteros genéricos vacíos *. Funciona con este último
	 * porque tanto ANSI C como C ++ permiten la asignación sin transmisión desde
	 * cualquier tipo de puntero para anular * y lidiar con conversiones de argumentos
	 * como si estuviera haciendo una tarea.
	 */
	return realloc(ptr, size);
}

void yyfree (void * ptr )
{
			free( (char *) ptr );	
}

#define YYTABLES_NAME "yytables"

#line 89 "analizador.lex"

main( int argc,char *argv[]){
	
	if ( argc == 2 ){
		yyin = fopen( argv[1], "r" );
	}
	if ( argc == 3){
		yyin = fopen( argv[1], "r" );
		yyout = fopen( argv[2], "w" );
	}
	else{
		yyin = stdin;
	}
	yylex();
	return 0;	
}
