#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - A function that uniquely displays a given name.
 * @name: The name to be uniquely showcased.
 * @f: The custom function for display.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}


