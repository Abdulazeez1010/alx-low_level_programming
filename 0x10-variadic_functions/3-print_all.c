#include "variadic_functions.h"

/**
 * print_all - The function prints anything
 * @format : This is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list ap;
	char *str, *separator = "";

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ",";
		i++;
	}
	printf("\n");
	va_end(ap);
}
