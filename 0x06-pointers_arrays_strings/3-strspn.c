#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: given string
 * @accept: find bytes
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
		}
		if (accept[b] == '\0')
			break;

	}
	return (a);
}
