#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the concatenated string (dest).
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}

