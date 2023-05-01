#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees memory
 * @head: first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *new_node;

	while (*head != NULL)
	{
		new_node = *head;
		*head = (*head)->next;

		free(new_node);
	}
	*head = NULL;
}
