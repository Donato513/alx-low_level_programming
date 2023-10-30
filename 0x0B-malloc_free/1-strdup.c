#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 * Return: Pointer to the duplicate or NULL on failure.
 */

char *_strdup(char *str)
{
	char *res;
	int i = 0, j;

	if (str == NULL)
	return (NULL);
	while (str[i])
	{
	i++;
	}
	i++;
	res = malloc(i * sizeof(char));
	if (res == NULL)
	return (NULL);
	for (j = 0; j <= i; j++)
	{
	res[j] = str[j];
	}
	return (res);
}

