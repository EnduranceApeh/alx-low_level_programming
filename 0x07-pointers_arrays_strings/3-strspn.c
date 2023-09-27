#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: pointer to the first string
 * @accept: pointer to the second string
 * Return: number of byte in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int match = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
			{
				return (match);
			}
		}
		i++;
	}
	return (match);
}
