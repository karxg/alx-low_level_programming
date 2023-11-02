#include "main.h"
#include <stdlib.h>

/**
 * newArray_range - Creates an newArray of integers ordered
 *               from min to max, inclusive.
 *
 * @min: The first value of the newArray.
 * @max: The last value of the newArray.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created newArray.
 */

int *newArray_range(int min, int max)
{
	/*Declare a pointer to hold the array.*/
	int *newArray;
	int count, size;

	if (min > max)
		return (NULL);
	/*Calculate the size of the array within the range*/
	size = max - min + 1;
	/*Allocate memory for the array*/
	newArray = malloc(sizeof(int) * size);

	if (newArray == NULL)
		return (NULL);
	/*Fill the array with values from 'min' to 'max'*/
	for (count = 0; count < size; count++)
		newArray[count] = min++;

	return (newArray);
}