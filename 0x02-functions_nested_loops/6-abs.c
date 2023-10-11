#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @c: The number to calculate the absolute value for.
 *
 * Return: Absolute value of the number.
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val = -c; /* Calculate the absolute value */
		return (abs_val);
	}
	return (c);
}
