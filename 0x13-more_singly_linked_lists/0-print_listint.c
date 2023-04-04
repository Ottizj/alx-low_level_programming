#include "lists.h"
#include <stdio.h>


/**
 * Print all the elements of a linked list.
 * @param h A pointer to the head of the linked list.
 * @return The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
