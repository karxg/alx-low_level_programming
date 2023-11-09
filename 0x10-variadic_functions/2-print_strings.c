#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @n: number of arguments.
 * @separator: string to be printed between the strings.
 * @... : variables.
 *
 * Return: string printed, (nil) in case of string is NULL.
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	va_list argList;

	va_start(argList, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(argList, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else if (i < n - 1 && str != NULL)
		{
			printf("%s%s", str, separator);
		}
		else
		{
			printf("%s", str);
		}
	}
	va_end(argList);
	printf("\n");
}
