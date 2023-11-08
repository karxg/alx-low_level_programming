#include "function_pointers.h"

/**
 * print_name - prints a name.
 *
 * @name: name to print.
 * @f: function pointer.
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;
	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
