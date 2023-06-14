#include "main.h"

/**
 * argstostr - The program concatenates all the arguments of a program
 * @ac : Argument count
 * @av : Argument vector
 * Return: Returns concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int length = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
		length++;
	}
	s = malloc(sizeof(char) * (length + 1));
	if (s == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s[k++] = av[i][j];
		s[k++] = '\n';
	}
	s[k] = '\0';
	return (s);
}
