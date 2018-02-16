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
	int l = 0, l1 = 0, l2 = 0, a, b, t = 0, c = 0, ten = 0;

	if (argc < 3)
	{
		print_string("Error");
		exit(98);
	}
	n1 = argv[1];
	n2 = argv[2];
	if(!(check_number(n1) && check_number(n2)))
	{
		print_string("Error");
		exit(98);
	}
	l1 = string_length(n1);
	l2 = string_length(n2);
	l = l1 + l2;
	multi_res = _calloc(l + 1, sizeof(char *));
	if (multi_res == 0)
	{
		print_string("Error");
		exit(98);
	}
	for (a = 0; a < l1; a++, ten++)
	{
		for (c = 0, b = 0; b < l2; b++)
		{
			t = (n1[l1 - a - 1] - '0') * (n2[l2 - b - 1] - '0') + c;
			if (multi_res[l - b - ten - 1] > 0)
				t = t + multi_res[l - b - ten - 1] - '0';
			multi_res[l - b - ten - 1] = t % 10 + '0';
			c = t / 10;
		}
		multi_res[l - b - ten - 1] += c + '0';
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

	for (a = 0; st[a] == '\0' || st[a] == '0'; a++)
		;
	if (st == 0)
		_putchar('0');
	for (a = 0; st[a] != '\0'; a++)
	{
		_putchar(st[a]);
	}
	_putchar('\n');
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

	if (number == 0 || size == 0)
		return (NULL);
	p = malloc(number * size);
	if (p == 0)
		return (NULL);
	for (a = 0; a < (number * size); a++)
		p[a] = 0;
	return (p);
}
