#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 *
 * @s: Pointer to put the constant
 * @b: constant
 * @n: max bytes to us
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
