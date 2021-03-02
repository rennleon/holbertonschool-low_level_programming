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
		return (NULL):

	matrix = malloc(width * sizeof(int *));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		matrix[i] = malloc(height * sizeof(int));
		
		if (matrix[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			matrix[i][j] = 0;

	return (matrix);
}
