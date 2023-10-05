#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - Entry Program point
 *
 * Description: Using char function to print a sentecne
 *
 * Return: 1 (failed)
*/

int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, strlen(message));
	return (1);
}
