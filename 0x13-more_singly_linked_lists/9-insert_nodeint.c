#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - add node at n
 * @head: first node
 * @idx: index in place of the node
 * @n: data to be added to the node
 * Return: adress to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp;
	unsigned int i;

	tmp = *head;
	i = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (i < idx - 1)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
		i++;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
