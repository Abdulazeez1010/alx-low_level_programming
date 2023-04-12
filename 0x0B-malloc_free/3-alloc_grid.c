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
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int*) * width);
	if (arr == NULL)
		return (NULL);

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
	free(arr);
}
