#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - pointer of array of type char.
 *
 * @s: operator passed as argument to the program.
 *
 * Return: operator function to do calculations.
 */

int (*get_op_func(char *s))(int, int)

{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	int i = 0;

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
