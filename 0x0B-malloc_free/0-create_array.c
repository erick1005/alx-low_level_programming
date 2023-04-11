#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creating an array
 * @size: array size
 * @c: variable
 * Return: pointer to an arrya
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
