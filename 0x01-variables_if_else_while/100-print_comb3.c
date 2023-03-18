#include <stdio.h>
#include <ctype.h>

/**
 * main - prints all possible combinations of 
 * single-digit numbers
 * Return: returns 0
 */
int main(void)
{
        int i, j;

        i = 0;
	j = 0;
        while (i <= 9)
	while (j <= 9)
        {
                putchar('0' + i);
		putchar('1' + j);
                if ((i <= 8) && (i <= 7))
                {
                putchar(',');
                putchar(' ');
                i++;
		j++;
                }
                else
                {
                i++;
		j++;
                }
        }
        putchar('\n');

        return (0);
}
