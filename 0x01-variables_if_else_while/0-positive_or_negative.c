#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/**
 * main - prints number is positive or negative
 * @n: stores the value of number
 *
 * Return - Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0){
		printf("%d is positive\n", n);
	} else if (n < 0){
		printf("%d is negative\n", n);
	} else{
		printf("%d is 0\n", n);
	}
	return (0);
}