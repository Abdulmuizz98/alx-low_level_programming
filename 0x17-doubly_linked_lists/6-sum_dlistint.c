#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint- returns sum of all data of a list
 * @head: the pointer to the head of the list
 *
 * Return: sum of all the data of a list
 * otherwise, if empty 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *trav;
	int sum = 0;

	trav = head;
	while (trav)
	{
		sum += trav->n;
		trav = trav->next;
	}
	return (sum);
}

