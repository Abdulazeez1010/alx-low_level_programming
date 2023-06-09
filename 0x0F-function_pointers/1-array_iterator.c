#include "function_pointers.h"

/**
 * array_iterator - The function executes a function given as a parameter
 * on each element of an array
 * @array : The array
 * @size : Size of the array
 * @action : A pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
