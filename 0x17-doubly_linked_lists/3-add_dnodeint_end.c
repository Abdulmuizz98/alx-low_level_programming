#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: the pointer to the head of the list
 * @n: the value of the new node
 *
 * Return: if success - the address of the new element;
 * otherwise - NULL;
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *trav;

	trav = *head;
	/*create the new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new_node->n = n;
	if (*head) /* if head is not null */
	{
		/*traverse to the end of the list*/
		while ((trav)->next != NULL)
		{
			trav = (trav)->next;
		}
		/*set last element next to new node*/
		trav->next = new_node;
		/*set new node prev to last element*/
		new_node->prev = trav;
	}
	else
	{
		/*change head to new node*/
		*head = new_node;
	}
	return (new_node);
}

