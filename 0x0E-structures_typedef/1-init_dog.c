#include "dog.h"
#include <stddef.h>
/**
 * init_dog - a function that initialize a variable of type struct dog.
 *@d: struc.
 *@name: the name of the dog.
 *@age: the age of the dog.
 *@owner: the owner of the dog.
 *Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
