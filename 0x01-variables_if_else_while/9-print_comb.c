#include <stdio.h>
#include <ctype.h>

/**
 * main - prints all single digit numbers
 * of base 10 starting from 0
 * Return: returns 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar('0' + i);
		if (i <= 8){
		putchar(',');
		putchar(' ');
		i++;
		} else 
		{
		i++;
		}
	}
	putchar('\n');

	return (0);
}
