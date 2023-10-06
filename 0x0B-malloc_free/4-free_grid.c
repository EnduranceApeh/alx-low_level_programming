#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - fucntion name
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr, row, col, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr =  malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (row = 0; row < height; row++)
	{
		ptr[row] = malloc(sizeof(int) * width);
		if (ptr[row] == NULL)
		{
			for (i = 0; i < row; i++)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
		for (col = 0; col < width; col++)
		{
			ptr[row][col] = 0;
		}
	}
	free(ptr);
	return (ptr);
}
