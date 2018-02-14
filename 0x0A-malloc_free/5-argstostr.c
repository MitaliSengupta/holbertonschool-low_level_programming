#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: arguments number
 * @av: argument variables
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int a, b, c, d;

	if (ac == 0)
		return (NULL);
	if (av == 0)
		return (NULL);
	a = 0;
	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c] != '\0'; c++)
			a++;
		a++;
	}
	a++;
	s = malloc(a * sizeof(char));
	if (s == 0)
		return (NULL);
	d = 0;
	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c] != '\0'; c++)
		{
			s[d++] = av[b][c];
		}
		s[d++] = '\n';
	}
	s[d] = '\0';
	return (s);
}
