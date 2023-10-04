#include <stdlib.h>
#include "main.h"

/**
 * create_array - function create array of char
 * @size: size of array
 * @c: character
 * Return: (ch)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	ch = (char *) malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ch[i] = c;
	return (ch);
}
