#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_listint2 - frees an integer list recursively
 * and sets head to NULL.
 * @head: the pointer to the head of the list
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	
	if (head == NULL)
		return;	
	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	head == NULL;
}
