#ifndef DOG_H
#define DOG_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - to store information about dogs.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
