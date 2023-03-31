#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: Returns string
 */
/*char *cap_string(char *s)
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
				}
			}
		}
		i++;
	}
	return (s);
} */
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '"' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}' ||
		    index == 0)
			str[index] -= 32;

		index++;
	}

	return (str);
}

