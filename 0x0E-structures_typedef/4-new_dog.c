#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * dog_t *new_dog - The function creates a new dog
 * @name : Name of the dog
 * @age : Age of the dog
 * @owner : Owner of the dog
 * Return: A pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *name_copy, *owner_copy;

	name_copy = strdup(name);
	if (name_copy == NULL)
		return (NULL);

	owner_copy = strdup(owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		return (NULL);
	}

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
