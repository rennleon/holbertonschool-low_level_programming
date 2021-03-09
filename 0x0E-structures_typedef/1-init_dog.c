#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes values of a dog struct
 * @d: Pointer to a dog struct
 * @name: String for name
 * @age: Number for age
 * @owner: Name of the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
