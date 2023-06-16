#include "main.h"

/**
 * _calloc - The function allocates memory for an array, using malloc
 * @nmemb : Number of elements
 * @size : Size of each element
 * Return: Returns a pointer to the memory that was allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		array[i] = 0;
	return (array);
}
