#ifndef BILLBRUCE_H
#define BILLBRUCE_H
#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>
#include <stdbool.h>

/* defined macros */
#define FLUSH -1
#define PF_INIT {false, false, false}
#define NIL "(nil)"
#define HEXA "0x"
#define NULL_STRING "(null)"
#define NUL '\0'
#define KILOBYTE 1024
#define ABS(x) (((x) <  0) ? -(x) : (x))

/**
 * struct modifiers - struct containing flags for turning on
 * passage of a flag to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */

typedef struct modifiers
{
_Bool plus;
_Bool space;
_Bool hash;
} modifs;

/**
 * struct functionHandler - struct to choose the appropriate function
 * subject to the format specifier passsed to _printf()
 * @c: format specifier for character
 * @f: pointer to printing function
 */

typedef struct functionHandler
{
char c;
int (*f)(va_list ap, modifs *f);
} fh;

/* function prototypes */
int _printf(const char *format, ...);
int (*get_print(char s))(va_list, modifs *);
int get_flags(char s, modifs *f);
int print_string(va_list l, modifs *f);
int print_char(va_list l, modifs *f);
int _putchar(char c);
int _puts(char *str);
int print_percent(va_list l, modifs *f);
_Bool invalidInputs(const char *p);

#endif /* end comment */
