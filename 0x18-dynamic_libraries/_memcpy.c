#include "main.h"

/**
 * _memcpy - function that copy memory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of byte
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
