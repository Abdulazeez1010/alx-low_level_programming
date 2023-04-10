#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string to return the length
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	char *ptr = s;

	i = 0;
	while (*ptr != '\0')
	{
		i++;
		ptr++;
	}

	return (i);
}
