#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint - add a node to the beginning of the list.
 * @head: the pointer to the head of the list
 * @n: the integer to be added to the list
 *
 * Return: the address of the new element;
 * if it fails, NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	/*point its next to the head node*/
	newNode->next = *head;
	/*return the new node*/
	*head = newNode;
	return (newNode);
}
