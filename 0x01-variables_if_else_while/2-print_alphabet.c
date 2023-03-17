#include <stdio.h>
#include <ctype.h>

/**
 * main - prints alphabet in lower case
 * Return: returns 0
 */
int main()
{
	for (int i = 'A'; i <= 'Z'; i++)
	{
		putchar(tolower(i));
	}
	putchar('\n');

	return(0);
}
