#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: a pointer to a string that specifies the name of file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 *         0 - if filename is NULL
 *           - if write fails or does not write the expected amount of bytes
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_bytes, written_bytes;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_bytes = read(fd, buffer, letters);

	if (read_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (written_bytes == -1 || read_bytes != written_bytes)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);

	return (written_bytes);
}
