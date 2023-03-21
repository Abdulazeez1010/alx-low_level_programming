#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: The number to be checked
 *
 * Return: absolute value
 */
int print_last_digit(int x)
{
	int l;

	if (x < 0)
	{
		x = -x;
	}
	l = x % 10;
	_putchar('0' + l);
	return (l);
}

