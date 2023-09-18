#include "main.h"
/**
 * _strlen - function that return the length of a string
 * @s: recives argument
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
