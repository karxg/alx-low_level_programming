#include"main.h"
#include <stdio.h>

/**
 * main - Entry point for the program
 * Description: program that prints _putchar, followed by a new line.
 * Return: 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; ++i)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
