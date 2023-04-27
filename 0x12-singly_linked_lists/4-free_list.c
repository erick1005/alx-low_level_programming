#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function free memory
 * @head: first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		if (head->str != NULL)
		node = head;
		head = head->next;

		free(node);
	}
}
