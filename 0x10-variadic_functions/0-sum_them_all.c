#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that rteurn that sum of all parameter
 * @n: number of arguement
 * Return: sum of all parameter if Success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0, i;

	va_list mynumbers;

	va_start(mynumbers, n);

	/* using loop to access each member of list */
	for (i = 0; i < n; i++)
	{
		result = result + va_arg(mynumbers, int);
	}
	/* End of list */
	va_end(mynumbers);
	return (result);
}
