#include "hash_tables.h"

/**
 * key_index - Generate the index where a key/ value pair
 * is to be bucketed
 * @key: The key whose index is to be generated.
 * @size: The size of the hash table array.
 *
 * Return: The generated index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
