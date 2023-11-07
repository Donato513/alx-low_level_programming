#include <stdio.h>
#include "dog.h"

/**
 * main - Demonstrates using print_dog function
 *
 * Description:
 * Initializes a dog structure and prints its info using print_dog.
 *
 * Return: Always 0
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";

	print_dog(&my_dog);

	return (0);
}

