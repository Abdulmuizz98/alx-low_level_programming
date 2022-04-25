#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add a node to the beginning of the list.
 * @head: the pointer to the head of the list
 * @str: the string to be added to the list
 *
 * Return: the address of the new element;
 * if it fails, NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int i = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	/*find string length*/
	while (str[i] != '\0')
		i++;
	newNode->len = i;
	/*point its next to the head node*/
	newNode->next = *head;
	/*return the new node*/
	*head = newNode;
	return (newNode);
}
