#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adding two numbers.
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: result of addition operation.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers.
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: result of substraction operation.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers.
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: result of multiplication operation.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers.
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: result of division operation.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - calculates the modulus of two numbers.
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: result of modulus operation.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
