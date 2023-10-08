#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description:program that prints the aphabet in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

do {
putchar(ch);
ch++;
} while (ch <= 'z');
putchar('\n');

	return (0);
}
