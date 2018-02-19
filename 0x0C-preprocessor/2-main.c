#include <stdio.h>

/**
 * main - function to print the name of the file it was compiled from
 *
 * Return: 0 for success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
