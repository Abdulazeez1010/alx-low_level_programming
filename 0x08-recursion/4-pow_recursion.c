#include "main.h"

/**
 * _pow_recursion - The function returns the value of a number
 * raised to the power of another number
 * @x : Number to raise to another number
 * @y : The exponent
 * Return: Returns the value
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
