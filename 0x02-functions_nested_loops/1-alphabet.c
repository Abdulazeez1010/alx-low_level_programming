#include <stdio.h>
#include <ctype.h>

/**
 *
 *
 */
void print_alphabet(void)
{
	int i;

	for (i  = 'A'; i <= 'Z'; i++ )
	{
		_putchar(tolower(i));
	}
	return (0);
}
