#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: character pointer
 * @owner: character pointer
 * @age: integer
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, c;
	dog_t *doggo;

	for (a = 0; name[a] != '\0'; a++)
		;
	for (b = 0; owner[b] != '\0'; b++)
		;
	doggo = malloc(sizeof(dog_t));

	if (doggo == 0)
		return (NULL);
	doggo->name = malloc(a * sizeof(doggo->name));
	if (doggo == 0)
		return (NULL);
	for (c = 0; c < a; c++)
	{
		doggo->name[c] = name[c];
	}
	doggo->name[c] = '\0';
	doggo->age = age;
	doggo->owner = malloc(b * sizeof(doggo->owner));
	if (doggo == 0)
		return (NULL);
	for (c = 0; c < b; c++)
	{
		doggo->owner[c] = owner[c];
	}
	doggo->owner[c] = '\0';
	return (doggo);
}
