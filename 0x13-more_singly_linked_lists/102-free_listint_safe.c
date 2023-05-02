#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - free space
 * @h: first node
 * Return: int
 */
size_t free_listint_safe(listint_t **h)
{
	size_t total = 0;

	listint_t *new_node;

	if (!*h || !h)
	{
		return (total);
	}

	while (h)
	{
		new_node = (*h)->next;
		free(*h);
		*h = new_node;

		total++;

	}
	return (total);
}
