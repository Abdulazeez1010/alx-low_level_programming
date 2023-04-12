#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - The function creates a 2 dimensional array of integers
 * @width : Width of the array
 * @height : Height of the array
 * Return: Returns a pointer to the 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **arr = malloc(sizeof(int) * width);

	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(sizeof(int) * height);
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			arr[j][k] = 0;
		}
	}
	return (arr);
}
