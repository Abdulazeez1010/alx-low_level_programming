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
 * puts_half - prints half of a string
 * @str: string to print its half
 */
void puts_half(char *str)
{
	int len, i;

	len = str_len(str);

	if (len % 2 == 1)
	{
		i = len / 2 + 1;
		while (i < len)
		{
			_putchar(*(str + i));
			i++;
		}
	}
	else
	{
		i = len / 2;
		while (i < len)
		{
			_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}
