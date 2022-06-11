#include "lists.h"
#include <stdio.h>
/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: the pointer to the head of the list
 * @idx: the position to be inserted at
 * @n: data to be inserted
 *
 * Return: address of the new node
 * otherwise, NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *trav, *new_node, *temp;
	unsigned int i = 0;

	if (idx == 0) /* Insert at the beginning */
		return (add_dnodeint(h, n));
	/* Insert anywhere else */
	/* traverse to the index */
	trav = *h;
	while (i < (idx - 1))
	{
		if (trav == NULL)
			return (NULL);
		trav = trav->next;
		i++;
	}
	/*create the new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new_node->n = n;
	if (trav->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		trav = trav->next;
		new_node->next = trav;
		new_node->prev = trav->prev;
		temp = trav;
		(trav->prev)->next = new_node;
		temp->prev = new_node;
	}
	return (new_node);
}

