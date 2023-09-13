#include "main.h"

/**
 * print_alphabet_x10 - print letter a-z x10
 * Return: type void
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
