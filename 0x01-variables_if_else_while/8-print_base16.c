#include <stdio.h>

/**
 * main - Entry point
 *
 * print number of base16 followed by a lower case
 * Return: Always 0(Success)
 */
int main(void)
{
	char alpha = 'a';
	int number = 0;

	while (number <= 9)
	{
		putchar('0' + number);
		number++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
