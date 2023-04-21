#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - The function prints strings followed by a new line
 * @separator : The separator between strings
 * @n : Number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
		separator = "";
	if (n == 0)
		printf("\n");

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char *));
		if (i < n - 1)
			printf("%s", separator);
		else
			printf("\n");
	}
	va_end(ap);
}
