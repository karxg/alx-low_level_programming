#include "main.h"

/**
 * _strcmp - Copies a string.
 *
 * @s1: String reference.
 * @s2: String reference.
 *
 * Return: (0) equity
 */

int _strcmp(char *s1, char *s2)

{
	int i;

	for (i = 0; ((s1[i] != '\0') || (s2[i] != '\0')); i++)

	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
	}

	return (0);

}
