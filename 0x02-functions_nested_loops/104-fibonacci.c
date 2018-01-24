#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c;
	int d;

	printf("1, 2, ");

	for (d = 3; d <= 98; d++)
	{
		c = a + b;

		printf("%lu", c);

		if (d < 98)
		{
			printf(" , ");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
