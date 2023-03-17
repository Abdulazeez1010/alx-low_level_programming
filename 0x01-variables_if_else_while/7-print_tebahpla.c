#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the lower case alphabet in reverse
 * Return: returns 0
 */
int main(void)
{
	int i = 26;

	while (i >= 1)
	{
		putchar(tolower(64 + i));
		i--;
	}
	putchar('\n');

	return (0);
}
