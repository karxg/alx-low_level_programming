#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description:program that prints all possible combinations of
 * single-digit numbers. Numbers must be separated by , followed by a space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int letter = '0';

	while (letter != ('f' + 1))
	{
		putchar(letter++);
		if (letter == ('9' + 1))
			letter = 'a';
	}
	putchar('\n');

	return (0);
}
