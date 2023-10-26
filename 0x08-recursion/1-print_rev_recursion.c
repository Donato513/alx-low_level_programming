#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse recursively.
 *
 * @s: The string to reverse and print.
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - Calculate the length of a string recursively.
 *
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
	return (1 + _strlen_recursion(s));
}

/* Definition of the _print_rev_recursion function */
/**
 * _print_rev_recursion - Print a string in reverse recursively.
 *
 * @s: The string to reverse and print.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

