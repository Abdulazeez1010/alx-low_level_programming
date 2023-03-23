#include "main.h"

/**
 * print_numbers - prints numbers 0 t0 9
 *
 * Return: 1 if digit. 0 otherwise
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
