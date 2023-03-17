#include <stdio.h>
#include <ctype.h>

/**
 * main - prints alphabet in lower case
 * except q and e
 * Return: returns 0
 */
int main(void)
{
	int i;

	i = 'A';
	while (i <= 'Z')
	{
		if (i == 'Q' || i == 'E')
		{
			i++;
		} else
		{
			putchar(tolower(i));
			i++;
		}
	}
	putchar('\n');
	return (0);
}
