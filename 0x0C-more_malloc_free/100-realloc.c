#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block.
 *
 * @ptr: Pointer to the old memory block.
 * @old_size: Size of the old memory block.
 * @new_size: New size for the memory block.
 *
 * Return: Pointer to the reallocated memory block,
 * NULL if new_size is 0 and ptr is not NULL, or if the allocation fails.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	void *new;
	unsigned int i, min_size;
	/*heck if reallocation is not needed, return the original pointer.*/
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*Determine the minimum size for data copying during resizing.*/
	if (old_size > new_size)
	{
		min_size = new_size;
	}
	else
	{
		min_size = old_size;
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}
	/*Allocate a larger memory block for resizing when new_size is greater.*/
	if (new_size > old_size)
	{
		new = malloc(new_size);
		if (new == NULL)
		{
			return (NULL);
		}
	}
	/*Copy data from the old block to the new block, up to the minimum size.*/
	for (i = 0; i < min_size; i++)
	{
		*((char *)new + i) = *((char *)ptr + i);
	}
	/*Free the old memory block.*/
	free(ptr);

	return (new);
}
