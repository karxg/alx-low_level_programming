#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_print - prints a hash table.
  * @ht: hash table to prin
  *
  * Return: None
  */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int i = 0;
	short handlecommas = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; ++i)
	{
		current = ht->array[i];

		while (current)
		{
			if (handlecommas == 1)
				printf(", ");

			handlecommas = 1;
			printf("'%s': '%s'", (char *) current->key,
								(char *) current->value);

			current = current->next;
		}
	}

	printf("}\n");
}
