#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - The function allocates memory using malloc
 * @b : parameter
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);
	return (str);
}
