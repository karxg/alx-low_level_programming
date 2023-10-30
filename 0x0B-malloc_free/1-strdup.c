#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate_Str
 * of the string
 *
 * @str: The string to be duplicate_Strd.
 *
 * Return: If str is NULL or if malloc() fails - NULL.
 */

char *_strdup(char *str)
{
	char *duplicate_Str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	duplicate_Str = malloc(sizeof(char) * (len + 1));

	if (duplicate_Str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate_Str[i] = str[i];

	duplicate_Str[len] = '\0';

	return (duplicate_Str);
}
