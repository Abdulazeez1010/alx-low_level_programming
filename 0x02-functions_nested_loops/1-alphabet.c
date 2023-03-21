#include "main.h"

/**
 * print_alphabet - prints alphabet in lower case
 */
void print_alphabet(void)
{
	int i;

	for (i  = 'A'; i <= 'Z'; i++)
	{
		_putchar(tolower(i));
	}
}
