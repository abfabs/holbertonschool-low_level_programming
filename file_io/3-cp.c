#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

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

int main(int argc, char *argv[])
{
	int fdr, fdw, n_read, n_write;
	char buffer[BUFFER_SIZE];

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

	/* ✅ Only open fdw *after* confirming fdr succeeded */
	fdw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fdr); /* Good practice */
		exit(99);
	}

	while ((n_read = read(fdr, buffer, BUFFER_SIZE)) > 0)
	{
		n_write = write(fdw, buffer, n_read);
		if (n_write == -1 || n_write != n_read)
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

	closefd(fdr, fdw);
	return (0);
}
