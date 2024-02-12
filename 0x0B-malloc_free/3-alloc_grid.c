#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 - dimensional array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **cont;
	int i, j = 0;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	cont = malloc(sizeof(*cont) * height);

	if (cont == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		cont[i] = malloc(sizeof(**cont) * width);
		if (cont[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(cont[i]);
			free(cont);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			cont[i][j] = 0;
	}
	return (cont);
}
