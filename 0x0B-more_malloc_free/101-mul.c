#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 */
int main(int argc, char **argv)
{
	char *n1, *n2, *multi_res;
	int l1, l2, a, b, tmp = 0, carry = 0;

	if (argc < 3)
	{
		print_string("ERROR");
		exit(98);
	}
	n1 = argv[1];
	n2 = argv[2];
	l1 = string_length(n1);
	l2 = string_length(n2);
	multi_res = _calloc(l1 + l2 + 1, sizeof(char *));
	if (multi_res == 0)
	{
		print_string("ERROR");
		exit (98);
	}
	for (a = 0; a < l1; a++)
	{
		for (carry = 0, b = 0; b < l2; b++)
		{
			tmp = (n1[l1 - a - 1] - '0') * (n2[l2 -b - 1] - '0') + carry;
			if (multi_res[(l1 + l2) - b- 1] > 0)
				tmp += multi_res[(l1 + l2) - b - 1] - '0';
			multi_res[(l1 + l2) - b - 1] = tmp % 10 + '0';
			carry = tmp / 10;
		}
		multi_res[(l1 + l2) - b - 1] += carry + '0';
	}
	print_string(multi_res);
	free(multi_res);
	return (0);
}

/**
 *
 *
 *
 */

int check_number(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
	}
	return (1);
}

/**
 *
 *
 *
 *
 */
unsigned int string_length(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;
	a++;
	return (a);
}

/**
 *
 *
 *
 */
void print_string(char *st)
{
	int a;

	for (a = 0; st[a] != '\0'; a++)
		_putchar(st[a]);
}

/**
 *
 *
 *
 */
void *_calloc(unsigned int number, unsigned int size)
{
	char *p;
	unsigned int a;
	void *tmp;

	if (number <= 0 || size <= 0)
		return (NULL);
	p = malloc(number * size);
	if (p == 0)
		return (NULL);
	for (a = 0; a < (number * size); a++)
		p[a] = 0;
	return (p);
}
