#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to the string whose length to be measured
 * Return: length of the string (excluding '\0')
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 *         -1 if filename is NULL
 * Description: - validate input (avoid null filename)
 *              - create or open a file   - O_WRONLY: Open the file in write-only mode.​
 *                                        - O_CREAT: Create the file if it does not exist.​
 *                                        - O_TRUNC: Truncate the file if it already exists.
 *              - write the content to file, written_bytes = write(fd, text_content, _strlen(text_content))
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);     /* 0600: rw------- */

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		written_bytes = write(fd, text_content, _strlen(text_content));

		if (written_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}
	if (close(fd) == -1)        /* if close(fd) fails */
		return (-1);

	return (1);
}
