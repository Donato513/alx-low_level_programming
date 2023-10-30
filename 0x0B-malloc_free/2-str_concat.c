#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: Pointer to the concatenated string, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	int i = 0, j = 0, cont, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	k = i + j + 1;
	res = malloc(k * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (cont = 0; cont < i; cont++)
	{
		res[cont] = s1[cont];
	}
	for (cont = 0; cont <= j; cont++)
	{
		res[cont + i] = s2[cont];
	}
	return (res);
}
