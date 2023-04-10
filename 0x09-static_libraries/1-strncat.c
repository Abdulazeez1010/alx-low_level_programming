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
 * _strncat - concatenates two strings
 * @dest: string to concatenate on
 * @src: string to add
 * @n: number of bytes to concatenate till
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	int len = str_len(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
