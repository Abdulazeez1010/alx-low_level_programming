#include "main.h"

/**
 * _puts - prints a string
 * @str: String to be printed
 */
void _puts(char *str)
{
	char *ptr = str;

	int i;

	i = 0;
	while (*ptr != '\0')
	{
		_putchar(*ptr);
		i++;
		ptr++;
	}
	_putchar('\n');
}
