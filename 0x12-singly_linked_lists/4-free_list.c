#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - frees a list.
 * @head: the pointer to the head of the list
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}
