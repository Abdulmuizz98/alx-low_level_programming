#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that gets the nth node of a linked list
 * @head: the pointer to the first node of the list.
 * @index: the index of the integer to be fetched.
 *
 * Return: the integer at the nth position;
 * Otherwise if it doesn't exist NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head)
	{
		head = head->next;
		i++;
	}
	return (head);
}
