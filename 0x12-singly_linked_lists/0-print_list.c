#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - Prints all the elements of a list
 * @h: pointer to the first node of the list
 *
 * Return: the number of nodes in the list. 
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return count;
}	
