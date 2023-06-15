#include "main.h"

/**
 * str_concat - The function concatenates two strings
 * @s1 : String 1
 * @s2 : String 2
 * Return: Returns content of s1 + content of s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *str;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < len2; j++)
		str[len1 + j] = s2[j];
	str[len1 + len2] = '\0';
	return (str);
}
