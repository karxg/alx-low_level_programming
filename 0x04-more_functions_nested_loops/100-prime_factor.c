#include <stdio.h>

/**
* main - entry point for the program
* Retur: 0 Success
*/

int main(void)

{
	long long n = 612852475143;

	long long largestPrime = 0;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (long long i = 3; i * i <= n; i += 2)

	{
		while (n % i == 0)
		{
			n /= i;
			largestPrime = i;
		}
	}

	if (n > 1)
	{
		largestPrime = n;
	}

	printf("%lld\n", largestPrime);
	return (0);
}
