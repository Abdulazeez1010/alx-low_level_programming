#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: Returns string
 */
char *cap_string(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
				|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
				|| s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
				|| s[i] == '}' || i - 1 == 0)
		{
			for (j = 'a'; j <= 'z'; j++)
			{
				if (s[i + 1] == j)
				{
					s[i + 1] = s[i + 1] - 32;
					break;
				}
			}
		}
		i++;
	}
	return (s);
}
