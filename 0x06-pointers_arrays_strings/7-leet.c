#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: returns encoded string
 */
char *leet(char *s)
{
	int i, j;
	char *letters = "aAeEoOtTlL";
	char *numbers = "43071";

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 9; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j / 2];
			}
		}
		i++;
	}
	return (s);
}
