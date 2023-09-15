#include "main.h"

/**
 * print_numbers - print number from 0 - 9
 * Return: Always 0(Success)
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar('0' + c);
	}
	_putchar('\n');
}
