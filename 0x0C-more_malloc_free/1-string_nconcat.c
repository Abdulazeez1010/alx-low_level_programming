#include "main.h"

/**
 * string_nconcat - The function concatenates two strings
 * @s1 : First string
 * @s2 : Second string
 * @n : Number of bytes to concatenate
 * Return: Returns a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len_1, len_2, len;
	char *str;

	len_1 = 0;
	len_2 = 0;

	if (s1 != NULL)
	{
		while (*(s1 + len_1) != '\0')
			len_1++;
	}
	if (s2 != NULL)
	{
		while (*(s2 + len_2) != '\0')
			len_2++;
	}
	if (n >= len_2)
		n = len_2;
	len = len_1 + n;

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len_1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i++] = s2[j];
	str[i++] = '\0';
	return (str);
}
