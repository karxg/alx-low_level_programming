#include "lists.h"
/**
 * dlistint_len - count the elements in a linked dlistint_t list.
 *
 * @h: pointer to dlistint_t head
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
