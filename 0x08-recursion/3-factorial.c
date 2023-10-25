#include "main.h"

/**
* factorial - returns the factorial of a given number.
*
* @n: number input
*
* Return: If n > 0 - the factorial of n.
*	If n < 0 - return -1
*	If n = 0 - return 0
*
*/

int factorial(int n)
{
		if (n == 0)
		{
			return (n);
		}

		else if (n == 1)
		{
			return (1);
		}

		else if (n < 0)
		{
			return (-1);
		}

	else
		return (n * factorial(n - 1));
}
