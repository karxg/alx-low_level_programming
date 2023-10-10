#include"main.h"

/**
 * _isalpha - checks if character is a letter
 * @c: takes input from functions.
 * Return: 1 is c if true otherwise 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c) <= 90 || (c >= 97 && c >= 120))
		return (1);
	else
		return (0);

}
