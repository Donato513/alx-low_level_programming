#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Check if a string consists of digits.
 * @argv: Pointer to the string.
 * Return: 0 if all digits, 1 if not all digits.
 */
int _isdigit(char *argv)
{
	int i = 0;

	while (argv[i])
	{
	if (argv[i] < '0' || argv[i] > '9')
	return (1);
	i++;
	}

	return (0);
}

/**
 * main - Main function with arguments.
 * @argc: Argument count.
 * @argv: Argument array.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

	for (i = 1; i < argc; i++)
	{
	if (_isdigit(argv[i]))
	{
	printf("Error\n");
	return (98);
	}
	}

	return (0);
}

