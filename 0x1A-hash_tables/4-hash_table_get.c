#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value associated with a key.
  * @ht: hash table to search
  * @key: key to find its value
  *
  * Return: The value associated with the element
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *element = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	element = ht->array[index];

	if (element == NULL)
		return (NULL);

	while (strcmp(key, element->key) != 0)
		element = element->next;

	return (element->value);
}
