#include "main.h"
#include <stdlib.h>

/**
 * free_grid - The function frees a 2 dimensional grid
 * @grid : The grid to be free'd
 * @height : Height of the grid
 */
void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		if (grid == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
		}
		free(grid[i]);
	}
	free(grid);
}
