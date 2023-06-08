#include "main.h"


/**
 * _strlen - Calculates the length of a string
 * @str : String to determine the length
 * Return: Returns length of the string
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen(str + 1));
}

/**
 * is_palindrome - The funcion checks if a string is a palindrome
 * @s : The string to check if it is a palindrome
 * Return: Returns 1 if string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);
	if (*s == ' ')
		return (1);
	if (s == NULL)
		return (0);
	return (is_palindrome_helper(0, len, s));
}

/**
 * is_palindrome_helper - Helper function
 * @i : Counter
 * @len : Length of th e string
 * @s : String to determine if it is a palindrome
 * Return: Returns 1 if string is a palindrome, 0 if not
 */
int is_palindrome_helper(int i, int len, char *s)
{
	if (s[i] != s[len - 1])
		return (0);
	if (i >= len)
		return (1);
	if (s[i] == s[len - 1])
		return (is_palindrome_helper(i + 1, len - 1, s));
	return (0);
}
