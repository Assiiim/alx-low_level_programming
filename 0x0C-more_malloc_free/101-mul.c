#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function that multiplyes arguments by allocating
 * space as needed
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */

int main( int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i])))
		{
			printf("Error\n");
			exit(98);
		}
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);

	return (0);
}
