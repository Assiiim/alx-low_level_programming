#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to a structure dog
 * Return: return void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: ");
		printf("%f\n", d->age);
		printf("OWner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}

	if (d == NULL)
		return;
}
