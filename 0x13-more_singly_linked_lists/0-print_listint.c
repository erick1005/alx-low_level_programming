#include "lists.h"
#include <stdio.h>

/**
 * print_listint - displays all the elements
 * @h: nodes
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t total = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;

		total++;
	}
	return (total);
}
