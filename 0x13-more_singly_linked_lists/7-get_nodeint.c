#include "lists.h"

/**
 * get_nodeint_at_index - get node at index from a linked list
 *
 * @head: pointer to the first node of the list
 * @index: node to access
 *
 * Return: node at index OR NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; (i < index && head != NULL); i++)
		head = head->next;

	return (head);
}
