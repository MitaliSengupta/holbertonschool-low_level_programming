#include "holberton.h"

/**
 * set_bit - function to set a bit at given indext to 1
 * @n: int pointer
 * @index: index at bit to change
 * Return: 1 if sucessful -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (n == 0)
		return (-1);
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	bit = 1;
	bit = bit << index;
	*n = *n | bit;
	return (1);
}
