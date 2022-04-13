#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: the struct dog to be initialized
 * @name: variable name to be assigned to dog.
 * @age: variable age to be assigned to dog.
 * @owner: variable owner to be assigned to dog.
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
