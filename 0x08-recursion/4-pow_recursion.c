#include "main.h"
#include <math.h>
/**
 * _pow_recursion - fucntion that return x raise to power y
 * @x: first integer
 * @y: second integer
 * Return: the value of x raise to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
	return (x * _pow_recursion (x, (y-1)));
}
