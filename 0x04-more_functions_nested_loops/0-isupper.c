#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: recieves arguement
 * Return: return 1 if true and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
