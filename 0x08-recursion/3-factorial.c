#include "main.h"
/**
 * factorial - return the factorial of n
 * @n: the integer
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}

	return n * factorial(n - 1);
}
