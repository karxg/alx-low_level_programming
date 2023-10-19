#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: input string.
 *
 * Return: pointer to dest.
 */

char *rot13(char *s)

{
	int index = 0, i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char rot13[] = "nopqrstuvwxyzabcdefghijklm";

	while (*(s + index) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + index) == alpha[i])
			{
				*(s + index) = rot13[i];
				break;
			}
		}
		index++;
	}

	return (s);
}
