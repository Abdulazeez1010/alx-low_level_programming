#include "main.h"

/**
 * _strlen_recursion - The function calculates the length of a string
 * @s : The string to determine the length
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
