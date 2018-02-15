#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * number - function to calculate number of words
 * @str: string being passed to check for words
 *
 * Return: number of words
 */
int number(char *str)
{
	int a, num = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] == ' ')
			a++;
		else
		{
			for (; str[a] == ' '; a++)
				;
			num++;
		}
	}
	return (num);
}
/**
 * free_everything - frees the memory
 * @words: pointer values being passed for freeing
 * @b: counter
 */
free_everything(char **words, int b)
{
	for (; b > 0; b--)
		free(words[b]);
	free(words);
}

/**
 * strtow - function that splits string into words
 * @str: string being passed
 *
 * Return: null if string is empty or null or function fails
 */
char **strtow(char *str)
{
	int total_words = 0, a = 0, b = 0, c = 0, length = 0;
	char **words, *found_word;

	if (str == 0)
		return (NULL);
	if (*str == 0)
		return (NULL);
	total_words = number(str);
	if (total_words == 0)
		return (NULL);
	words = malloc((total_words + 1) * sizeof(char *));
	if (words == 0)
		return (NULL);
	for (; str[a] != '\0' &&  b < total_words;)
	{
		if (str[a] == ' ')
			str++;
		else
		{
			found_word = str;
			for (; str[a] != ' ' && str[a] != '\0';)
				length++; str++;
			words[b] = malloc((length + 1) * sizeof(char));
			if (words[b] == 0)
			{
				free_everything(words, b);
				return (NULL);
			}
			while (*found_word != ' ' && *found_word != '\0')
			{
				words[b][c] = *found_word;
				found_word++;
				c++;
			}
			words[b][c] = '\0';
			b++;
			c = 0; length = 0; str++;
		}
	}
	return (words);
}
