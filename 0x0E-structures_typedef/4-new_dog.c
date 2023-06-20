#include "dog.h"

/**
 * new_dog - The function creates a new dog
 * @name : The dog's name
 * @age : The dog's age
 * @owner : The dog's owner
 * Return: Returns a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
