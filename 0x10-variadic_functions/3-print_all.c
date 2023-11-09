#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 *
 * @format: list of types of arguments passed to the function
 * @...: list of variables.
 *
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list argList;

	va_start(argList, format);

	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(argList, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(argList, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(argList, double));
					break;
				case 's':
					str = va_arg(argList, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(argList);
}
