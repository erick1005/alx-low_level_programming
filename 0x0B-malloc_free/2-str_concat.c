#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - entry
 * @s1: dest
 * @s2: src string of characters
 * Return: pointer to a memory
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, x = 0, y = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	y = i + j;
	str = malloc(sizeof(char));

	if (str == NULL)
		return (NULL);
	j = 0;

	while (x < y)
	{
		if (x <= i)
			str[x] = s1[x];
		if (x >= i)
		{
			str[x] = s2[j];
			j++;
		}
		x++;
	}
	str[x] = '\0';
	return (str);
}
