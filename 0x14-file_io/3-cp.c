#include "holberton.h"


/**
 * _err - function to check for error code
 * @stat: error code to be checked
 * Return: void
 */
void _err(int stat, ...)
{
	va_list list;

	va_start(list, stat);
	if (stat == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (stat == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file ");
		dprintf(STDERR_FILENO, "%s\n", va_arg(list, char *));
		exit(98);
	}
	else if (stat == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to ");
		dprintf(STDERR_FILENO, "%s\n", va_arg(list, char *));
		exit(99);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd ");
		dprintf(STDERR_FILENO, "%d\n", va_arg(list, int));
		exit(100);
	}
	va_end(list);
}

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
		_err(97);
	if (argv[1] == NULL)
		_err(98, argv[1]);
	if (argv[2] == NULL)
		_err(99, argv[2]);
	input = open(argv[1], O_RDONLY);
	if (input == -1)
		_err(98, argv[1]);
	output = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (output == -1)
		_err(99, argv[2]);
	buff = malloc(BUFFSIZE * sizeof(char));
	if (buff == NULL)
		return (1);
	input_r = read(input, buff, BUFFSIZE);
	if (input_r == -1)
		_err(98, argv[1]);
	while (input_r > 0)
	{
		output_w = write(output, buff, input_r);
		if (output_w == -1)
			_err(99, argv[2]);
		input_r = read(input, buff, BUFFSIZE);
		if (input_r == -1)
			_err(98, argv[1]);
	}
	if (close(input) == -1)
		_err(100, input);
	if (close(output) == -1)
		_err(100, output);
	free(buff);
	return (0);
}
