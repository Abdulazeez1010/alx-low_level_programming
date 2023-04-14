#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - The function reallocates a memory block using malloc and free
 * @ptr : A pointer to the memory previously allocated
 * @old_size : size, in bytes, of the allocated space for ptr
 * @new_size : new size, in bytes of the new memory block
 * Return: Returns reallocated memmory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	if (new_size < old_size)
	{
		memcpy(arr, ptr, new_size);
	}
	else
	{
		memcpy(arr, ptr, old_size);
	}
	free(ptr);
	return (arr);
}
