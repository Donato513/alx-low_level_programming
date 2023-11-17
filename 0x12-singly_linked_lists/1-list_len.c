#include <stdio.h>
#include "lists.h"

/**
 * list_length - Counts the number of elements in a singly linked list
 * @h: Pointer to the beginning of the list
 *
 * Return: Number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

