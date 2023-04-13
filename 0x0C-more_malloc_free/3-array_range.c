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
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
