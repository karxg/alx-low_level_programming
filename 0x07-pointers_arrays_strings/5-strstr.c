#include "main.h"

/**
 * _strstr - Locates a substring.
 *
 * @haystack: The string to be searched for.
 * @needle: The substring to be located.
 *
 * Return: When substring is located - pointer to the beginning.
 * When substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)

{
	char *h, *n;

		h = haystack;
		n = needle;

	while (*haystack != '\0')

	{
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}

	return ('\0');
}
