/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

union _1_main_$node;
struct _IO_FILE;
struct timeval;
enum _1_main_$op;
extern float strtof(char const   *str , char const   *endptr ) ;
extern void signal(int sig , void *func ) ;
typedef unsigned long size_t;
typedef struct _IO_FILE FILE;
extern double strtod(char const   *str , char const   *endptr ) ;
extern int fclose(void *stream ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern void abort() ;
enum _1_main_$op {
    _1_main__convert_char2int$left_STA_0$result_STA_0 = 214,
    _1_main__convert_int2unsigned_long$left_STA_0$result_STA_0 = 254,
    _1_main__PlusPI_void_star_int2void_star$right_STA_0$result_STA_0$left_STA_1 = 239,
    _1_main__store_unsigned_long$right_STA_0$left_STA_1 = 124,
    _1_main__return_int$expr_STA_0 = 34,
    _1_main__store_char$right_STA_0$left_STA_1 = 175,
    _1_main__MinusA_int_int2int$left_STA_0$result_STA_0$right_STA_1 = 108,
    _1_main__load_unsigned_long$left_STA_0$result_STA_0 = 240,
    _1_main__constant_void_star$result_STA_0$value_LIT_0 = 150,
    _1_main__load_int$left_STA_0$result_STA_0 = 233,
    _1_main__Mult_unsigned_long_unsigned_long2unsigned_long$right_STA_0$result_STA_0$left_STA_1 = 191,
    _1_main__Ne_int_int2int$left_STA_0$result_STA_0$right_STA_1 = 166,
    _1_main__label$label_LAB_0 = 85,
    _1_main__convert_unsigned_long2int$left_STA_0$result_STA_0 = 212,
    _1_main__store_void_star$right_STA_0$left_STA_1 = 31,
    _1_main__constant_int$result_STA_0$value_LIT_0 = 7,
    _1_main__Lt_int_int2int$right_STA_0$result_STA_0$left_STA_1 = 105,
    _1_main__string$result_STA_0$value_LIT_0 = 22,
    _1_main__goto$label_LAB_0 = 55,
    _1_main__Eq_int_int2int$right_STA_0$result_STA_0$left_STA_1 = 33,
    _1_main__convert_int2char$left_STA_0$result_STA_0 = 60,
    _1_main__store_int$right_STA_0$left_STA_1 = 125,
    _1_main__branchIfTrue$expr_STA_0$label_LAB_0 = 15,
    _1_main__load_char$left_STA_0$result_STA_0 = 132,
    _1_main__PlusA_int_int2int$right_STA_0$result_STA_0$left_STA_1 = 89,
    _1_main__constant_unsigned_long$result_STA_0$value_LIT_0 = 94,
    _1_main__call$func_LIT_0 = 58,
    _1_main__Mod_int_int2int$right_STA_0$result_STA_0$left_STA_1 = 241,
    _1_main__local$result_STA_0$value_LIT_0 = 252,
    _1_main__convert_void_star2void_star$left_STA_0$result_STA_0 = 137,
    _1_main__PlusPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1 = 235
} ;
unsigned char _1_main_$array[1][549]  = { {        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__constant_int$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__store_int$right_STA_0$left_STA_1,        _1_main__local$result_STA_0$value_LIT_0, 
            (unsigned char)8,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)16,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)1, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__Mult_unsigned_long_unsigned_long2unsigned_long$right_STA_0$result_STA_0$left_STA_1, 
            _1_main__constant_void_star$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__PlusPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1,        _1_main__PlusPI_void_star_int2void_star$right_STA_0$result_STA_0$left_STA_1,        _1_main__store_void_star$right_STA_0$left_STA_1, 
            _1_main__call$func_LIT_0,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__call$func_LIT_0,        (unsigned char)2,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__goto$label_LAB_0,        (unsigned char)4, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__constant_int$result_STA_0$value_LIT_0, 
            (unsigned char)35,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)16,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)1, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__Mult_unsigned_long_unsigned_long2unsigned_long$right_STA_0$result_STA_0$left_STA_1, 
            _1_main__constant_void_star$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__PlusPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1,        _1_main__PlusPI_void_star_int2void_star$right_STA_0$result_STA_0$left_STA_1,        _1_main__load_char$left_STA_0$result_STA_0, 
            _1_main__convert_char2int$left_STA_0$result_STA_0,        _1_main__Ne_int_int2int$left_STA_0$result_STA_0$right_STA_1,        _1_main__branchIfTrue$expr_STA_0$label_LAB_0,        (unsigned char)14, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__goto$label_LAB_0, 
            (unsigned char)4,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__goto$label_LAB_0,        (unsigned char)156,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)80,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)16, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__constant_unsigned_long$result_STA_0$value_LIT_0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__Mult_unsigned_long_unsigned_long2unsigned_long$right_STA_0$result_STA_0$left_STA_1,        _1_main__constant_void_star$result_STA_0$value_LIT_0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__PlusPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1, 
            _1_main__PlusPI_void_star_int2void_star$right_STA_0$result_STA_0$left_STA_1,        _1_main__convert_void_star2void_star$left_STA_0$result_STA_0,        _1_main__store_void_star$right_STA_0$left_STA_1,        _1_main__call$func_LIT_0, 
            (unsigned char)3,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)88,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)96,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__load_unsigned_long$left_STA_0$result_STA_0,        _1_main__store_unsigned_long$right_STA_0$left_STA_1, 
            _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)104,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)88,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__load_unsigned_long$left_STA_0$result_STA_0,        _1_main__convert_unsigned_long2int$left_STA_0$result_STA_0, 
            _1_main__store_int$right_STA_0$left_STA_1,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)108,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__constant_int$result_STA_0$value_LIT_0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__store_int$right_STA_0$left_STA_1, 
            _1_main__goto$label_LAB_0,        (unsigned char)4,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)108,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__load_int$left_STA_0$result_STA_0,        _1_main__local$result_STA_0$value_LIT_0, 
            (unsigned char)104,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__load_int$left_STA_0$result_STA_0,        _1_main__Lt_int_int2int$right_STA_0$result_STA_0$left_STA_1,        _1_main__branchIfTrue$expr_STA_0$label_LAB_0,        (unsigned char)14, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__goto$label_LAB_0, 
            (unsigned char)4,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__goto$label_LAB_0,        (unsigned char)141,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)108,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__load_int$left_STA_0$result_STA_0,        _1_main__constant_int$result_STA_0$value_LIT_0, 
            (unsigned char)2,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__Mod_int_int2int$right_STA_0$result_STA_0$left_STA_1,        _1_main__constant_int$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__Eq_int_int2int$right_STA_0$result_STA_0$left_STA_1,        _1_main__branchIfTrue$expr_STA_0$label_LAB_0, 
            (unsigned char)9,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__goto$label_LAB_0,        (unsigned char)85,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)16,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)108, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__load_int$left_STA_0$result_STA_0, 
            _1_main__convert_int2unsigned_long$left_STA_0$result_STA_0,        _1_main__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__Mult_unsigned_long_unsigned_long2unsigned_long$right_STA_0$result_STA_0$left_STA_1,        _1_main__constant_void_star$result_STA_0$value_LIT_0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__PlusPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1,        _1_main__PlusPI_void_star_int2void_star$right_STA_0$result_STA_0$left_STA_1,        _1_main__constant_int$result_STA_0$value_LIT_0,        (unsigned char)32, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0, 
            (unsigned char)16,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)108,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__load_int$left_STA_0$result_STA_0,        _1_main__convert_int2unsigned_long$left_STA_0$result_STA_0,        _1_main__constant_unsigned_long$result_STA_0$value_LIT_0, 
            (unsigned char)1,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__Mult_unsigned_long_unsigned_long2unsigned_long$right_STA_0$result_STA_0$left_STA_1,        _1_main__constant_void_star$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__PlusPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1,        _1_main__PlusPI_void_star_int2void_star$right_STA_0$result_STA_0$left_STA_1, 
            _1_main__load_char$left_STA_0$result_STA_0,        _1_main__convert_char2int$left_STA_0$result_STA_0,        _1_main__MinusA_int_int2int$left_STA_0$result_STA_0$right_STA_1,        _1_main__convert_int2char$left_STA_0$result_STA_0, 
            _1_main__store_char$right_STA_0$left_STA_1,        _1_main__goto$label_LAB_0,        (unsigned char)4,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)108, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0, 
            (unsigned char)108,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__load_int$left_STA_0$result_STA_0,        _1_main__constant_int$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__PlusA_int_int2int$right_STA_0$result_STA_0$left_STA_1,        _1_main__store_int$right_STA_0$left_STA_1, 
            _1_main__goto$label_LAB_0,        (unsigned char)100,        (unsigned char)255,        (unsigned char)255, 
            (unsigned char)255,        _1_main__goto$label_LAB_0,        (unsigned char)95,        (unsigned char)255, 
            (unsigned char)255,        (unsigned char)255,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)112, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__string$result_STA_0$value_LIT_0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__convert_void_star2void_star$left_STA_0$result_STA_0,        _1_main__store_void_star$right_STA_0$left_STA_1,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)120, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__load_int$left_STA_0$result_STA_0,        _1_main__store_int$right_STA_0$left_STA_1,        _1_main__call$func_LIT_0,        (unsigned char)4, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0, 
            (unsigned char)128,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)16,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)1, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__Mult_unsigned_long_unsigned_long2unsigned_long$right_STA_0$result_STA_0$left_STA_1, 
            _1_main__constant_void_star$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__PlusPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1,        _1_main__PlusPI_void_star_int2void_star$right_STA_0$result_STA_0$left_STA_1,        _1_main__convert_void_star2void_star$left_STA_0$result_STA_0, 
            _1_main__store_void_star$right_STA_0$left_STA_1,        _1_main__call$func_LIT_0,        (unsigned char)5,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__load_int$left_STA_0$result_STA_0,        _1_main__constant_int$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__PlusA_int_int2int$right_STA_0$result_STA_0$left_STA_1,        _1_main__store_int$right_STA_0$left_STA_1, 
            _1_main__call$func_LIT_0,        (unsigned char)2,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)136,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)16, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__constant_unsigned_long$result_STA_0$value_LIT_0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__Mult_unsigned_long_unsigned_long2unsigned_long$right_STA_0$result_STA_0$left_STA_1,        _1_main__constant_void_star$result_STA_0$value_LIT_0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__PlusPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1, 
            _1_main__PlusPI_void_star_int2void_star$right_STA_0$result_STA_0$left_STA_1,        _1_main__store_void_star$right_STA_0$left_STA_1,        _1_main__call$func_LIT_0,        (unsigned char)6, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__goto$label_LAB_0, 
            (unsigned char)55,        (unsigned char)254,        (unsigned char)255,        (unsigned char)255, 
            _1_main__goto$label_LAB_0,        (unsigned char)50,        (unsigned char)254,        (unsigned char)255, 
            (unsigned char)255,        _1_main__call$func_LIT_0,        (unsigned char)2,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__goto$label_LAB_0,        (unsigned char)4, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__constant_int$result_STA_0$value_LIT_0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__return_int$expr_STA_0}};
