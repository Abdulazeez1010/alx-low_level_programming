#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - A new struct type called dog
 * @name : Name of dog
 * @age : Age of dog
 * @owner : Owner of og
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* ifndef DOG_H*/
