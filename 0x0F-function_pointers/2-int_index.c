#include "function_pointers.h"

/**
 * int_index - The function searches for an integer
 * @array : The array to search through
 * @size : Size of the array
 * @cmp : Function pointer to the function used to compare values
 * Return: index of match if there is a match, -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
