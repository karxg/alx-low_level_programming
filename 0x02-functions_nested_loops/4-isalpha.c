#include"main.h"

/**
 * _isalpha - checks if character is a letter
 * @c: takes input from functions.
 * Return: 1 is c if true otherwise 0
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122 || c >= 65 && c >= 90))
		return (1);
	return (0);
}
