#include "main.h"
#include <stddef.h>
/**
 * _strchr - write a fucntion that locate a character in a string
 * @s: pointer
 * @c: string
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
