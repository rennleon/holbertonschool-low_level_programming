#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Creates a two dimensional array
 * @grid: Matrix to be freed
 * @height: Height of the matrix
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
		free(grid[row]);

	free(grid);
}
