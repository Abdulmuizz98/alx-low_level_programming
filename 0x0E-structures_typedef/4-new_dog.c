#include "dog.h"
#include <stdlib.h>
/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
	dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

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

	d->name = _strcopy(d->name, name);
	d->age = age;
	d->owner = _strcopy(d->owner, owner);
	return (d);
}
