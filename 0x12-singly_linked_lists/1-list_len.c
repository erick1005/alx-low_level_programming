#include "lists.h"

/**
 * list_len - function entry
 * @h: string input
 * Return: number of lements
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
