#include "main.h"

/**
 * _memcpy - The function copies memory area
 * @dest: Destination to copy to
 * @src: Source to copy from
 * @n: Number of bytes to copy
 * Return: Returns a pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
