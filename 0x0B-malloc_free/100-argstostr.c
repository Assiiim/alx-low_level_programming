#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that prints arguments to string
 * @ac:  argument count
 * @av: argument vector
 * Return: pointer to character
 */

char *argstostr(int ac, char **av)
{
	char *box;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	box = malloc(sizeof(char) * len + (ac + 1));

	if (box == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			box[k++] = av[i][j];
		box[k++] = '\n';
	}
	box[len + ac] = '\0';
	return (box);
}
