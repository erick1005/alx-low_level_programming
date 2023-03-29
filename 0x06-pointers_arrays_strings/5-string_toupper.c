#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - changes all lowercase to uppercases characters
 * @str: string characters input
 * Return: string of characters
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}
		i++;
	}
	return (str);
}
