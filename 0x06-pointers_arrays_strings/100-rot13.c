#include "main.h"

/**
 * rot13 - encodes a string using ROT13
 * @str: string to encode
 * Return: returns encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rotcode = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = rotcode[j];
				break;
			}
		}
	}
	return (str);
}
