#include "main.h"
#include "ctype.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The variable to be checked
 *
 * Return: 1 if truei. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= '48' && c <= '57') ||
	(c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
