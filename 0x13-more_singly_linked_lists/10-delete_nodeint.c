#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - delete node at index
 * @head: the pointer to the head of the linked list
 * @index: the index the node is to be deleted
 *
 * Return: 1 if succeeded;
 * otherwise -1, if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* Create the node */
	unsigned int i = 0;
	listint_t *temp;
	listint_t *current;

	if (*head == NULL) /* if list is empty */
		return (-1);
	if (index == 0) /* For removing at the (head) first index*/
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	else /* Deleting elsewhere */
	{
		current = *head;
		/* go to the index -1 */
		while (i < (index - 1))
		{
			if (current == NULL)
				return (-1);
			current = current->next;
			i++;
		}
		/* save its next pointer as temp */
		temp = current->next;
		/* re-assign its next to the next of its next node */
		current->next = current->next->next;
		free(temp);
	}
	return (1);
}
