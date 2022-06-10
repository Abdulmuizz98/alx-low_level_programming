#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the pointer to the head of the list
 *
 * Return: the number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *trav = h;
	int count = 0;

	while (trav)
	{
		printf("%d\n", trav->n);
		trav = trav->next;
		count++;
	}
	return (count);
}

