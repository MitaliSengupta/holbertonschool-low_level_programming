#include "holberton.h"

/**
 * binary_to_uint - function to convert binary to unsigned integer
 * @b: binary number being passed
 * Return: 0 if not b is not binary else converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int a = 0, c = 0;

	if (b == NULL || (*b != '0' && *b != '1'))
		return (0);
	for (a = 0; b[a] != '\0'; a++)
		;
	a--;
	while (a >= 0)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		result = result + (b[a] - '0') * (1 << c);
		a--;
		c++;
	}
	return (result);
}
