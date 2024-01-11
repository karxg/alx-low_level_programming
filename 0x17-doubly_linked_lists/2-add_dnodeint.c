#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning of a dlistint_t list.
 *
 * @head: pointer to head pointer
 * @n: value of node
 *
 * Return: Null when fail otherwise nodes adress
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
