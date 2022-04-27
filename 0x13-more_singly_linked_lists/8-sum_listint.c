#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - does the sum of all data in a linked list.
 * @head: pointer to the head of the list
 *
 * Return: the sum of the data in the list;
 * otherwise 0, if list is empty;
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
