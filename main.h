#ifndef BILLBRUCE_H
#define BILLBRUCE_H
#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>
#include <stdbool.h>
int _printf(const char *format, ...);
int (*get_print(char s))(va_list, modifs *);
int get_flags(char s, modifs *f);
int print_string(va_list l, modifs *f);
int print_char(va_list l, modifs *f);
int _putchar(char c);
int _puts(char *str);
int print_percent(va_list l, modifs *f);
_Bool invalidInputs(const char *p);
#endif
