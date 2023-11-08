#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point for program.
 *
 * @argc: number of arguments from command line.
 * @argv: array of strings hold command line arguments.
 *
 * Return: (0) success, (Error, exit) failure.
 */

int main(int argc, char *argv[])

{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (oprt == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
