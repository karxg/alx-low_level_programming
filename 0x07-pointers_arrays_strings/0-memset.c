#include "main.h"

/**
 * _memset - fills memory with a constant byte,
 * @s: string.
 * @b: constant character.
 * @n: integer bytes filled.
 * Return: the pointer to dest.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
