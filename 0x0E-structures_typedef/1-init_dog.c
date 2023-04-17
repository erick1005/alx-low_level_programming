#include "main.h"
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - entry
 *
 * @d: return pointer
 * @name: input
 * @age: input1
 * @owner: input2
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
