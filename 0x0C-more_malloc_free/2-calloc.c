#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory using calloc.
 * @nmemb: This is the number of elements
 * @size: This is the size of elements.
 * Return: array refrance or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	/*Declare a pointer to hold the allocated memory.*/
	void *ptr;

	/*Check if either nmemb or size is zero, and return NULL if true.*/
	if (nmemb == 0 || size == 0)
		return (NULL);
	/*Allocate memory for an array of elements*/
	ptr = calloc(nmemb, size);
	/*Check if memory allocation failed, and return NULL if it did.*/
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
