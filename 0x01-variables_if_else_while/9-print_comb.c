#include <stdio.h>

/**
 * main - Entry point
 *
 * print nummbers followed by a comma
 * Return: Always 0(Success)
 */
int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');

	return (0);
}
