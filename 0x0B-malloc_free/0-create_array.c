#include "main.h"
#include <stdlib.h>

/**
 * create_array - The function creates an array of chars,
 * and initializes it with a specific char
 * @size : Size of array
 * @c : char
 * Return: A pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
