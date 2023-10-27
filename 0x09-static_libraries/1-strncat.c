#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - Concatenates two strings with a maximum length.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to concatenate from src.
 *
 * Return: A pointer to the concatenated string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

