#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int a = 0, b = 1, c;
	unsigned long int d, e, f, g;
	int h = 0;

	for (h = 0; h <= 91; h++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}
	d = a % 1000;
	a = a / 1000;
	e = b % 1000;
	b = b / 1000;
	while (h <= 98)
	{
		g = (d + e) / 1000;
		f = (d + e) - g * 1000;
		c = (a + b) + g;
		d = e;
		e = f;
		a = b;
		b = c;
		if (f >= 100)
			printf("%lu%lu", c, f);
		else
			printf("%lu0%lu", c, f);
		if (h != 98)
			printf(" , ");
		h++;
		}
	printf("\n");
	return (0);
}
