#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int pi;
	hash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (pi = 0; pi < ht->size; pi++)
	{
		while (ht->array[pi] != NULL)
		{
			next = ht->array[pi]->next;
			free(ht->array[pi]->key);
			free(ht->array[pi]->value);
			free(ht->array[pi]);
			ht->array[pi] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
