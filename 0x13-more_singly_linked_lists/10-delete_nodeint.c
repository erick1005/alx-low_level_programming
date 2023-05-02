#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function entry
 * @head: first node
 * @index: node to be deleted
 * Return: 1 for success and -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_node;
	listint_t *next;
	unsigned int i;

	new_node = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head =  new_node->next;
		free(new_node);
		return (1);
	}

	while (new_node != NULL && i < index - 1)
	{
		new_node = new_node->next;

		i++;
	}

	if (new_node == NULL || new_node->next == NULL)
		return (-1);
	next = new_node->next->next;
	free(new_node->next);
	new_node->next = next;

	return (1);
}
