#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - alloacte memory uusing malloc
 * @b: size of memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
