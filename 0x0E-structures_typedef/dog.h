#ifndef DOG_H
#define DOG_H

/**
 * struct dog - object
 * @name: input
 * @age: input1
 * @owner: input2
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - allias of the struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
