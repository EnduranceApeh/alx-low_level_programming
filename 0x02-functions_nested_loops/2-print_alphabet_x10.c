#include "main.h"

/**
 * print_alphabet_x10 - print alphabet a-z 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int num;

	for (num = 0; num <= 10; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
