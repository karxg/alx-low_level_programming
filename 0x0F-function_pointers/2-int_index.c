#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * on each element of an array.
 *
 * @array: array of integars.
 * @size: size of the array.
 * @cmp: funtcion pointer.
 *
 * Return: (-1) If no element matches or size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (size > 0 && cmp != NULL && array != NULL)
	{
		for (i = 0; i < (int)size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
