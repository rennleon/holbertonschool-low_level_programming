#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Creates a two dimensional array
 * @width: Width of the matrix
 * @height: Height of the matrix
 *
 * Return: Pointer to the matrix
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* height is the number of rows */
	matrix = malloc(height * sizeof(int *));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* width is the number of columns */
		matrix[i] = malloc(width * sizeof(int));

		if (matrix[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}

	return (matrix);
}
