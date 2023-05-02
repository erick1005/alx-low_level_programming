#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - entry.
 * @head: first node
 * Return: adrress of new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_node;
	listint_t *next;

	new_node = NULL;

	while (*head != NULL)
	{
		listint_t *next = (*head)->next;
		(*head)->next = new_node;
		new_node = *head;
		*head = next;
	}
	*head = new_node;
	return (*head);
}
