#include "main.h"

/**
 * _puts - prints a string folowed by new line to stdout
 * @str: string to print
 */

void _puts(char *s)
{
	while (*s != '\0')
		_putchar(*s++);

	_putchar('\n');
}
