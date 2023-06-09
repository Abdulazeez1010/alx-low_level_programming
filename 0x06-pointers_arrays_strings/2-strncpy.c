#include "main.h"

/**
 * _strncpy - cpsa string
 * @dest: destination string
 * @src: string to copy
 * @n: number of bytes to copy
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
