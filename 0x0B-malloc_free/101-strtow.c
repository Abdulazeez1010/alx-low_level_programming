#include "main.h"
#include <stdlib.h>

/**
 * strtow - The function splits a string into words
 * @str : The string to split
 * Return: Returns a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, len, word_count;
	char **s;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	len = 0;
	word_count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			word_count++;
		}
		len++;
	}
	s = malloc(sizeof(char *) * (word_count + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		if (*str != ' ' && (*(str - 1) == ' '))
		{
			int word_len = 0;
			char *word_start = str;

			while (*str != ' ' && *str != '\0')
			{
				word_len++;
				str++;
			}
			s[i] = malloc(sizeof(char) * (word_len + 1));
			if (s[i] == NULL)
			{
				while (i-- > 0)
					free(s[i]);
				free(s);
				return (NULL);
			}
			for (j = 0; j < word_len; j++)
			{
				s[i][j] = word_start[j];
			}
			s[i][j] = '\0';
			i++;
		}
		else
		{
			str++;
		}
	}
	return (s);
}
