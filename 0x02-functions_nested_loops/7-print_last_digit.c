 #include "main.h"
#include <stdlib.h> /* Include the standard library for abs() */

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to be treated.
 *
 * Return: Value of the last digit of the number.
 */
int print_last_digit(int n)
{
	int last;

	last = abs(n % 10); /* Calculate the absolute value of the last digit */
	_putchar(last + '0'); /* Print the last digit */
	return (last);
}
