#include "hash_tables.h"

/**
 * key_index - Calculate the index of a key in a hash table array.
 *
 * @key: Key
 * @size: Size of array
 *
 * Return: Index at which the key/value pair
 * should be stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
