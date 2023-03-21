#include "main.h"

/**
 * _abs - computes absolute sign of an integer
 * @x: The integer to be checked
 *
 * Return: absolute value
 */
int _abs(int x)
{
	if (x > 0)
	{
		x = x;
		return (x);
	}
	else if (x == 0)
	{
		x = 0;
		return (0);
	}
	else if (x < 0)
	{
		x = -x;
		return (x);
	}
	return (0);
}
