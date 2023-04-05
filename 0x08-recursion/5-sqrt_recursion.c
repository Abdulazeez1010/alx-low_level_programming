#include "main.h"

/**
 * _sqrt_recursion - The function returns the natural square root of a number
 * @n : Number to determine its square root
 * Return: Returns square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_help(n, 1));
}

/**
 * _sqrt_recursion_help - helper function to _sqrt_recursion
 * @n : Number to determine the square root
 * @j : Increment
 * Return: Returns square root
 */
int _sqrt_recursion_help(int n, int j)
{
	int result;

	if (j * j == n)
		return (j);
	if (j * j > n)
		return (-1);
	result = _sqrt_recursion_help(n, j + 1);
	return (result);
}
