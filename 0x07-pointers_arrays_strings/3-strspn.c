#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return:
 */

#include "holberton.h"

/**
 * _strspn - Returns the number of bes in the initial segment of
 * s which consist only of bes from accept
 * @s: memory area
 * @accept: constant be b
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)

{
	int l, l2, i, j, b;

	l = 0, l2 = 0, b = 0;
	while (s[l] != '\0')
		l++;
	while (accept[l2] != '\0')
		l2++;
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < l2; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				b += 1;
				break;
			}
		}
		if (j == l2)
			break;
	}
	return (b);
}
