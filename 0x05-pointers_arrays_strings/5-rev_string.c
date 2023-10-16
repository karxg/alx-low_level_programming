#include "main.h"
/**
* rev_string - reverses a string.
*
* @s: The string to reverse My School.

*/

void rev_string(char *s)

{
	int i = 0;
	int j;
	int temporary;

	while (s[i] != '\0')

	{
		++i;
	}

	for (j = 0; j < i / 2; j++)

	{
		temporary = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temporary;
	}

}
