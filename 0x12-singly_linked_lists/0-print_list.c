#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements
 * of a list_t list
 * @h: head of a list
 * Return: integer i.e number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != 0)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}
	return (count);
}
