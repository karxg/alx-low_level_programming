#include "main.h"
#include <stdlib.h>

/**
* argstostr - Concatenates all arguments of the program
*
* @ac: number of arguments.
* @av: array of pointers to arguments.
*
* Return: If ac == 0, av == NULL, or the function fails - NULL.
* Otherwise - a pointer to the new string.
*/


char *argstostr(int ac, char **av)

{
	char *str;

	int arg, byte, index, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)

	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * (size + ac));

	if (str == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];

		if (arg < ac - 1)
			str[index++] = '\n';
	}

	str[index] = '\0';

	return (str);
}
