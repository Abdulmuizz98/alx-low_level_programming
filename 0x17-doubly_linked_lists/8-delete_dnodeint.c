#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - delete a node at a given position
 * @head: the pointer to the head of the list
 * @index: the position to be deleted at
 *
 * Return: 1 if it succeeds
 * otherwise, -1 if it fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *trav, *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0) /* delete at the beginning */
	{
		temp = (*head)->next;
		if (temp != NULL)
			temp->prev = NULL;
		free((*head));
		*head = temp;
		return (1);
	}
	/* delete anywhere else */
	/* traverse to the index */
	trav = *head;
	while (i < index)
	{
		if (trav == NULL)
			return (-1);
		trav = trav->next;
		i++;
	}
	temp = trav;
	(trav->prev)->next = trav->next;
	if (trav->next != NULL)
		(trav->next)->prev = trav->prev;
	free(trav);
	return (1);
}

