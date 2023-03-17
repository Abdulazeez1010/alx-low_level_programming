#include <stdio.h>
#include <ctype.h>

/**
 * main - prints all numbers of base-16
 * in lower case
 * Return: returns 0
 */
int main(void)
{
	int i, j;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	j = 0;
	while (j <= 5)
	{

		putchar(tolower(65 + j));
		j++;
	}
	putchar('\n');

	return (0);
}
