#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - creates new note at the begining of the list
 * @head: first node
 * @str: inputs
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
