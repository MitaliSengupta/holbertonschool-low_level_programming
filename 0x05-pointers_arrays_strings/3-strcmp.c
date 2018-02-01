#include "holberton.h"

/**
 * _strcmp - comparing strings
 * @s1 : var pointer
 * @s2 : pointer
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int a, b;

	for (a = 0; s1[a] != '\0'; a++)
	{
		for (b = 0; s2[b] != '\0'; b++)
		{
			if (s1[a] < s2[b])
				return (s1[a] - s2[b]);
			else if (s1[a] > s2[b])
				return (s1[a] - s2[b]);
			else
				return (s1[a] - s1[a]);
		}
	}
	return (0);
}
