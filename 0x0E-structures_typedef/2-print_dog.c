#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: the struct dog to be printed
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		if (d->age == 0)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: %s\n", "(nil)");
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
