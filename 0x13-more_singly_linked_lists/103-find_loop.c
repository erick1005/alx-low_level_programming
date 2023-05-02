#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - entry function finds loop
 * @head: first link nod
 * Return: adress to tha start of repetition
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t **new_node;

	size_t s = 0;

	*new_node = malloc(sizeof(listint_t *) * 1024);

	while (head)
	{
		for (s = 0; new_node[s]; s++)
		{
			if (new_node[s] == head)
			{
				free(new_node);
				return (head);
			}
		}
		new_node[s] = head;
		head = head->next;
	}
	free(new_node);
	return (NULL);
}
