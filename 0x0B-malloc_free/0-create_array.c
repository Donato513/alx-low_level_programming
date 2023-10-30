#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of chars.
 * @size: Number of elements.
 * @c: Value for each element.
 *
 * Return: A pointer to the array or NULL if size is 0 or allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *res;
	unsigned int i;

	if (size == 0)
	return (NULL);
	res = malloc(size * sizeof(char));
	if (res == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	{
	res[i] = c;
	}
	return (res);
}

