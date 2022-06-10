#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - returns the number of elements in list.
 * @h: the pointer to the head of the list
 *
 * Return: the number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *trav = h;
	int count = 0;

	while (trav)
	{
		trav = trav->next;
		count++;
	}
	return (count);
}

