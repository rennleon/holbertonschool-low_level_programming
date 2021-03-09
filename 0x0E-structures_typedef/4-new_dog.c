#include <stdlib.h>
#include "dog.h"

char *get_str(char *);

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
	dog_t *new = malloc(sizeof(*new));

	if (new == NULL)
		return (NULL);

	new->name = get_str(name);
	new->age = age;
	new->owner = get_str(owner);

	if (new->name == NULL || new->owner == NULL)
		return (NULL);

	return (new);
}

/**
 * get_str - Cpies a string
 * @s: String to be copied
 *
 * Return: A pointer to the copy of s
 */
char *get_str(char *s)
{
	int len = 0;
	char *str;

	while (s[len] != 0)
		len++;

	str = malloc(len);

	if (str == NULL)
		return (NULL);

	len = 0;

	while (s[len] != 0)
	{
		str[len] = s[len];
		len++;
	}

	str[len] = '\0';

	return (str);
}


