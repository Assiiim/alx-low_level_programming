#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - function that returns the numbers of elements
 * in a linked list_t list
 * @h: head of linked list
 * Return: number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != 0)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
