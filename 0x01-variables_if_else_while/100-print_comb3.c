#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: program prints all possible different combinations of 2 digits
 * Numbers must be separated by ,, followed by a space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num1, num2;
	int i = 0;

	for (num2 = '0'; num2 != ('8' + 1); num2++)
	{
		for (num1 = '1' + i; num1 != ('9' + 1); num1++)
		{
		putchar(num2);
		putchar(num1);
		if (!((num2 == '8') && (num1 == '9')))
			{
			putchar(',');
			putchar(' ');
			}

		}
	i++;
	}
	putchar('\n');
	return (0);
}
