#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: a pointer to the allocated space
 */

void *malloc_checked(unsigned int b)
{
	void *point = malloc(b);

	if (point == NULL)
		exit(98);

	return (point);
}
