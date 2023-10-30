#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array that to be initialized.
 * @c: char to intialize the array with
 *
 * Return: when size == 0 NULL.
 *         Otherwise - pointer to the array.
 *
 */

char *create_array(unsigned int size, char c)

{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
