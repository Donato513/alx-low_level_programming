#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocate memory block from old_size to new_size.
 * @ptr: Pointer to the memory block.
 * @old_size: Original size in bytes.
 * @new_size: New size in bytes.
 * Return: Pointer to the integer array.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	char *point;
	unsigned int i, lower = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 &&  ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
		lower = new_size;
	else
		lower = old_size;
	point = malloc(new_size);
	if (point == NULL)
		return (NULL);
	for (i = 0; i < lower; i++)
	{

		point[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (point);
}

