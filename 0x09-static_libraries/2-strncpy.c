#include "main.h"
#include <string.h>

/**
 * _strncpy - Copies a string.
 *
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to resulting string @dest.
 */

char *_strncpy(char *dest, char *src, int n)

{
	strncpy(dest, src, n);
	return (dest);
}
