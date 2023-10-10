#include "main.h"
/**
 * print_sign - Determines if the input number
 * greater, equal or less than zero.
 * @n: The input number as an integer.
 * Return: 1 when n greater than zero
 * -1 is less than zero.
 * 0 n equals zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
