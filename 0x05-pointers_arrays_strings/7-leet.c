#include "holberton.h"

/**
 * leet - function to change letters to words
 * @str : char variable
 * Return: Always 0.
 */
char *leet(char *str)
{
	int a, b;
	char *alpha = "aeotlAEOTL";
	char *integer = "4307143071";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; alpha[b] != '\0'; b++)
		{
			if (str[a] == alpha[b])
				str[a] = integer[b];
		}
	}
	return (str);
}
