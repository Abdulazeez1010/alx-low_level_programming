#include "function_pointers.h"

/**
 * int_index - The function searches for an integer
 * @array : The array to search through
 * @size : Size of the array
 * @cmp : A pointer to a function
 * Return: Returns the index of the first element for which cmp
 * does not return 0,-1 if no element matches or error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
