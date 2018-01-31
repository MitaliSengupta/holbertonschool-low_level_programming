#include "holberton.h"

/**
 * _atoi - Function to convert string to integer
 * @s : pointer value
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int a, prefix;
	unsigned int b;

	a = b = 0;
	prefix = 1;

	for (a = 0; s[a] <= '0' && s[a] != '\0'; a++)
	{
		if (s[a] == '-')
			prefix = prefix * -1;
	}
	if (s[a] == '\0')
		return (b);

	for (; s[a] != '\0' && s[a] != ';'; a++)
	{
	if (s[a] >= '0' && s[a] <= '9' && s[a] != '\0')
		b = b * 10 + (s[a] - '0');
	}
	return (b * prefix);
}
