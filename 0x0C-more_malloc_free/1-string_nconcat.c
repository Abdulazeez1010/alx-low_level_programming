#include "main.h"
#include <stdlib.h>

/**
 * str_len - calculate the length of string
 * @s : String to determine the length
 * Return: Returns length of string
 */
int str_len(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * string_nconcat - The function concatenates two strings
 * @s1 : string 1
 * @s2 : string 2
 * @n : Number of bytes to concatenate
 * Return: Returns a pointer to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *str;

	len1 = 0;
	len2 = 0;
	if (s1 != NULL)
		len1 = str_len(s1);
	if (s2 != NULL)
		len2 = str_len(s2);
	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str[len1 + j] = s2[j];
	}
	str[i + j] = '\0';
	return (str);
}
