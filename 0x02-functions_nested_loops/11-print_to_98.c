#include <stdio.h>
/**
 * print_to_98 - function to print numbers
 * @n : integer value
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a < 98; a++)
		printf("%d, ", a);
	}
	else if (n > 98)
		for (a = n; a > 98; a--)
			printf("%d, ", a);
	printf("98\n");
}
