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
	int num = '0';

	while (num <= '9')
	{
	putchar(num);
	if (num < '9')
	{
		putchar(',');
		putchar(' ');
	}
	num++;
	}
	putchar('\n');
	return (0);
}
