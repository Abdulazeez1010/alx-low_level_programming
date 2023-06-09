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
		for (j = 'a'; j <= 'z'; j++)
		{
			if (s[0] == j)
			{
				s[0] = s[0] - 32;
				break;
			}
		}
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
				|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
				|| s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
				|| s[i] == '}' || s[i] == '\v')
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
