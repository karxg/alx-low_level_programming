#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: length when succesfull
 */

unsigned int _strspn(char *s, char *accept)

{
	size_t n;
	char *p;

	for (n = 0; *s; s++, n++)
	{
	for (p = accept; *p && *p != *s; p++)
		;
	if (!*p)
		break;
	}
	return (n);
}
