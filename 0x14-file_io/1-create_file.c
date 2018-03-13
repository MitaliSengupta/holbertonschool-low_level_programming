#include "holberton.h"

/**
 * create_file - function to create file
 * @filename: pointer to the file name to be created
 * @text_content: str to be written in the file
 * Return: 1 success -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int input, output, count = 0;

	if (filename == NULL)
		return (-1);
	input = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (input == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	for (; text_content[count] != '\0'; count++)
		;

	output = write(input, text_content, count);
	if (output == -1 || output != count)
		return (-1);

	close(input);
	return (1);
}
