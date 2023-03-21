#ifndef MY_FUNCTIONS_H
#define MY_FUNCTIONS_H
#include "main.h"

int _putchar(char str);
void print_alphabet(void);

void print_alphabet(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
	{
		putchar(str);
	}
	putchar('\n');
}
