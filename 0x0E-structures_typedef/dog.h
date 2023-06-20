#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - The dog structure
 * @name : Dog's name
 * @age : Dog's age
 * @owner : The dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
