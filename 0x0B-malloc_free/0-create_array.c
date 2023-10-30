#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_arrayay - creates an arrayay of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the arrayay that to be initialized.
 * @c: char to intialize the arrayay with
 *
 * Return: when size == 0 NULL.
 *         Otherwise - pointer to the arrayay.
 */

char *create_arrayay(unsigned int size, char c)

{
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(c) * size);

	if (array == NULL)
		return (NULL);

	while (size)
		array[--size] = c;

	return (array);
}

