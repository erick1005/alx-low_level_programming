#include "function_pointers.h"

/**
 * print_name - entry
 * @name: input to display
 * @f: pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
