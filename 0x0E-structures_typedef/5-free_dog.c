#include "dog.h"

/**
 * free_dog - The functon frees dogs
 * @d : The dog structure pointer
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
