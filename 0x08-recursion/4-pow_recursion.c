#include "main.h"

/**
 * _pow_recursion - The function returns the value of x raised
 * to the value of y
 * @x : Integer x
 * @y : Integer y
 * Return: Value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));
}
