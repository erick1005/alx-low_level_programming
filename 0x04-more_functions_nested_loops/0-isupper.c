#include "main.h"

/**
 * _isupper - checks for upper case
 * @c: chaacter to be checked
 * Return: 1 for correct and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
