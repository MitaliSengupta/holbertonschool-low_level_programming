#include "holberton.h"

/**
 * get_bit - function to get the bit at the given index
 * @n: number to check the bit in
 * @index: index to check the bit at
 * Return: the bit at the index else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	n = n >> index;
	return (n & 1);
}
