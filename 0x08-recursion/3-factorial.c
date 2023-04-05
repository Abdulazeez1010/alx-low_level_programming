#include "main.h"

/**
 * factorial - The function returns the factorial of a given number
 * @n : Number to determine its factorial
 * Return: Returns factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n >= 0 && n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
