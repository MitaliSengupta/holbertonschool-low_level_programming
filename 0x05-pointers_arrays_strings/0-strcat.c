#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for(a = 0; dest[a] !='\0'; a++)
		;
	for(b = 0; src[b] !='\0'; b++)
	{
		dest[a + b] = src[b];
	}
	return(dest);
}
