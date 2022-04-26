#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint_end - add a node to the end of the list.
 * @head: the pointer to the head of the list
 * @n: the integer to be added to the list
 *
 * Return: the address of the new element;
 * if it fails, NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *trav;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	/*search for the last node and point its next to the new node*/
	if (*head == NULL) /*if the list is empty*/
	{
		*head = newNode;
	}
	else /*if list in not empty*/
	{
		trav = *head;
		while (trav->next)
			trav = trav->next;

		trav->next = newNode;
	}
	newNode->next = NULL;
	/*return the new node*/
	return (newNode);
}
