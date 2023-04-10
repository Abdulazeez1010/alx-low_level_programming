#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: returns integer
 */
int _atoi(char *s)
{
	int i, j;
	int integer = 0;
	int sign = 1;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
			sign = sign * -1;

		for (j = '0'; j <= '9'; j++)
		{
			if (*(s + i) == j)
			{
				integer = integer * 10 + *(s + i) - '0';
			}
		}
		/*if (*(s + i + 1) >= 58)
		{
			integer = integer + 0;
		
		}*/
	
		i++;
	
	}
	return (sign * integer);
}
