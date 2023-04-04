#include "lists.h"
#include <stdio.h>

/**
 * Print all the elements of a linked list.
 * @param h A pointer to the head of the linked list.
 * @return The number of nodes in the linked list.
 */
size_t print_listint(const list_t *h)
{
    size_t num_nodes = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%d] %s\n", h->len, h->str);
        }

        num_nodes++;
        h = h->next;
    }

    return num_nodes;
}
