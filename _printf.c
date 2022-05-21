#include "main.h"

/**
* _printf - produces a formatted output
* @format: format string containing the characters and the specifiers
* Description: this function will call the fetch_print() function
* Return: formatted output string length
*/
int _printf(const char *format, ...)
{
	register short len = 0;
	int (*pfunction)(va_list, modifs *);
	modifs prefixes = {false, false, false};
	const char *p = format;
	va_list arguments;
}
