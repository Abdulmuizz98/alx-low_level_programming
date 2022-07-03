#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @key: the key of the element to be retreived.
 *
 * Return: if success the value; otherwise NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i, idx = key_index((unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	if (idx >= ht->size)
		return (NULL);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			return (ht->array[i]->value);
	}
	return (NULL);
}
