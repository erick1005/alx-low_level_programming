#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - entry
 * @grid: object
 * @height: input
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
