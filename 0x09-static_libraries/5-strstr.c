#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search.
 * @needle: The substring to search for.
 *
 * Return: If the substring is found, a pointer to the beginning of the located
 * substring in the haystack is returned. If the substring is not found, NULL
 * is returned.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

