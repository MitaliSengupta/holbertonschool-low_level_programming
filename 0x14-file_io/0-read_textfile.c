#include "holberton.h"

/**
 * read_textfile - function to read and print text file to stdout
 * @filename: ptr to the file to read and print
 * @letters: number of bytes to print
 * Return: 0 if failed else number of bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reader, output, fd;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	reader = read(fd, buff, letters);

	if (reader == -1)
		return (0);

	output = write(STDOUT_FILENO, buff, reader);

	if (output == -1 || output != reader)
		return (0);

	close(fd);
	free(buff);
	return (output);
}
