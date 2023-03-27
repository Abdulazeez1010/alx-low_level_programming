#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: First parameter
 * @b: Second parameter
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
