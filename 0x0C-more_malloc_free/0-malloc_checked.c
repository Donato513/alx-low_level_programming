#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: value 1
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)

{
	unsigned int *point;

	point = malloc(b);
	if (point == NULL)
		exit(98);
	return (point);
}

