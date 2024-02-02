#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_set - adds an newent to the hash table.
  * @ht: hash table where to add key/value to
  * @key: key of a value
  * @value: The value associated with the key
  *
  * Return: 1 if it succeeded, 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;

	hash_node_t *new = NULL, *new_node = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	new = ht->array[index];

	if (new && strcmp(key, new->key) == 0)
	{
		free(new->value);
		new->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
