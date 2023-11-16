#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
* add_node - adds a new node to the beginning of a linked list
*
* @head: pointer to the head of the list
* @str: string to be added to the new node
*
* Return: pointer to the new node, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
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
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
