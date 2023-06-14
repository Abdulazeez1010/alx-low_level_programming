#include "main.h"

/**
 * str_len - Calculates the length of a string
 * @s : The string to calculate its length
 * Return: Returns length of the string
 */
int str_len(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * str_concat - The function concatenates two strings
 * @s1 : String 1
 * @s2 : String 2
 * Return: Returns content of s1 + content of s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *str;

	len1 = 0;
	len2 = 0;

	if (s1 != NULL)
		len1 = str_len(s1);
	if (s2 != NULL)
		len2 = str_len(s2);

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < len2; j++)
		str[len1 + j] = s2[j];
	str[len1 + len2] = '\0';
	return (str);
}
