#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to append to s1
 *
 * Return: If memory allocation fails - NULL.
 *         Otherwise - a pointer to the resulting concatenated
 * string in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *concat;
	unsigned int totalLength = n, index;

	/*Check if s1,S2 is NULL and set it to an empty string if necessary.*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*Calculate the length of s1 by counting its characters*/
	for (index = 0; s1[index]; index++)
		totalLength++;

	/***
	 * Allocate memory for the concatenated string
	 * with enough space for the null terminator.
	 */
	concat = malloc(sizeof(char) * (totalLength + 1));

	if (concat == NULL)
		return (NULL);

	totalLength = 0;

	/*Copy characters from s1 to the concatenated string.*/
	for (index = 0; s1[index]; index++)
		concat[totalLength++] = s1[index];

	/*Copy characters from s2 to the concatenated string, limited by 'n'*/
	for (index = 0; s2[index] && index < n; index++)
		concat[totalLength++] = s2[index];

	concat[totalLength] = '\0';

	return (concat);
}
