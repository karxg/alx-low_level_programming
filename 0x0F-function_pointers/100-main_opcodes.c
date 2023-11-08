#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes.
 *
 * @func_ptr: pointer to function.
 * @n: number of bytes to print.
 *
 * Return: void
 */

void print_opcodes(char *func_ptr, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", func_ptr[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints opcodes of main function.
 *
 * @argc: number of command line arguments.
 * @argv: array of pointers to arguments.
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, n);

	return (0);
}
