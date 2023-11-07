#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print dog info; "(nil)" for NULL elements
 * @d: Pointer to a struct dog
 *
 * Description: Prints dog information, using "(nil)" for NULL elements.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}

