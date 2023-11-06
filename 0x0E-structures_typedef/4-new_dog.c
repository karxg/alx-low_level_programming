#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* new_dog - creates a new dog structure
*
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: pointer to new dog structure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *nameptr;
	char *ownerptr;

	/*allocate memory for the dog structure*/
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	/*allocate memory for the name and the owner*/
	nameptr = malloc(strlen(name) + 1);
	ownerptr = malloc(strlen(owner) + 1);

	/*free any allocated memory when memory allocation fails*/
	if (nameptr == NULL || ownerptr == NULL)
	{
		free(nameptr);
		free(ownerptr);
		free(dog);
		return (NULL);
	}

	/*copy the name and the owner strings to allocated memory*/
	strcpy(nameptr, name);
	strcpy(ownerptr, owner);

	/*set the dog structure*/
	dog->name = nameptr;
	dog->owner = ownerptr;
	dog->age = age;

	return (dog);
}
