#include <stdlib.h>
#include "dog.h"

int len(char *);
char *get_str(char *, char *);

/**
 * new_dog - Creates anes dog struct
 * @name: Ddog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: Pointer to the new dog's struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	new	= malloc(sizeof(*new));

	if (new == NULL)
		return (NULL);

	new->name = malloc(len(name));

	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(len(owner));

	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->name = get_str(new->name, name);
	new->age = age;
	new->owner = get_str(new->owner, owner);

	return (new);
}

/**
 * len - Calculates the length of a string
 * @s: String
 *
 * Return: Length of s
 */
int len(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;

	return (l);
}

/**
 * get_str - Copies a string
 * @dest: Buffer destiny
 * @src: Buffer source
 *
 * Return: A pointer to the copy of dest
 */
char *get_str(char *dest, char *src)
{
	int l = 0;

	while (src[l] != 0)
	{
		dest[l] = src[l];
		l++;
	}

	dest[l] = '\0';

	return (dest);
}


