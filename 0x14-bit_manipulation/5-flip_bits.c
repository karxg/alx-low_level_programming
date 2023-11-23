#include "main.h"

/**
 * flip_bits - number of bits you would need to
 * flip to get from one number to another.
 *
 * @n: input nubmer one
 * @m: input nubmer two.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numBits;

	for (numBits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			numBits++;
		}
	}

	return (numBits);
}
