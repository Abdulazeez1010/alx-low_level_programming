#include "variadic_functions.h"

/**
 * print_numbers - The function  prints numbers, followed by a new line
 * @separator : The string to be printed between numbers
 * @n : Number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	if (n == 0)
		printf("\n");

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (i < n - 1)
			printf("%s", separator);
		else
			printf("\n");
	}
	va_end(ap);
}
