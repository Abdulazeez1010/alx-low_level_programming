#include <stdio.h>
#include <ctype.h>

/**
 * main - prints alphabet in lower case
 * and then in uppercase
 * Return: returns 0
 */
int main(void)
{
        int i, j;
	
	i = 'A';
        while (i <= 'Z')
        {
                putchar(tolower(i));
                i++;
        }
	
	j = 'A';
	while (j <= 'Z')
	{
		putchar(toupper(j));
		j++;
	}
        putchar('\n');

        return (0);
}
