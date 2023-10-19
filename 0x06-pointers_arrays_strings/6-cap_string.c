#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 *
 * @src: String refrence.
 *
 * Return: All words of a string capital.
 */

char *cap_string(char *src)

{
	int i;

	i = 0;
	if ((src[i] >= 'a') && (src[i] <= 'z'))
	{
		src[i] = src[i] - 32;
	}
	while (src[i] != '\0')
	{
		if ((src[i] == ' ')
		|| (src[i] == '\t')
		|| (src[i] == '\n')
		|| (src[i] == ',')
		|| (src[i] == ';')
		|| (src[i] == '.')
		|| (src[i] == '!')
		|| (src[i] == '?')
		|| (src[i] == '"')
		|| (src[i] == '(')
		|| (src[i] == ')')
		|| (src[i] == '{')
		|| (src[i] == '}'))
		{
			if ((src[i + 1] >= 'a') && (src[i + 1] <= 'z'))
			{
				src[i + 1] = src[i + 1] - 32;
			}
		}
		i++;
	}
	return (src);
}
