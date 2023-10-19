#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @s: input string.
 *
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)

{
	int index = 0;

	while (*(s + index) != '\0')
	{
		if ((*(s + index) >= 97) && (*(s + index) <= 122))
			*(s + index) = *(s + index) - 32;
		index++;
	}

	return (s);
}
