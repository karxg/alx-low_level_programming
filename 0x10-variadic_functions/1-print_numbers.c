#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @n: number of integers passed to the function.
 * @separator: string to be printed between numbers.
 * @... : numbers to calculated the sum of.
 *
 * Return: (0).
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	va_list argList;

	if (n > 0)
	{
		va_start(argList, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(argList, int));

			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}

		va_end(argList);
	}

	printf("\n");
}
