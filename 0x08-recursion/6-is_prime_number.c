#include "main.h"

/**
 * PrimeOrNot - function to find prime number
 *
 * @i: first number
 * @guess: second number
 *
 * Return: 1 when true, 0 when false
 */

int PrimeOrNot(int i, int guess)
{
	if (guess == 1)
	{
		return (1);
	}
	if (i % guess == 0)
	{
		return (0);
	}
	else
	{
		return (PrimeOrNot(i, guess - 1));
	}
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: prime number
 *
 * Return: 1 when prime, 0 when not
 */

int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	else
	{
		return (PrimeOrNot(n, n - 1));
	}
}
