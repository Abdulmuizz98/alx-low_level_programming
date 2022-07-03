#include "hash_tables.h"

/**
 * hash_table_print - Prints  a hash table.
 * @ht: A pointer to the hash table.
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	char *sep = "";

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size ; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("%s'%s': '%s'", sep, node->key, node->value);
			node = node->next;
			sep = ", ";
		}
	}
	printf("}\n");
}
