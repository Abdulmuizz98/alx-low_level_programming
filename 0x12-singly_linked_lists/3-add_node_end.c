#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add a node to the end of the list.
 * @head: the pointer to the head of the list
 * @str: the string to be added to the list
 *
 * Return: the address of the new element;
 * if it fails, NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *trav;
	int i = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	/*find string length*/
	while (str[i] != '\0')
		i++;
	newNode->len = i;
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
