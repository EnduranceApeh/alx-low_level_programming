#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenate two string
 * @s1: destination
 * @s2: source
 * @n: number of byte
 * Return: return pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, s1_len, s2_len;

	s1_len = 0;
	s2_len = 0;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	/* check for len of string */
	for (i = 0; s1[i] != '\0'; i++)
	{
		s1_len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s2_len++;
	}
	if (n >= s2_len)
		n = s2_len;
	/* allocate memory */
	ptr = malloc(sizeof(char) * s1_len + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; i++, j++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
