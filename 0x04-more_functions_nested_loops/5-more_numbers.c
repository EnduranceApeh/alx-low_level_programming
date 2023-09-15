#include "main.h"

/**
 * more_numbers - print number 0 - 14 x10
 * Return: void
 */
void more_numbers(void)
{
	 int j = 0;
	 int i;

	while (j <= 9)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(48 + i);
		}
		_putchar('\n');
		j++;
	}
}
