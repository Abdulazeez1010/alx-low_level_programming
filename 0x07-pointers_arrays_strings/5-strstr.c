#include "main.h"
#include <stddef.h>

/**
 * _strstr - The function locates a substring
 * @haystack: The string to find a substring
 * @needle: The string that contains the substring
 * Return: Returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (haystack == NULL || needle == NULL)
		return (NULL);

	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			int k = i;

			for (j = 0; haystack[k] != '\0' && needle[j] != '\0'; j++, k++)
			{
				if (haystack[k] != needle[j])
				{
					break;
				}
			}
			if (haystack[k] == needle[j])
			{
				return (&haystack[i]);
			}
		}
		i++;
	}

	return (NULL);
}