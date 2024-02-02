#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_djb2 - hash function implementing the djb2 algorithm.
  * @str: The value to the function
  *
  * Return: A hash value representing string
  */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int value;
	int character;

	value = 5381;

	while ((character = *str++))
	{
		value = ((value << 5) + value) + character;
	}

	return (value);
}
