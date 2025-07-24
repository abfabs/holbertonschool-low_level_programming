#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * closefd - Closes two file descriptors.
 * @fd1: First file descriptor.
 * @fd2: Second file descriptor.
 */
void closefd(int fd1, int fd2)
{
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

/**
 * copy_file - Copies content from source to destination.
 * @fdr: Source file descriptor.
 * @fdw: Destination file descriptor.
 * @argv: Argument vector for error printing.
 */
void copy_file(int fdr, int fdw, char *argv[])
{
	char buffer[BUFFER_SIZE];
	ssize_t n_read, n_written;

	while ((n_read = read(fdr, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fdw, buffer, n_read);
		if (n_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			closefd(fdr, fdw);
			exit(99);
		}
	}

	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		closefd(fdr, fdw);
		exit(98);
	}
}

/**
 * main - Entry point. Handles argument checking and file operations.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fdr, fdw;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdr = open(argv[1], O_RDONLY);
	if (fdr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fdw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fdr);
		exit(99);
	}

	copy_file(fdr, fdw, argv);
	closefd(fdr, fdw);
	return (0);
}
