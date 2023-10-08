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
	for (char num1 = '0'; num1 <= '9'; num1++)
	{
		for (char num2 = num1 + 1; num2 <= '9'; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 != '8' || num2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
