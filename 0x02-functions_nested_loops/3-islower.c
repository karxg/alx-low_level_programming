#include"main.h"

/**
 * _islower - function that checks if character is lowercase
 * @c: checks input of function
 * Description: Prints 10 times the alphabet
 * Return: (0) Success
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
