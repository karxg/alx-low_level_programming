#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: input 1
 * @b: input 2
 *
 */

void swap_int(int *a, int *b)

{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
