#include "dog.h"
#include <stdlib.h>
void free_dog(dog_t *d);
/**
 * free_dog - free an earlier created dog
 * @d: the pointer to the dog to be freed.
 *
 * Return: Nothing.
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
