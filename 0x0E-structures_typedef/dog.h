#ifndef DOG_H
#define DOG_H

#include <stddef.h>
#include <stdio.h>

/**
 * struct dog - to store information about dogs.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif