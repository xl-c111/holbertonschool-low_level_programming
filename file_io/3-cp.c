#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * close_file - close the file
 * @fd: the file descriptor to be closed
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * check_args - check the number of argcs
 * @argc: number of command-line arguments passed to the programm
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: argument numbers
 * @argv: argument vector
 * Return: 0 if succeed
 *         97 if the number of argument is not the correct one
 *         98 if file_from does not exist, or if you can not read it
 *         99 if you can not create or if write to file_to fails
 *         100 if you can not close a file descriptor
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes, written_bytes;
	char buffer[BUFFER_SIZE];

	check_args(argc);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}
	read_bytes = read(fd_from, buffer, BUFFER_SIZE);
	while (read_bytes > 0)
	{
		written_bytes = write(fd_to, buffer, read_bytes);
		if (written_bytes == -1 || written_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
		read_bytes = read(fd_from, buffer, BUFFER_SIZE);
	}
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
