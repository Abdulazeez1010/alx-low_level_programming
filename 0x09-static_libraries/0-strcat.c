#include "main.h"

/**
 * str_len - calculates the length of a string
 * @ptr: string ot determine the length
 * Return: returns length of string
 */
int str_len(char *ptr)
{
	int i;

	i = 0;
	while (ptr[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcat - concatenates two strings
 * @dest: string to concatenate on
 * @src: string to add
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	int len = str_len(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
