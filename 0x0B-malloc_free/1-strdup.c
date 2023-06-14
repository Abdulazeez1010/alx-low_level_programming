#include "main.h"

/**
 * str_len - Calculates the length of a string
 * @s : The string to determine the length
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
 * _strdup - The function returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str : The string given as parameter
 * Return: Returns a pointer to the newly allocated space
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	if(str == NULL)
		return (NULL);
	s = malloc (sizeof(char) * (str_len(str) + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	return (s);
}
