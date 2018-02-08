#include "holberton.h"

/**
 * length_count - calculating length of string
 * @last: string s being passed through palindrome function
 * Return: length or 0
 */
char *length_count(char *last)
{
	if (*last == '\0')
		return (last);
	return (length_count(last + 1));
}

/**
 * compare_start_end - comparing start and end of the string
 * @start: beginning of the string.
 * @last: ending of the string.
 * Return: Always 1 if same else 0
 */
int compare_start_end(char *start, char *last)
{
	if (*start != *last)
		return (0);
	if (start == last || start > last)
		return (1);
	return (compare_start_end((start + 1), (last - 1)));
}

/**
 * is_palindrome - function to find palindrome
 * @s: string needs to be checked for palindrome
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	char *last;

	last = s;
	return (compare_start_end(s, (length_count(last) - 1)));
}
