#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: str to be added
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
