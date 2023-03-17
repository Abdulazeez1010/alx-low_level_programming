#include <stdio.h>
#include <ctype.h>

/**
 * main - prints alphabet in lower case
 * Return: returns 0
 */
int main()
{
	int i = 'A';
	while (i <= 'Z')
	{
		putchar(tolower(i));
		i++;
	}
	putchar('\n');
	

	return(0);
}
