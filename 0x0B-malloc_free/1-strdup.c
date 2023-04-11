#include "main.h"
#include <stdlib.h>

/**
 * _strlen - The function detemrines the length of string
 * @s : String to determine its length
 * Return: Length of string
 */
int _strlen(char *s)
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
 * _strdup - The function returns a pointer to a new string
 * which is a duplicate of the string str
 * @str : String to duplicate
 * Return: Returns a pointer to the new string
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * (_strlen(str) + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
