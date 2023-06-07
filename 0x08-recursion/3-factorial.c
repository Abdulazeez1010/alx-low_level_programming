#include "main.h"

/**
 * factorial - The function calculates the factorial of a given number
 * @n : The number to calculates its factorial
 * Return: The factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
