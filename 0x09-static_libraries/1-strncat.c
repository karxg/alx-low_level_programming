#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Maximum number of bytes from @src.
 *
 * Return: Pointer to resulting string.
 */

char *_strncat(char *dest, char *src, int n)

{
	strncat(dest, src, n);
	return (dest);
}
