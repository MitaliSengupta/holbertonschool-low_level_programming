#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function to add variables
 * @argc: number of arguments
 * @argv: arguments being passed
 * Return: Always 0 or 1
 */
int main(int argc, char **argv)
{
	int a, b, addition;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		addition = addition + atoi(argv[a]);
	}
	printf("%i\n", addition);
	return (0);
}
