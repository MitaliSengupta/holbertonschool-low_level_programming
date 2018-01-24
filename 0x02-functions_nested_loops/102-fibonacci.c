#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	long int a = 1;
	long int b = 2;
	long int c = 0;

	printf("%lu, ", a);
	printf("%lu, ", b);

	for (count = 3; count <= 50; count++)
	{
		c = a + b;
		a = b;
		b = c;
		if (count < 50)
		{
			printf("%lu, ", c);
		}
		else
		{
			printf("%lu\n", c);
		}
	}
	return (0);
}
