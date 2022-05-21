#include "main.h"

/**
 * fetch_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that describes the conversion specifier
 * Description: the function loops through the structs array
 * func_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */

int (*fetch_print(char s))(va_list, modifs *)

{
	fh func_arr[] = {
		{'s', print_string},
		{'c', print_char},
		{'%', print_percent},
		{NUL, NULL}
	};

	register short i;

	for (i = 0; func_arr[i].c; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	
	return (NULL);
}
