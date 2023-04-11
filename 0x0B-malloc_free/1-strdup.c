#include "main.h"
#include <string.h>

/**
 * _strdup - returning a pointer to anew string
 * @str: input string
 * Return: a pointer to a space in memory
 */
char *_strdup(char *str)
{
	char *new_string = strdup(str);

	if (str == NULL || new_string == NULL)
	{
		return (NULL);
	}
	return (new_string);
}
