#include "holberton.h"

/**
 * rev_string - reverse strings
 * @s : string variable
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int a = 0, b = 0;
	char c, d;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	for (b = 0; b < a; b++)
	{
		c = s[b];
		d = s[a];
		s[b] = d;
		s[a] = c;
		a--;
	}
}
