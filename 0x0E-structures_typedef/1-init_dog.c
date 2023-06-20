#include "dog.h"

/**
 * init_dog - The function initialize a variable of type struct dog
 * @d : Structure tag
 * @name : Name of the dog
 * @age : Age of the dog
 * @owner : Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
