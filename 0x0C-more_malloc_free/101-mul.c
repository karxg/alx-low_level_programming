#include "main.h"

/**
* _puts - prints a string, followed by a new line,
* @string: pointer to the string to print
*/
void _puts(char *string)

{
int i = 0;

while (string[i])
{
	_putchar(string[i]);
	i++;
}

}

/**
* _atoi - convert a string to integer.
* @s: string
* Return: integer converted
*/
int _atoi(const char *s)
{
	int sign = 1;

	unsigned long int result = 0, fNum, i;

	for (fNum = 0; !(s[fNum] >= 48 && s[fNum] <= 57); fNum++)
	{
		if (s[fNum] == '-')
		{
			sign *= -1;
		}
	}

	for (i = fNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		result *= 10;
		result += (s[i] - 48);
	}

	return (sign * result);
}

/**
* print_int - prints an integer.
* @n: int
* Return: 0
*/
void print_int(unsigned long int n)
{

unsigned long int divider = 1, i, currentDigit;

for (i = 0; n / divider > 9; i++, divider *= 10)
;

for (; divider >= 1; n %= divider, divider /= 10)
{
	currentDigit = n / divider;
	_putchar('0' + currentDigit);
}

}

/**
* main - print the result of the multiplication, followed by a new line
* @argc: int
* @argv: list
* Return: 0
*/

int main(int argc, char const *argv[])

{
(void)argc;

if (argc != 3)
{
	_puts("Error ");
	exit(98);
}
print_int(_atoi(argv[1]) * _atoi(argv[2]));
_putchar('\n');

return (0);
}
