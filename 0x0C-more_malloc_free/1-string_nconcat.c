#include "main.h"
#include <stdlib.h>

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
	unsigned int i, j, len1, len2, len;
	char *str;

	len1 = 0;
	len2 = 0;

	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	len = len1 + n;

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str[i++] = s2[j];
	}
	str[i++] = '\0';
	return (str);
}
