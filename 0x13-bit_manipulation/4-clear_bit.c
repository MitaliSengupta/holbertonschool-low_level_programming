#include "holberton.h"

/**
 * clear_bit - function to set value of a bit to 0
 * @n: pointer to int
 * @index: index to change to bit at
 * Return: 1 if successful else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
