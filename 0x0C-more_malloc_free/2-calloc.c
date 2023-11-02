#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocate memory for elements, each of size bytes.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	point = malloc(nmemb * size);
	if (point == NULL)
		return (NULL);
	for (; i < nmemb * size; i++)
	{
		point[i] = 0;
	}
	return (point);
}
