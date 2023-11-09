#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @n: number of arguments.
 * @separator: string to be printed between the strings.
 * @...: variable number of strings to be printed
 *
 * Return: string printed, (nil) in case of string is NULL.
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	va_list argList;
	char *str;

	va_start(argList, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(argList, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(argList);
	printf("\n");
}
