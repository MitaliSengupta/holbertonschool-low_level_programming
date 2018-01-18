#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * void - empty
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 10;

	if (j > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, j);
	}
	else if (j == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, j);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, j);
	}
	return (0);
}
