#include "lists.h"
#include <stdio.h>
/**
 * free_dlistint - frees a list.
 * @head: the pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *trav;

	trav = head;
	while (trav)
	{
		trav = trav->next;
		free(head);
		head = trav;
	}
}

