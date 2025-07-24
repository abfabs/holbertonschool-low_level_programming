#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Print error message to stderr and exit with code.
 * @code: Exit code.
 * @format: Error format string.
 * @arg: Argument for the format string.
 */
void print_error(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * main - Copy the content of one file to another.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 on success, exits with codes on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t r_bytes, w_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((r_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes != r_bytes)
		{
			close(fd_from);
			close(fd_to);
			print_error(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (r_bytes == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (close(fd_from) == -1)
		print_error(100, "Error: Can't close fd %d\n", argv[1]);

	if (close(fd_to) == -1)
		print_error(100, "Error: Can't close fd %d\n", argv[2]);

	return (0);
}
