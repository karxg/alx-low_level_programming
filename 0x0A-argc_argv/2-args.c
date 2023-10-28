#include <stdio.h>

/**
 * main - prints all arguments that it receives.
 *
 * @argc: number of arguments
 * @argv: array
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])

{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
