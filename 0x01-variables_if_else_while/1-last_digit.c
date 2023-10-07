#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry pointo for the program
 *
 * Description:program that check if the n value greater or lesser or equal 0
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
		printf ("%d is positive\n", n);
	else if(n == 0)
		printf ("%d is zero\n", n);
	else
		printf ("%d is negative\n", n);
	return (0);
}
