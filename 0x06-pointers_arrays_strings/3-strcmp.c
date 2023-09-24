#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, n;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			n = 15;
			break;
		}
		else if (s1[i] < s2[i])
		{
			n = -15;
			break;
		}
		else
		{
			n = 0;
			break;
		}
	}
	return (n);
}
