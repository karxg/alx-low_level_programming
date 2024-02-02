#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_delete - Deletes a hash table
  * @ht: The hash table to delete
  *
  * Return: None
  */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current, *t;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			free(current->key);
			free(current->value);
			t = current->next;
			free(current);

			current = t;
		}
	}
	free(ht->array);
	free(ht);
}
