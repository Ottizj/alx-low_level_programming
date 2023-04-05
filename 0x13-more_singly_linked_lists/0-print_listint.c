#include "lists.h"
#include <stdio.h>


/**
 * print_listint - This Prints all the elements of a listint_t list.
 * @h: This is a pointer to the head of the list_t list.
 *
 * Return: This simply returns the number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
	printf("%d\n", current->n);
	current = current->next;
	num_nodes++;
	}

	return (num_nodes);
}
