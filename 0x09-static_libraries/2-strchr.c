#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: The string to search.
 * @c: The character to find.
 *
 * Return: If the character is found, a pointer to the first occurrence is
 * returned. If the character is not found, NULL is returned.
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

