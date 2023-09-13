#include "main.h"
/**
 * print_sign(int n) - print signs
 * @n: recives arguement 
 * Return: return 1 if n is greater than 0, 0 if n is zero and -1 if n is less than zer0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
