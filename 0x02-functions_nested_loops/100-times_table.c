#include <stdio.h>

/*
 *
 */
void print_times_table(int n)
{
	if (n > 0 && n <= 15)
	{
	int i, j, r;

	for (i = 0; i <= n; i++)
	{
		for(j = 0; j <= n; j++)
		{
			r = i * j;
			if (i == 0)
			{
				printf("%d", r);
				if (j != n)
				{
					printf(",   ");
				}
			}
			if (r == 0 && j == 0 && i != 0)
			{
				printf("%d,", r);
			}
			if (r >= 1 && r <= 12)
			{
				if (r <= 9)
				{
					printf("   ");
				}
				if (r > 9)
				{
					printf("  ");
				}
				printf("%d", r);
				if (j != n)
				{
					printf(",");
				}
			}
			else if (r > 12)
			{
				if (r <= 99)
				{
					printf("  ");
				}
				else if(r > 99)
				{
					printf(" ");
				}
				printf("%d", r);
				if (j != n)
				{
					printf(",");
				}
			}



		}
		printf("\n");
	}
	printf("\n");
	}
}
