#include "main.h"
#include <stdio.h>

/**
 * print_usage_error - prints an error message for invalid command line usage
 */
void print_usage_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * print_read_error - prints an error message for failed file read
 *
 * @filename: the name of the file that failed to be read
 */
void print_read_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * print_write_error - prints an error message for failed file write
 *
 * @filename: the name of the file that failed to be written
 */
void print_write_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * print_close_error - prints an error message for failed file descriptor close
 *
 * @fd: the file descriptor that failed to be closed
 */
void print_close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - entry point for the cp program
 *
 * @argc: number of arguments to the program
 * @argv: array of arguments to the program
 *
 * Return: 0 on success, or the appropriate error code if an error occurred
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, rd, wr, cl;
	char buffer[1024];

	if (argc != 3)
		print_usage_error();

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_read_error(argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		print_write_error(argv[2]);
	}

	while ((rd = read(fd_from, buffer, 1024)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr == -1)
		{
			close(fd_from);
			close(fd_to);
			print_write_error(argv[2]);
		}
	}

	if (rd == -1)
	{
		close(fd_from);
		close(fd_to);
		print_read_error(argv[1]);
	}

	cl = close(fd_from);
	if (cl == -1)
		print_close_error(fd_from);

	cl = close(fd_to);
	if (cl == -1)
		print_close_error(fd_to);

	return (0);
}