extern void exit(int status ) ;
extern int puts(char const   *__s ) ;
extern int raise(int sig ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int rand() ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int ( /* missing proto */  gets)() ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int gettimeofday(struct timeval *tv , void *tz  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
int main(void) ;
void test(void) ;
void megaInit(void) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
char const   *_1_main_$strings  =    "Case %d: \000";
extern long strtol(char const   *str , char const   *endptr , int base ) ;
union _1_main_$node {
   void *_void_star ;
   unsigned long _unsigned_long ;
   int _int ;
   char _char ;
};
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
extern void *malloc(unsigned long size ) ;
extern int scanf(char const   *format  , ...) ;
void megaInit(void) 
{ 


  {

}
}
void test(void) 
{ 
  int i ;

  {
  i = 0;
  i ++;
  return;
}
}
int main(void) 
{ 
  char _1_main_$locals[144] ;
  union _1_main_$node _1_main_$stack[1][32] ;
  union _1_main_$node *_1_main_$sp[1] ;
  unsigned char *_1_main_$pc[1] ;

  {
  megaInit();
  _1_main_$sp[0] = _1_main_$stack[0];
  _1_main_$pc[0] = _1_main_$array[0];
  while (1) {
    switch (*(_1_main_$pc[0])) {
    case _1_main__Lt_int_int2int$right_STA_0$result_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + -1)->_int = (_1_main_$sp[0] + -1)->_int < (_1_main_$sp[0] + 0)->_int;
    (_1_main_$sp[0]) --;
    break;
    case _1_main__load_unsigned_long$left_STA_0$result_STA_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 0)->_unsigned_long = *((unsigned long *)(_1_main_$sp[0] + 0)->_void_star);
    break;
    case _1_main__PlusPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + -1)->_void_star = (_1_main_$sp[0] + -1)->_void_star + (_1_main_$sp[0] + 0)->_unsigned_long;
    (_1_main_$sp[0]) --;
    break;
    case _1_main__constant_unsigned_long$result_STA_0$value_LIT_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 1)->_unsigned_long = *((unsigned long *)_1_main_$pc[0]);
    (_1_main_$sp[0]) ++;
    _1_main_$pc[0] += 8;
    break;
    case _1_main__Mult_unsigned_long_unsigned_long2unsigned_long$right_STA_0$result_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + -1)->_unsigned_long = (_1_main_$sp[0] + -1)->_unsigned_long * (_1_main_$sp[0] + 0)->_unsigned_long;
    (_1_main_$sp[0]) --;
    break;
    case _1_main__convert_int2char$left_STA_0$result_STA_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 0)->_char = (char )(_1_main_$sp[0] + 0)->_int;
    break;
    case _1_main__call$func_LIT_0: 
    (_1_main_$pc[0]) ++;
    switch (*((int *)_1_main_$pc[0])) {
    case 4: 
    printf(*((char const   * __restrict  *)(_1_main_$locals + 112)), *((int *)(_1_main_$locals + 120)));
    break;
    case 2: 
    test();
    break;
    case 3: 
    *((unsigned long *)(_1_main_$locals + 96)) = strlen(*((char const   **)(_1_main_$locals + 80)));
    break;
    case 6: 
    gets(*((char **)(_1_main_$locals + 136)));
    break;
    case 1: 
    gets(*((char **)(_1_main_$locals + 8)));
    break;
    case 5: 
    puts(*((char const   **)(_1_main_$locals + 128)));
    break;
    }
    _1_main_$pc[0] += 4;
    break;
    case _1_main__convert_void_star2void_star$left_STA_0$result_STA_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 0)->_void_star = (_1_main_$sp[0] + 0)->_void_star;
    break;
    case _1_main__convert_int2unsigned_long$left_STA_0$result_STA_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 0)->_unsigned_long = (unsigned long )(_1_main_$sp[0] + 0)->_int;
    break;
    case _1_main__return_int$expr_STA_0: 
    (_1_main_$pc[0]) ++;
    return ((_1_main_$sp[0] + 0)->_int);
    break;
    case _1_main__store_int$right_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    *((int *)(_1_main_$sp[0] + -1)->_void_star) = (_1_main_$sp[0] + 0)->_int;
    _1_main_$sp[0] += -2;
    break;
    case _1_main__convert_char2int$left_STA_0$result_STA_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 0)->_int = (int )(_1_main_$sp[0] + 0)->_char;
    break;
    case _1_main__label$label_LAB_0: 
    (_1_main_$pc[0]) ++;
    break;
    case _1_main__load_int$left_STA_0$result_STA_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 0)->_int = *((int *)(_1_main_$sp[0] + 0)->_void_star);
    break;
    case _1_main__branchIfTrue$expr_STA_0$label_LAB_0: 
    (_1_main_$pc[0]) ++;
    if ((_1_main_$sp[0] + 0)->_int) {
      _1_main_$pc[0] += *((int *)_1_main_$pc[0]);
    } else {
      _1_main_$pc[0] += 4;
    }
    (_1_main_$sp[0]) --;
    break;
    case _1_main__PlusPI_void_star_int2void_star$right_STA_0$result_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + -1)->_void_star = (_1_main_$sp[0] + -1)->_void_star + (_1_main_$sp[0] + 0)->_int;
    (_1_main_$sp[0]) --;
    break;
    case _1_main__constant_int$result_STA_0$value_LIT_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 1)->_int = *((int *)_1_main_$pc[0]);
    (_1_main_$sp[0]) ++;
    _1_main_$pc[0] += 4;
    break;
    case _1_main__Mod_int_int2int$right_STA_0$result_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + -1)->_int = (_1_main_$sp[0] + -1)->_int % (_1_main_$sp[0] + 0)->_int;
    (_1_main_$sp[0]) --;
    break;
    case _1_main__store_unsigned_long$right_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    *((unsigned long *)(_1_main_$sp[0] + -1)->_void_star) = (_1_main_$sp[0] + 0)->_unsigned_long;
    _1_main_$sp[0] += -2;
    break;
    case _1_main__string$result_STA_0$value_LIT_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 1)->_void_star = (void *)(_1_main_$strings + *((int *)_1_main_$pc[0]));
    (_1_main_$sp[0]) ++;
    _1_main_$pc[0] += 4;
    break;
    case _1_main__Ne_int_int2int$left_STA_0$result_STA_0$right_STA_1: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + -1)->_int = (_1_main_$sp[0] + 0)->_int != (_1_main_$sp[0] + -1)->_int;
    (_1_main_$sp[0]) --;
    break;
    case _1_main__convert_unsigned_long2int$left_STA_0$result_STA_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 0)->_int = (int )(_1_main_$sp[0] + 0)->_unsigned_long;
    break;
    case _1_main__Eq_int_int2int$right_STA_0$result_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + -1)->_int = (_1_main_$sp[0] + -1)->_int == (_1_main_$sp[0] + 0)->_int;
    (_1_main_$sp[0]) --;
    break;
    case _1_main__store_char$right_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    *((char *)(_1_main_$sp[0] + -1)->_void_star) = (_1_main_$sp[0] + 0)->_char;
    _1_main_$sp[0] += -2;
    break;
    case _1_main__constant_void_star$result_STA_0$value_LIT_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 1)->_void_star = *((void **)_1_main_$pc[0]);
    (_1_main_$sp[0]) ++;
    _1_main_$pc[0] += 8;
    break;
    case _1_main__PlusA_int_int2int$right_STA_0$result_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + -1)->_int = (_1_main_$sp[0] + -1)->_int + (_1_main_$sp[0] + 0)->_int;
    (_1_main_$sp[0]) --;
    break;
    case _1_main__MinusA_int_int2int$left_STA_0$result_STA_0$right_STA_1: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + -1)->_int = (_1_main_$sp[0] + 0)->_int - (_1_main_$sp[0] + -1)->_int;
    (_1_main_$sp[0]) --;
    break;
    case _1_main__local$result_STA_0$value_LIT_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 1)->_void_star = (void *)(_1_main_$locals + *((int *)_1_main_$pc[0]));
    (_1_main_$sp[0]) ++;
    _1_main_$pc[0] += 4;
    break;
    case _1_main__load_char$left_STA_0$result_STA_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 0)->_char = *((char *)(_1_main_$sp[0] + 0)->_void_star);
    break;
    case _1_main__store_void_star$right_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    *((void **)(_1_main_$sp[0] + -1)->_void_star) = (_1_main_$sp[0] + 0)->_void_star;
    _1_main_$sp[0] += -2;
    break;
    case _1_main__goto$label_LAB_0: 
    (_1_main_$pc[0]) ++;
    _1_main_$pc[0] += *((int *)_1_main_$pc[0]);
    break;
    }
  }
}
}
