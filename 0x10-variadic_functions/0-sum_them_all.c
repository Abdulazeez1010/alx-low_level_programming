#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - The function sums all its parameters
 * @n : Number of parameters to sum
 * Return: Returns sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, s;

	if (n == 0)
		return (0);

	va_start(ap, n);

	s = 0;
	for (i = 0; i < n; i++)
		s += va_arg(ap, unsigned int);
	va_end(ap);
	return (s);
}
