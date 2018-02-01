#include "holberton.h"

/**
 * _strcmp - comparing strings
 * @s1 : var pointer
 * @s2 : pointer
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
