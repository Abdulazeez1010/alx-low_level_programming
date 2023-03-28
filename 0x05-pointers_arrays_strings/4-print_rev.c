#include <string.h>
#include "main.h"

/**
 * str_len - determines the length of  a string
 * @ptr: string to determine the length
 * Return: Length
 */
int str_len(char *ptr)
{
	int i = 0;

	while (*(ptr + i) != '\0')
		i++;
	return (i);
}

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int len = str_len(s);
	int i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
