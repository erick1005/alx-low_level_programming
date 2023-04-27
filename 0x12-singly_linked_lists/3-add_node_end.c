#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - creates new note at the end of the list
 * @head: first node
 * @str: inputs
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node;
	}
	return (node);
}
