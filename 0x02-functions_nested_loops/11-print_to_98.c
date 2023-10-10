#include"main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * followed by a new line
 * @n: an Input from the user
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; --count)
			printf("%d, ", count);
	else if (n < 98)
		for (count = n; count < 98; ++count)
			printf("%d, ", count);
	else
		printf("98\n");
}
