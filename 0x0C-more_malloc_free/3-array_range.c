#include "main.h"
#include <stdlib.h>

/**
 * array_range - The function creates an array of integers
 * @min : Minimum value
 * @max : Maximum value
 * Return: Returns pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *arr, size;

	size = max - min + 1;
	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
