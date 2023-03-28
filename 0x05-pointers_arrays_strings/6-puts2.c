#include "main.h"

/**
 * str_len - determines the length of  a string
 * @ptr: string to determine its length
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
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: string to print every other character
 */
void puts2(char *str)
{
	int i, len;

	len = str_len(str);

	i = 0;
	while (i < len)
	{
		_putchar(*(str + i));
		i += 2;

	}
	_putchar('\n');
}
