#include "holberton.h"
#define NULL 0

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to search
 * @accept: bytes to look for
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return(&s[a]);
		}
	}
	if (accept[b] == '\0')
		return(&accept[a]);
	return (NULL);
}
