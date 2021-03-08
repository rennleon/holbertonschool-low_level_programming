#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print fields of a dog struct
 * @d: Dog struct
 */
void print_dog(struct dog *d)
{
	char *name = d->name;
	char *owner = d->owner;

	if (d == NULL)
		return;

	if (d->name == NULL)
		name = "(nil)";

	if(d->owner == NULL)
		owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}
