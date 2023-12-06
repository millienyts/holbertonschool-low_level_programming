#include "hash_tables.h"

/**
 * hash_table_delete - delete the whole hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *next;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current)
		{
			next = current->next;

			free(current->key);
			free(current->value);
			free(current);

			current = next;
		}
	}

	free(ht->array);
	free(ht);
}
