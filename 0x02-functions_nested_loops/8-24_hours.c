#include "main.h"

/**
 * jack_bauer - entry, prints every minute
 *
 * Return: sets but doesnt return any value
 */
void jack_bauer(void)
{
	int hour;

	for (hour = 0; hour < 24; hour++)
	{
	int minute;

	for (minute = 0; minute < 60; minute++)
	{
		putchar ('0' + hour / 10);
		putchar ('0' + hour % 10);
		putchar(':');
		putchar ('0' + minute / 10);
		putchar ('0' + minute % 10);
		putchar('\n');
	}
	}
}
