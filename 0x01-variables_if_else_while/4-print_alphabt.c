#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a, b;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
