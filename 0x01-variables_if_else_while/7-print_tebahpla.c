#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description:program that prints the alphabet in lowercase
 * followed by a new line. Print all the letters except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{	putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
