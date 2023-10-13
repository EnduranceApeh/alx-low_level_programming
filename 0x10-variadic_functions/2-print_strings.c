#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that print string
 * @separator: comma and space
 * @n: number of arguement
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		if (strings == NULL)
		{
			printf("(nil)");
		}
		printf("%s", va_arg(strings, char *));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(strings);
	putchar('\n');
}
