#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *new;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	new = malloc(sizeof(int) * size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new[i] = min++;
	return (new);
}
