#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function frees a 2d array
 * @grid: pointer to 2d array
 * @height:  height of the array
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
