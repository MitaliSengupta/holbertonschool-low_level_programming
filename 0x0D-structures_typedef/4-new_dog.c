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
	int a = 0, b = 0, c = 0;
	dog_t *doggo;

	while (name[a])
		a++;
	while (owner[b])
		b++;
	doggo = malloc(sizeof(dog_t));
	if (doggo == 0)
       		return (NULL);
	doggo->name = malloc(a * sizeof(doggo->name));
	if (doggo->name == 0)
        	return (NULL);
	for (c = 0; c < a; c++)
	{
		doggo->name[c] = name[c];
	}
	doggo->age = age;
	doggo->owner = malloc(b * sizeof(doggo->owner));
	if (doggo->owner == 0)
		return (NULL);
	for (c = 0; c < b; c++)
	{
		doggo->owner[c] = owner[c];
	}
	return (doggo);
}
