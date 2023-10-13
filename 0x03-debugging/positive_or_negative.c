#include <stdio.h>

/**
 * positive_or_negative - Prints a number
 * @i: The integer to be checked.
 *
 * Return: No return value (void). Prints the result.
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
	printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
	printf("%d is zero\n", i);
	}
	else
	{
	printf("%d is negative\n", i);
	}
}

