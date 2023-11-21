#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: pointer
 *
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *list;

	while ((list = head) != NULL)
	{
		head = head->next;
		free(list);
	}
}
