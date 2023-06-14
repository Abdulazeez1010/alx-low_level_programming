#include "main.h"

/**
 * free_grid - The function frees a 2-dimensional grid
 * @grid : The grid to free
 * @height : Height of the grid
 * Return: Returns freed grid
 */
void free_grid(int **grid, int height)
{
	int m, n;

	for (m = 0; m < height; m++)
	{
		if (grid == NULL)
		{
			for (n = 0; n < m; n++)
				free(grid[n]);
			free(grid);
		}
		free(grid[m]);
	}
	free(grid);
}
