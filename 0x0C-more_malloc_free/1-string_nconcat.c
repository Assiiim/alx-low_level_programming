#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1:  string one
 * @s2: string two
 * @n:  number of bytes to copied from s2
 * Return: new allocated pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i, j;
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		lens1++;
	for (i = 0; s2[i] != '\0'; i++)
		lens2++;
	if (n >= lens2)
		n = lens2;
	new = malloc(sizeof(char) * (lens1 + n) + 1);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		new[i] = s1[i];
	for (j = 0; j < n; j++)
		new[i + j] = s2[j];
	new[i + j] = '\0';

	return (new);
}
