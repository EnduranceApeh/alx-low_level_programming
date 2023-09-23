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
	int length = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0' ; i++)
	{
		dest[length + i] = *src;
		src++;
	}
	dest[length + i] = '\0';
	return (dest);
}
