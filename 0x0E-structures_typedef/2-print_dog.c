#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to a struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}

