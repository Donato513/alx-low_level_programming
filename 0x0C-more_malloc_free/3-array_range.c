#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Create an array of integers from min to max (inclusive).
 * @min: Minimum value.
 * @max: Maximum value.
 *
 * Return: Pointer to the integer array.
 */

int *array_range(int min, int max)

{
	int *point;
	int positions, count = 0;

	if (min > max)
		return (NULL);
	positions = (max - min) + 1;
	point = malloc(positions * sizeof(int));
	if (point == NULL)
		return (NULL);
	for (; count < positions; count++)
	{
		point[count] = min;
		min += 1;
	}
	return (point);
}
