#include "hash_tables.h"

/**
 * key_index - function to return index of a key
 * @key: key to get index
 * @size: size of array of hash table
 * Return: index based on hash function of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
