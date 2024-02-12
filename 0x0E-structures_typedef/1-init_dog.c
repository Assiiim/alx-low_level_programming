#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initializes a variable of type
 * @d: pointer to structure
 * @name: pointer to name member
 * @age: age
 * @owner: owner member
 * Return: nothing
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
