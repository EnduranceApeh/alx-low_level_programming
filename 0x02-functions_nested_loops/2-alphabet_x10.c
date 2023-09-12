#include "main.h"

/**
 * print_alphabet_x10 - print alphabet from a-z 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int num = 0;

	while (num <= 10)
	{
		while(alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		num++;
	}
}
