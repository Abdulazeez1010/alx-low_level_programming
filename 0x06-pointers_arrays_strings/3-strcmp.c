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
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: returns negative integer if s1 < s2,
 * positive integer if s2 < s1
 * 0 if s1 = s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	int len1 = str_len(s1);
	int len2 = str_len(s2);

	if (len1 < len2)
		return (-15);
	if (len2 < len1)
		return (15);

	for (i = 0; s2[i] != '\0'; i++)
	{
		if ((len1 == len2) && (s1[i] == s2[i]))
			return (0);
	}

	return (0);
}
