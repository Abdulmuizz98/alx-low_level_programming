#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_listint - frees an integer list recursively.
 * @head: the pointer to the head of the list
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	free_listint(head->next);
	free(head);
}
