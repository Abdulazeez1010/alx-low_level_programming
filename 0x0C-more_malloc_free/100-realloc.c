#include "main.h"

/**
 * _realloc - The function reallocates a memory block using malloc and free
 * @ptr : A pointer to the memory previously allocated
 * @old_size : The size, in bytes allocated for ptr
 * @new_size : New size, in bytes of the new memory block
 * Return: Returns a pointer to the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *array;

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

	array = malloc(new_size);
	if (array == NULL)
		return (NULL);
	if (new_size < old_size)
		memcpy(array, ptr, new_size);
	else
		memcpy(array, ptr, old_size);
	free(ptr);
	return (array);
}
