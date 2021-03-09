#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print fields of a dog struct
 * @d: Dog struct
 */
void print_dog(struct dog *d)
{
	char *name, *owner;

	if (d == NULL)
		return;

	name = d->name;

	if (d->name == NULL)
		name = "(nil)";

	owner = d->owner;

	if (d->owner == NULL)
		owner = "(nil)";

	if (d->age < 0)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", name, owner);
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}
