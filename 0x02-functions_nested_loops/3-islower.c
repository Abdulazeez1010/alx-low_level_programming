#include "main.h"
#include "ctype.h"

/**
 * _islower - checks for lowercase character
 * @c: The variable to be checked
 *
 * Return: 1 if lower. 0 otherwise
 */
int _islower(int c)
{
	if (c == tolower(c))
	{
		return (1);
	}
	else
		return (0);
}
