#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - create a hash table
 * @size: the size of the table to be created
 *
 * Return: the new has table creates or NULL
 * if you encounter a problem
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);
	new_hash->size = size;

	new_hash->array = malloc(sizeof(hash_node_t *) * size);

	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	return (new_hash);
}
