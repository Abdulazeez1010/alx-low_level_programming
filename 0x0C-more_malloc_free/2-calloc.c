#include "main.h"
#include <stdlib.h>

/**
 * _calloc - The function allocates memory for an array, using malloc
 * @nmemb : Number of elements
 * @size : Size of each element
 * Return: Returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * sizeof(size));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		arr[i] = 0;
	return (arr);
}
