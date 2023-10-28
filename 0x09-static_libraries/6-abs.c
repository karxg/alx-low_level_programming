#include <stdio.h>
#include "main.h"
/**
* _abs - computes the absolute value of an integer
* @i: the integer we want to know the absolute value
* Return: the absolute value of i
*/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (-i);
	}
	return (0);
}
