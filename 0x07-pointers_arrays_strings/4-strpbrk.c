#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - The function searches a string for any of a set of bytes.
 * @s: The string to search
 * @accept: The string that contains bytes to be searched
 * Return: Returns a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;

	if (s == NULL || accept == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}

	return (NULL);
}
