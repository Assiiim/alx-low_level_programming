#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1:  string one
 * @s2: string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;

	if (s2 == NULL)
		s2 = "";
	for (j = 0; s2[j] != '\0'; j++)
		;

	s = malloc(sizeof(char) * (i + j) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[j + i] = s2[j];
	}
	s[j + i] = '\0';
	return (s);
}
