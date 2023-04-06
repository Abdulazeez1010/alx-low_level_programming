#include "main.h"
#include <stddef.h>

/**
 * str_len - calculates the length of a string
 * @str : String to determine the length
 * Return: Returns length
 */
int str_len(char *str)
{
	if (str[0] == '\0')
		return (0);
	return (1 + str_len(str + 1));
}

/**
 * is_palindrome - Determines if a string is a palindrome
 * @s : String to check if it is a palindrome
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i, len;

	len = str_len(s);
	i = 0;

	if (s == NULL)
		return (0);
	return (is_palindrome_helper(s, i, len - 1));
}

/**
 * is_palindrome_helper - helper function for is_palindrome
 * @s : The string
 * @i : Counter
 * @len : Length of string
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int i, int len)
{
	if (s == NULL || i < 0 || len < 0)
		return (0);
	if (i >= len)
		return (1);
	if (s[i] == s[len])
		return (is_palindrome_helper(s, i + 1, len - 1));
	return (0);
}
