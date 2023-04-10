#include "main.h"

/**
 * _strspn - The function gets the length of a prefix substring
 *  @s: The string to check
 *  @accept: The string to check if its byte is present in s
 *  Return: Returns the number of bytes in the initial segment of s
 *  which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			return (i);
		}
		i++;
	}

	return (i);
}
