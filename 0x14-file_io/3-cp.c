#include "holberton.h"

/**
 * main - main function entry point
 * @argc: number of arguments passed
 * @argv: arguments being passed
 * Return: 98 read err, 99 write err, 100 close err, 0 sucess
 *
 */
int main(int argc, char **argv)
{
	int input, output, input_r, output_w;
	char *buff;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	input = open(argv[1], O_RDONLY);
	if (input == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	output = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (output == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	buff = malloc(BUFFSIZE * sizeof(char));
	if (buff == NULL)
		return (-1);
	input_r = read(input, buff, BUFFSIZE);
	if (input_r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	while (input_r > 0)
	{
		output_w = write(output, buff, BUFFSIZE);
		if (output_w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		input_r = read(input, buff, BUFFSIZE);
		if (input_r == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]), exit(98);
	}
	if (close(input) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", input), exit(100);
	if (close(output) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", output), exit(100);
	free(buff);
	return (0);
}
