#include "main.h"

/**
 * print_last_digit - This function print last digit
 * @n: Recive argument
 * Return: last_digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	
	_putchar('0' + last_digit);
	return (last_digit);
}
