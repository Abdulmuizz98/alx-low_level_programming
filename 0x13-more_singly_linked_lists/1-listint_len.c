#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - counts all the elements in a int list
 * @h: pointer to the first node of the list
 *
 * Return: the number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
