#include "main.h"
#include "stdio.h"
/**
* _memset - fills memory with a constant byte.
* @s: Pointer to the memory area to be filled.
* @b: Byte to fill the memory area with.
* @n: Bytes to fill.

* Return: Pointer to the filled memory area.
*/

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
