#include "function_pointers.h"

/**
 * array_iterator - excecute entry
 * @array: array
 * @size: array size
 * @action: execution
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
