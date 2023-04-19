#include "function_pointers.h"

/**
 * array_iterator - entry
 * @array: elements to be excecuted
 * @size: size of the array
 * @action: execution
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		array[i];
	}
}
