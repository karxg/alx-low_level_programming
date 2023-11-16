#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
* add_node_end - adds a new node at the end of a list_t list.
*
* @head: pointer to the head of the list
* @str: string to be added to the new node
*
* Return: pointer to the new node, or NULL if it fails
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	size_t strLen;
	size_t i;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	strLen = strlen(str);

	newNode->str = malloc((strLen + 1) * sizeof(char));
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	for (i = 0; i <= strLen; ++i)
	{
		newNode->str[i] = str[i];
	}
	newNode->len = strLen;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
