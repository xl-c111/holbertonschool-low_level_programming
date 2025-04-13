#include <fcntl.h>              /* open */
#include <unistd.h>             /* read, write, close */
#include <stdlib.h>             /* malloc, free */
#include <sys/types.h>          /* ssize_t: signed size type, as the return value of read and write could be -1 */
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: a pointer to a string that specifies the name of file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 *         0 - if filename is NULL
 *           - if write() fails or does not write the expected amount of bytes
 * Description: - avoid null filename 
 *              - open the file and read
 *              - allocate memory buffer for reading 
 *              - read contents into buffer read_bytes = read(fd, buffer, letters); 
 *              - write contens to terminal written_bytes = write(STDOUT_FILENO, buffer, read_bytes)
 *              - error handling and clean up 
 *              - return actual number of bytes printed to output 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;                               /* file descriptor */
	char *buffer;                         /* to store file contents */
	ssize_t read_bytes, written_bytes;    /* number of bytes read and successfully written */

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);       
	if (fd == -1)     /* if file open failed; if open() call succeeds, it'll return non-negative int(usually start from 3) */
		return (0);

	buffer = malloc(sizeof(char) * letters);      /* allocate the memory to store up to letters char*/
	if (buffer == NULL)
	{
		close(fd);                           /* release the file descriptor and prevent leaking open file */
		return (0);
	}

	read_bytes = read(fd, buffer, letters);

	if (read_bytes == -1)               /* if read fails, free memory and close file */
	{
		free(buffer);
		close(fd);
		return (0);
	}
	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);    

	if (written_bytes == -1 || read_bytes != written_bytes)  /* if write fails or if write fewer bytes than requested */
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);

	return (written_bytes);
}
