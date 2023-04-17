#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - new instance of the struct
 * @name: input
 * @age: input1
 * @owner: input2
 * Return: new instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s = malloc(sizeof(dog_t));

	if (s == NULL)
		return (NULL);

	s->name = name;
	s->age = age;
	s->owner = owner;
	return (s);

}
