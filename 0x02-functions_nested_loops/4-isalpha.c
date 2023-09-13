#include "main.h"

/**
 * _isalpha - function to determin if a leeter is uppercase or lowercase
 * @c: character to check for case
 * Decription determine if a character is uppercase or lowercase
 * Return: one if character is uppercase or lowercase and return zero otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
