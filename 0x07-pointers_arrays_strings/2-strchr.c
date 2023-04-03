#include "main.h"
#include <stddef.h>

/**
 * _strchr - The function locates a character in a string
 * @s: The string to find a character
 * @c: Character to find
 * Return: Returns a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	return (NULL);
}
