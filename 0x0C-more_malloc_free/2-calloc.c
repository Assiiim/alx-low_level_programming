#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements in the array
 * @size: size of bytes for each element
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new;
	unsigned int i;
	char *tmp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new = malloc(size * nmemb);
	if (new == NULL)
		return (NULL);
	tmp = new;

	for (i = 0; i < (size * nmemb); i++)
		tmp[i] = '\0';

	return (new);
}
