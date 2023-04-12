#include "main.h"
#include <stdlib.h>

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
 * str_concat - The function concatenates two strings
 * @s1 : First string
 * @s2: Second string
 * Return: A pointer that points to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len_1, len_2;
	char *str;

	len_1 = 0;
	len_2 = 0;

	if (s1 != NULL)
		len_1 = str_len(s1);
	if (s2 != NULL)
		len_2 = str_len(s2);
	str = malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len_1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < len_2; j++)
	{
		str[len_1 + j] = s2[j];
	}
	str[len_1 + len_2] = '\0';
	return (str);
}
