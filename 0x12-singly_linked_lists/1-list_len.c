#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - counts all the elements in a list
 * @h: pointer to the first node of the list
 *
 * Return: the number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
