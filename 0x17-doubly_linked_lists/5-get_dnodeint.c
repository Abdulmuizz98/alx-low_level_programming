#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - gets node at an indexfrees a l
 * @head: the pointer to the head of the list
 * @index: index of the node to be gotten
 * 
 * Return: the node at that index;
 * otherwise, if it does not exit NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *trav;
	unsigned int i = 0;

	trav = head;
	while (trav && i < index)
	{
		trav = trav->next;
		i++;
	}
	return (trav);
}

