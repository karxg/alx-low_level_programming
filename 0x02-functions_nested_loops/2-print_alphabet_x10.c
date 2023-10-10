#include"main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 * Description: Prints 10 times the alphabet
 * A function to print x10 Alphabet
*/

void print_alphabet_x10(void)
{
	int j, k;

	for (j = 0; j <= 9; ++j)
	{
		for (k = 'a'; k <= 'z'; ++k)
			_putchar(k);
		_putchar('\n');
	}
}
