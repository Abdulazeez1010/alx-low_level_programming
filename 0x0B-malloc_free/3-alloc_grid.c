#include "main.h"

/**
 * alloc_grid - The function returns a pointer to a
 * two dimensional array of integers
 * @width: Width of the array
 * @height: Height of the array
 * Return: Returns a pointer to a two dimensional array of int
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			array[j][k] = 0;
	}
	return (array);
}
