#include "main.h"
#include <stdlib.h>
/**
* _realloc - Reallocates a memory block using malloc and free.
*
* @ptr: Pointer to the memory previously allocated with malloc.
* @old_size: The size of the allocated memory block.
* @new_size: The new size for the memory block.
*
* Return:
* If memory reallocation is successful - a pointer to the reallocated memory block.
* If the new size is zero and the original pointer is not NULL - the memory is freed, and NULL is returned.
* If reallocation fails - NULL is returned.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	/*Declare a pointer to the reallocated memory block.*/
	void *newBlock;
	unsigned int i, minSize;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*Determine the minimum size for copying data during resizing.*/
	if (old_size > new_size)
	{
		minSize = new_size;
	}
	else
	{
		minSize = old_size;
	}
	/*If the new size is equal to the old size, no resizing is needed; return the original pointer.*/
	if (new_size == old_size)
	{
		return (ptr);
	}
	/*If the original pointer is NULL, allocate a new memory block for the desired size.*/
	if (ptr == NULL)
	{
		newBlock = malloc(new_size);
		return (new);
	}
	/*If the new size is greater than the old size, allocate a larger memory block for resizing.*/
	if (new_size > old_size)
	{
		newBlock = malloc(new_size);
		if (new == NULL)
		{
			return (NULL);
		}
	}
	/*Copy data from the old block to the new block, up to the minimum size.*/
	for (i = 0; i < minSize; i++)
	{
		*((char *)newBlock + i) = *((char *)ptr + i);
	}
	free(ptr);

	return (newBlock);
}
