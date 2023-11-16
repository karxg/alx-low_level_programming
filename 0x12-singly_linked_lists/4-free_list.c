#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
* free_list - frees a linked list
*
* @head: pointer to the first node of linked list
*
* Return: nothing
*/


void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *nextNode;

	while (temp != NULL)
	{
		nextNode = temp->next;
		free(temp->str);
		free(temp);
		temp = nextNode;
	}


}
