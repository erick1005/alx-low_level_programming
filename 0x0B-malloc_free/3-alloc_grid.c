#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - entry
 * @width: columns
 * @height: rows
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **arr;

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (a = 0; a < height; a++)
		arr[a] = malloc(sizeof(int) * width);
	if (arr[a] == NULL)
	{
		for (b = a; b >= 0; b--)
		{
			free(arr[b]);
		}
		free(arr);
		return (NULL);
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			arr[c][d] = 0;
		}
	}
	return (arr);
}
