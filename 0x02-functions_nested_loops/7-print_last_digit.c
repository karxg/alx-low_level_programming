#include"main.h"

/**
 * print_last_digit - print last num of a number.
 * @i: a number input
 * Return: Last number of an input
*/

int print_last_digit(int i)
{
	int lastNum;

	if (i < 0)
		lastNum = -1 * (i % 10);
	else
		lastNum = i % 10;

	_putchar(lastNum + '0');
	return (lastNum);
}
