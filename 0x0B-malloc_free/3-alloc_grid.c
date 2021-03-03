#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

void free_previous_malloc(int **matrix, int index);

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
		{
			free_previous_malloc(matrix, i - 1);
			free(matrix);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}

	return (matrix);
}

/**
 * free_previous_malloc - Frees rows that had been allocated
 * before the out of memory happened
 * @matrix: matrix who's rows are going to be freed
 * @index: End row index to start freeing memory
 */
void free_previous_malloc(int **matrix, int index)
{
	while (index >= 0)
		free(matrix[index--]);
}
