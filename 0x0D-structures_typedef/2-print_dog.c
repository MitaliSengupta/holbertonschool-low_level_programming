#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("Name: ");
		(d->name == 0) ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: ");
		(d->age == 0) ? printf("(nil)\n") : printf("%f\n", d->age);
		printf("Owner: ");
		(d->owner == 0) ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
