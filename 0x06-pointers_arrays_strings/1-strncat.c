#include "main.h"

/**
 * *_strnccat - concatenate two string
 * @dest: pointer to the first arguement
 * @src: pointer to the second argument
 * @n: number of byte
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
