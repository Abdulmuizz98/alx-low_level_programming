#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @key: the key of the element to be retreived.
 *
 * Return: if success the value; otherwise NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t node;
	unsigned long int i, idx = key_index((unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	node = ht->array[idx];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
