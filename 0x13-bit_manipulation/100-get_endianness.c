#include "holberton.h"

/**
 *
 *
 *
 *
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;
	return (int) *c;
}
