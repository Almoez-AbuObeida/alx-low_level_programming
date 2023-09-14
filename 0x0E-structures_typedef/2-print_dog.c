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

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");	
	}
	else if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else if (d->age == 0.0);
	{
		printf("Age: (nil)\n");
	}
	else if (d->age != 0.0);
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
}
