#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @key: the key of the element to be added.
 * @value: the value of the element to be added.

 * Return: if success - 1; otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = key_index(key);

	return (add_head(array[idx], key, value) == NULL ? 0 : 1);
}

/**
 * add_head - adds a new node at beginning of a list.
 * @head: the pointer to the head of the list
 * @k: the key of the node to be added.
 * @vL the value of the node to be added.
 *
 * Return: if success - the address of the new element;
 * otherwise - NULL;
 */
hash_node_t *add_head(hash_node_t **head, const char *k, const char *v)
{
	hash_node_t *new_node;

	/*create the new node*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new_node->key = k;
	new_node->value = v;
	if (*head) /* if head is not null */
	{
		/*make heads prev point to the new node*/
		(*head)->prev = new_node;
		/*make new node next point to head.*/
		new_node->next = *head;
	}
	/*change head to new node*/
	*head = new_node;
	return (*head);
}
