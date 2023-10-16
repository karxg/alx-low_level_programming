#include "main.h"
/**
 * puts2 -  prints every other character of a string,
 * starting with the first characterو
 * followed by a new line.
 *
 * @str: char pointer
 *
 */

void puts2(char *str)

{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len; i++)

	{
		_putchar(str[i]);
		i = i + 1;
	}

	_putchar('\n');
}
