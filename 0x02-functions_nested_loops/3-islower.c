#include"main.h"

/**
 * _islower - function that checks if character is lowercase
 * @i: checks input of function
 * Description: Prints 10 times the alphabet
 * Return: (0) Success
*/

int _islower(int i)
{
	if (i >= 97 && i <= 122)
		return (1);
	return (0);
}
