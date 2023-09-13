#include "main.h"

/**
 * _isalpha - check if c is letter,lowercase or uppercase
 * @c: Recieve arguemnt
 * Return: Always(1) if c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
