#include "dog.h"

/**
 * print_dog - a function that prints a struct dog.
 * @d: structure.
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
	printf("Age: %f\n");
	printf("Owner: ");
	d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
}
