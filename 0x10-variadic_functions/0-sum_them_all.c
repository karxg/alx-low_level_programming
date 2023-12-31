#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: number input.
 * @... : numbers to calculated the sum of.
 *
 * Return: sum of numbers. and (0) when input numbers == 0.
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list argList;

	int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(argList, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		int arg = va_arg(argList, int);

		sum = sum + arg;
	}
	va_end(argList);

	return (sum);
}
