#include "main.h"

/**
 * _sqrt_recursion - The function returns the natural square root of a number
 * @n : The number to find the square root
 * Return: Returns the number square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_helper(1, n));
}

/**
 * _sqrt_recursion_helper - Helper function
 * @i : Counter
 * @n : Number to determine the square root
 * Return: Returns the number square root
 */
int _sqrt_recursion_helper(int j, int n)
{
	if (j * j == n)
		return (j);
	if (j * j < 1)
		return (-1);
	return (_sqrt_recursion_helper(j+1, n));
}
