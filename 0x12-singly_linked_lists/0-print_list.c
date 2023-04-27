#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function entry
 * @h: elements
 * Return: all elements in list_t
 */
size_t print_list(const list_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		total++;
	}
	return (total);
}
