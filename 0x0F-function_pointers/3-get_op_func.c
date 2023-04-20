#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func - entry
 * @s: input
 * Return: integer
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};

	if (*s != '+' && *s != '-' && *s != '*' && *s != '/' && *s != '%')
        	return (NULL);


	for (i = 0; i < 5; i++)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
	}
	return (0);
}
