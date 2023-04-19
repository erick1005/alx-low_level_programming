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
	unsigned long int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
