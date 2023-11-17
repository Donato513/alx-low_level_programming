#include <stdio.h>
#include "lists.h"
#include "lists.h"

/**
 * print_list - Prints all elements of a singly linked list
 * @h: Pointer to the beginning of the list
 *
 * Return: Number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
	if (h[0].str == NULL)
	printf("[0] (nil)\n");
	else
	printf("[%i] %s\n", h[0].len, h[0].str);
	h = h->next;
	count++;
	}
	return (count);
}

