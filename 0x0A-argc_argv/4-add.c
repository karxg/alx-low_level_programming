#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
* isNumber - Check if a string represents a number.

* @str: The string to check.

* Return: 1 if it's not a number, 0 if it's a number.
*/

int isNumber(char str[])
{
	int i, length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if (!isdigit(str[i]))
			return (1);
	}
	return (0);
}

/**
* main - program that adds positive numbers.
*
* @argc: The number of arguments passed.
* @argv: An array of strings containing the arguments.
*
* Return: 0 for success, 1 for error.
*/

int main(int argc, char *argv[])

{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isNumber(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
