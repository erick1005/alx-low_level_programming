#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - entry
 * @name: input
 * @f: pointer to a string characters
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
