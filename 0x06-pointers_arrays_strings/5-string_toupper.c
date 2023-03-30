#include "main.h"

/**
 * string_toupper - converts string to uppercase
 * @s: the string
 * Return: returns string
 */
char *string_toupper(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (s[i] == j)
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
