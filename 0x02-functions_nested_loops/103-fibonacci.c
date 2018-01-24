#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c = 0, even = 2;

	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			even += c;
		}
	}
	printf("%lu\n", even);
	return (0);
}
