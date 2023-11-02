#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)

{
	/*Declare a pointer to hold the allocated memory*/
	void *ptr;
	/*Attempt to allocate 'b' bytes of memory.*/
	ptr =  malloc(b);

	/*Check if malloc failed to allocate memory*/
	if (ptr == NULL)
	/*Exit the program with an error code of 98 on failure.*/
		exit(98);

	/*Return the pointer to the allocated memory on success.*/
	return (ptr);
}
