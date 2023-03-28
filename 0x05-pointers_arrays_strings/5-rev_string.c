#include "main.h"

/**
 * str_len - determines the length of  a string
 * @ptr: string to determine its length
 * Return: Length
 */
int str_len(char *ptr)
{
	int i = 0;

	while (*(ptr + i) != '\0')
		i++;
	return (i);
}

/**
 * rev_string - the function reverses a string
 * @s: The string to be reverseed
 */
void rev_string(char *s)
{
	int i, len, temp;

	len = str_len(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
