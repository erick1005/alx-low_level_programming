#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function adds data
 * @head: first node of the linked list
 * Return: total of all the data in list
 */
int sum_listint(listint_t *head)
{
	listint_t *new_node;
	int sum = 0;

	new_node = head;

	if (new_node == NULL)
		return (0);

	while (new_node != NULL)
	{
		sum += new_node->n;
		new_node = new_node->next;
	}
	return (sum);
}
