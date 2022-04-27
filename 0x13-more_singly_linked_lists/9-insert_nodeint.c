#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - insert node at index
 * @head: the pointer to the head of the linked list
 * @idx: the index the node is to be added
 * @n: the integer data of the node.
 *
 * Return: pointer to the new node;
 * otherwise NULL, if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* Create the node */
	unsigned int i = 0;
	listint_t *temp;
	listint_t *newNode;
	listint_t *current;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0) /* For appending at the (head) first index*/
	{
		newNode->next = *head;
		*head = newNode;
	}
	else /* Appending elsewhere */
	{
		current = *head;
		/* go to the index -1 */
		while (i < (idx - 1))
		{
			if (current == NULL)
				return (NULL);
			current = current->next;
			i++;
		}
		/* save its next pointer as temp */
		temp = current->next;
		/* assign its next to the newnode */
		current->next = newNode;
		/* assign newnode next pointer to temp */
		newNode->next = temp;
	}
	return (newNode);
}
