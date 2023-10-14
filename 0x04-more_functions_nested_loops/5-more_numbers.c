#include "main.h"

/**
 * more_number - Print numbers 10 times from 0 to 14
 *
 * Description: This function prints the numbers from 0 to 14 in a specific
 * pattern 10 times, with proper formatting.
 *
 * Return: None
 */
void more_number(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
