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
	char *str;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
