#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024         /* define a buffer size for reading and writing, 1024 bytes */

/**
 * check_args - check the number of command-line arguments
 * @argc: number of command-line arguments passed to the program
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
 * open_file_from - opening a file for reading
 * @filename: the name of file to open
 * Return: the file descriptor
 *         if the file can't be opened, program exits with code 98
 */
int open_file_from(const char *filename)
{
	int fd = open(filename, O_RDONLY);         

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * open_file_to - open a file to write
 * @filename: the name of file to open
 * Return: the file descriptor
 *         if the file can't be opened, program exits with code 99
 */
int open_file_to(const char *filename)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}
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
 * main - copies the content of a file to another file
 * @argc: argument numbers
 * @argv: argument vector
 * Return: 0 if succeed
 *         97 if the number of arguments is not the correct one
 *         98 if file_from does not exist, or if you can not read it
 *         99 if you can not create or if write to file_to fails
 *         100 if you can not close a file descriptor
 * Description: - check the number of command-line arguments
 *              - open the src file for reading fd_from = open_file_from(argv[1]);
 *              - open the dst file for writing fd_to = open_file_to(argv[2])
 *              - loop to read from src and write to dst, loop continues until read() returns 0
 *                           - written_bytes = write(fd_to, buffer, read_bytes);
 *                           - read_bytes = read(fd_from, buffer, BUFFER_SIZE);
 *              - handle read and write errors and close the file descriptor
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to；
	ssize_t read_bytes, written_bytes;
	char buffer[BUFFER_SIZE];

	check_args(argc);             
	fd_from = open_file_from(argv[1]);                 /* open the src file */      
	read_bytes = read(fd_from, buffer, BUFFER_SIZE);   /* handle the first read faliure before opening the dst file */

	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		exit(98);
	}

	fd_to = open_file_to(argv[2]);         /* open the dst file */

	while (read_bytes > 0)                 /* while there is data to read */
	{
		written_bytes = write(fd_to, buffer, read_bytes);             /* write data to destination */
		if (written_bytes == -1 || written_bytes != read_bytes)       /* if write fails or not all bytes are written */
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
		 /* the second read() reads the next chunk, loop continues until read() return 0 */
		read_bytes = read(fd_from, buffer, BUFFER_SIZE);     
		if (read_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(fd_from);
			close(fd_to);
			exit(98);
		}
	}
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
