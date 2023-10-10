#include"main.h"

/**
 * print_alphabet - prints the alphabe, in lowercase, followed by a new line
 * usint _putchar
*/

void print_alphabet(void)
{
	char i;

	i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
