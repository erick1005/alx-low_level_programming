#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - display node at nth pos
 * @head: first node
 * @index: position
 * Return: data of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index && head)
	{
		head = head->next;
	}
	return (head);
}
