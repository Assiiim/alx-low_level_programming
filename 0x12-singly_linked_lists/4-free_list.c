#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: head of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		free(temp->str);
		head = temp->next;
		free(temp);
	}
}
