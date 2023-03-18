#include <stdio.h>
#include <ctype.h>

/**
 * main - prints all possible different  combinations of
 * two digit
 * Return: returns 0
 */
int main(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
				j++;
			}
			else
			{
				j++;
			}
		}
		i++;
	}
	putchar('\n');

	return (0);
}
