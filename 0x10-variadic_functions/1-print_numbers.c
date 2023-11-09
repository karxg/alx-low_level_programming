#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @n: number of integers passed to the function.
 * @... : numbers to calculated the sum of.
 *
 * Return: sum of numbers. and (0) when input numbers == 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	va_list argList;

	if (separator != NULL)
	{
		va_start(argList, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(argList, int));

			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}

		va_end(argList);
	}

	printf("\n");
}
