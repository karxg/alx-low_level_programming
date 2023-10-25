#include "main.h"

/**
 * SqrtOrNot - function to check the sqrt function
 *
 * @i: first number
 * @guess: second number
 *
 * Return: square root of number
 */

int SqrtOrNot(int i, int guess)
{
	if (guess * guess > i)
	{
		return (-1);
	}
	if (guess * guess == i)
	{
		return (guess);
	}
	else
	{
		return (SqrtOrNot(i, guess + 1));
	}
}

/**
 * _sqrt_recursion - returns square root of a number.
 *
 * @n: first number
 * Return: square root of number
 * -1 if false
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (SqrtOrNot(n, 1));
	}
}
