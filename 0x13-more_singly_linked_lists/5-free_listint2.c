#include "lists.h"

/**
 * free_listint2 - a function that frees the list and sets head to NULL
 *
 * @head: pointer to 1st node
 *
 * Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *currList, *t;

	if (head != NULL)
	{
		currList = *head;

		while ((t = currList) != NULL)
		{
			currList = currList->next;
			free(t);
		}

		*head = NULL;
	}
}
