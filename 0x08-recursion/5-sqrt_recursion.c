#include "main.h"
#include <stdio.h>

/* Declaration of the _sqrt function */
/**
 * _sqrt - Calculate the square root recursively.
 *
 * @n: The number for which to calculate the square root.
 * @i: The current guess for the square root.
 *
 * Return: The square root of the number.
 */
int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the natural square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _aqrt - calculate the natural square root
 * @n: number to calculate the square root
 * @i: iterate number
 *
 * Return: the natural square root
 */
int _aqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	return (-1);

	if (sqrt == n)
	return (i);

	return (_sqrt(n, i + 1));
}

/* Definition of the _sqrt function */
/**
 * _sqrt - Calculate the square root recursively.
 *
 * @n: The number for which to calculate the square root.
 * @i: The current guess for the square root.
 *
 * Return: The square root of the number.
 */
int _sqrt(int n, int i)
{
	/* Your implementation of _sqrt goes here */
	if (i * i > n)
	return (-1);

	if (i * i == n)
	return (i);

	return (_sqrt(n, i + 1));
}

