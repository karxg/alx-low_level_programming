#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description:program that prints the alphabet in lowercase
 * and then in uppercase
 * followed by a new line.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char letter = 'a';

	while (letter != 'z')
		putchar(letter++);

	letter = 'A';
	while (letter != 'Z')
		putchar(letter++);
	putchar('\n');
	return (0);
}
