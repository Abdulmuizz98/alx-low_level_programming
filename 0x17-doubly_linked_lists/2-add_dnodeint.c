#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint - adds a new node at beginning of a list.
 * @head: the pointer to the head of the list
 * @n: the value of the new node
 *
 * Return: if success - the address of the new element;
 * otherwise - NULL;
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

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
		/*make heads prev point to the new node*/
		(*head)->prev = new_node;
		/*make new node next point to head.*/
		new_node->next = *head;
	}
	/*change head to new node*/
	*head = new_node;
	return (*head);
}

