#include "main.h"

/**
 * _strlen_recursion - The function returns the length of a string
 * @s : The string to calculate the length
 * Return: Returns length
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
