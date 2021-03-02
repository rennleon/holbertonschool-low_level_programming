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

	matrix = malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
		matrix[i] = malloc(height * sizeof(int));

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			matrix[i][j] = 0;

	return (matrix);
}
