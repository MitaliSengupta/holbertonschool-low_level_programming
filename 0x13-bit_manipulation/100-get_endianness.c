#include "holberton.h"

/**
 * get_endianness - function that checks endianness
 * @void: void
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int) *c);
}
