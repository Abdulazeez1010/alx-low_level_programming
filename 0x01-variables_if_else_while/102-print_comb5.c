#include <stdio.h>

/**
 * main - prints all possible combinations of
 * two two-digit numbers
 * return : returns 0 if successful
 */
int main(void)
{
	int i, j;

	for(i = 0; i <= 99; i++)
		for(j = i + 1; j <= 99; j++)
		{
			
			putchar('0' + i/10);
			putchar('0' + i%10);
			putchar(' ');
			putchar('0' + j/10);
			putchar('0' + j%10);
			if (!((('0' + i/10) == '9') && (('0' + i%10) == '8')
				&& (('0' + j/10) == '9') && (('0' + j%10) == '9')))
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	
	return (0);
}
