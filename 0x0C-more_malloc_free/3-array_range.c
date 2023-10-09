#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array of integers
 * @min: first int
 * @max: second inti
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr, i, numElement;

	if (min > max)
	{
		return (NULL);
	}
	/* Calculate number of element */
	numElement = max - min + 1;
	/* Allocate memory */
	ptr = malloc(numElement * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < numElement; i++)
		ptr[i] = min + i;
	return (ptr);
}
