#include "lists.h"
/**
 * free_dlistint - free all the elements of a dlistint_t list.
 *
 * @head: pointer to linkedlist
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (head)
	{
		current = head;
		head = head->next;
		if (current)
			free(current);
	}
}
