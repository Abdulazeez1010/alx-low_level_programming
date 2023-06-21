#include "function_pointers.h"

/**
 * print_name - The function points a name
 * @name : The name to print
 * @f : A pointer to function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
