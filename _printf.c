#include "main.h"
#include <stdarg.h>

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

/* checks for valid arguments */
assert(invalidInputs(p));
for (; *p; p++)
{
	if (*p == '%')
	{
		p++;
		if (*p == '%')
		{
			len += _putchar('%');
			continue;
		}
		while (get_flags(*p, &prefixes))
			p++;
		pfunction = fetch_print(*p);
		len += (pfunction)
			? pfunction(arguments, &prefixes)
			: _printf("%%%c", *p);
	} else
		len += _putchar(*p);
}
_putchar(-1);
va_end(arguments);
return (len);

}
