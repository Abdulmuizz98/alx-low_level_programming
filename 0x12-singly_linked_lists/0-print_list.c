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
	list_t *ptr;
	
	if (h->next == NULL)
		return count;
	count = 1;
	printf("[%d] %s\n", (h->str == NULL) ? 0 : h->len, (h->str == NULL) ? "(nil)" : h->str);
	
	ptr = h->next;
	while (ptr != NULL)
	{
		printf("[%d] %s\n", (ptr->str == NULL) ? 0 : ptr->len, (ptr->len == 0) ? "(nil)" : ptr->str);
		count++;
		ptr = ptr->next;
	}
	return count;
}	
