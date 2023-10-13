#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	printf("Infinite loop incoming :(\n");

	while (i < 10)
	{
	i++;
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
