#include "main.h"
#include <stdlib.h>

node *add_node(node **head, const int n);
/**
 * get_bit - gets the bit at an index
 * @n: the number to be checked
 * @index: the index to be fetched
 *
 * Return: the bit at the specified index;
 * otherwise, if it fails -1;
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int rem = 0;
	node *head = NULL;

	if (n == 0)
		return (0);
	while (n != 0)
	{
		rem = n % 2;
		n = n / 2;
		add_node(&head, rem);
	}

	while (i < index)
	{
		if (head == NULL)
			return (-1);
		i++;
		head = head->next;
	}
	return (head->n);
}
/**
 * add_node - add a node to the end of the list.
 * @head: the pointer to the head of the list
 * @n: the integer to be added to the list
 *
 * Return: the address of the new element;
 * if it fails, NULL.
 */
node *add_node(node **head, const int n)
{
	node *newNode;
	node *trav;

	newNode = malloc(sizeof(node));
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
