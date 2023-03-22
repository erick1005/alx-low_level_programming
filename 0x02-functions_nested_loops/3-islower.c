#include "main.h"

/**
 * _islower - checks the character
 *@c: the item to be checked
 * Return:1 for success or 0 for failure
 */
int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
