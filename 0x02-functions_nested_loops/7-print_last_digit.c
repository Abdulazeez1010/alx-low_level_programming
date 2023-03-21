#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: The number to be checked
 *
 * Return: return last digit
 */
int print_last_digit(int x)
{
	int l;

	l = x % 10;
	if (x < 0)
	{
		l = -l;
	}
	_putchar('0' + l);
	return (l);
}

