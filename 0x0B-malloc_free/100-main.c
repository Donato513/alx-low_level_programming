#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code for ALX School students.
 *
 * @ac: The number of command-line arguments.
 * @av: An array of strings containing the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
	return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}

