#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - removes first node
 * @head: first node
 * Return: data of the removed node
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head == NULL)
		return (0);
	new_node = *head;
	n = new_node->n;
	*head = (*head)->next;

	free(new_node);
	return (n);
}
