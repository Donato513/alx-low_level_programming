#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to search for.
 *
 * Return: If a set of bytes is found, a pointer to the first byte in `s`
 * that matches one of the bytes in `accept` is returned. If no matching byte
 * is found, NULL is returned.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

