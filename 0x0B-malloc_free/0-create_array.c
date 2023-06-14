#include "main.h"

/**
 * create_array - The function that creates an array of chars,
 * and initializes it with a specific char
 * @size :  Size of the array
 * @c : The specific char to initialize with
 * Return: Returns char initialized
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
