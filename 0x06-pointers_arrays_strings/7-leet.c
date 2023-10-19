#include "main.h"
/**
 * leet - Encodes string into 1337
 *
 * @s: input string.
 *
 * Return: Pointer to dest.
 */

char *leet(char *s)

{
	int index = 0, i;
	int ll[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + index) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + index) == ll[i] || *(s + index) == ul[i])
			{
				*(s + index) = num[i];
				break;
			}
		}
		index++;
	}

	return (s);
}
