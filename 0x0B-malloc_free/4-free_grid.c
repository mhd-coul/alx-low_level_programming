#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that free 2D grid
 * @grid: pointer to a pointer
 * @height:the num of row
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
