#include "lists.h"

/**
 * listint_len - entry funtion, displays number of elements
 * @h: nodes
 * Return: number of elements present
 */
size_t listint_len(const listint_t *h)
{
	size_t total = 0;

	while (h)
	{
		h = h->next;

		total++;
	}
	return (total);
}
