#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - pop integer from the top of the list
 * @head: pointer to the pointer of the head node.
 *
 * Return: the popped integer;
 * otherwise if list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	int n;

	/*Save the int that is to be popped*/
	if (*head == NULL) /* If list is empty return 0 */
		return (0);
	n = (*head)->n;
	/* Point the pointer to the head pointer to the head's next node*/
	*head = (*head)->next;
	return (n);
}
