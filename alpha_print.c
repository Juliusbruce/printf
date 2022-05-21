#include "main.h"

/**
* print_string - prints char of each string
* @l: va_list arguments from _printf
* @f: pointer that checks for flag
* description: function print out character from string
* Return: number of printed chars
*/
int print_string(va_list l, modifs *f)
{
	char *s = va_arg(l, char *);
	(void)f;
	if (!s)
		s = NULL_STRING;
	return (_puts(s));
}

/**
* print_char - prints a character
* @l: va_list arguments from _printf
* @f: pointer to the struct flags that determines
* if a flag is passed to _printf
* decription: function prints a single character
* Return: number of characters
*/
int print_char(va_list l, modifs *f)
{
	(void)f;
	return (_putchar(va_arg(l, int)));
}
