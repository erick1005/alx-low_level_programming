#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - displays list
 * @head: first node of the list
 * Return: intager
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t total = 0;

	if (head == NULL)
		exit(98);

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;

		total++;
	}
	return (total);
}
