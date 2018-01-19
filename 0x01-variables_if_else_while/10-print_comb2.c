#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, a;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i < 10; i++)
		{
			putchar(a + '0');
			putchar(i + '0');
			if (i == 9 && a == 9)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
