#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings
 *
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 *
 * Return: Pointer to resulting string.
 */

char *_strcat(char *dest, char *src)

{
	strcat(dest, src);
	return (dest);
}
