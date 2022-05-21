#include "main.h"

/**
 * invalidInputs - validates that the user did not enter invalid inputs
 * @p: string of input
 * Return: true or false
 */

_Bool invalidInputs(const char *p)
{

if (!p)
	return (false);

if (*p == '%' && !*(p + 1))
	return (false);

if (*p == '%' && *(p + 1) == ' ' && !*(p + 2))
	return (false);

return (true);

}
