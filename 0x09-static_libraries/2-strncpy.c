#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - copies a string up to a certain number of characters
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of characters to copy
 *
 * Return: a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

