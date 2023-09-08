#include <stdio.h>
/**
 * main - Entry point
 *
 * print number 0-9 using putchar function
 * Return: Always 0(Success)
 */
int main(void)
{
	int number = 0;

	while (number < 0)
	{
		putchar(number + 'o');
	}
	putchar('\n');
	return (0);
}
