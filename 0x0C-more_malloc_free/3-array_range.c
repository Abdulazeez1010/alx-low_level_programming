#include "main.h"

/**
 * array_range - The function creates an array of integers
 * @min : Min value
 * @max : Max value
 * Return: Returns a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *array, size;

	size = max - min + 1;
	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
