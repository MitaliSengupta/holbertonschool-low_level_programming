#include "holberton.h"

/**
 * _memcpy - prints buffer in hexa
 * @dest: the array to copy over
 * @src: the source to cpy
 * @n: unsigned int variable
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
