#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_name - The function printa a name
 * @name : The name to be printed
 * @f : A function pointer used to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
