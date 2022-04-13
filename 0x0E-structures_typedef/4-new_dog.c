#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - Creates a new dog
 * @name: variable name to be assigned to dog.
 * @age: variable age to be assigned to dog.
 * @owner: variable owner to be assigned to dog.
 *
 * Return: if it fails NULL,
 * otherwise, a pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
