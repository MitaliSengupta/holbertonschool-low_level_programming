#include "holberton.h"

/**
 * _strcpy - function to copy array
 * @dest : pointer to an array
 * @src : pointer to an array
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	for (a = 0; src[a] != '\0'; a++)
		;
	for (b = 0; b < a; b++)
		dest[b] = src[b];
	return (dest);
}
