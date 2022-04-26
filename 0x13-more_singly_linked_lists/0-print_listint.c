#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the int elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);

		nodes++;
		h = h->next;
	}
	return (nodes);
}
