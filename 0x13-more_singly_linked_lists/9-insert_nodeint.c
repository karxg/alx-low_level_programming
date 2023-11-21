#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position.
 *
 * @head: head of a list.
 * @idx: index of the list where the new node is added.
 * @n: integer element.
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; (i < idx - 1 && h != NULL); i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = h->next;
		h->next = newNode;
	}

	return (newNode);
}
