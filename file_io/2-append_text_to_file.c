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
 * append_text_to_file -  appends text at the end of a file
 * @filename: the name of the file
 * @text_content: he NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 *         -1 if filename is NULL
 *         if text_content is NULL, do not add anything to the file. Return 1
 *         if the file exists and -1 if the file does not exist or if you do
 *         not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	written_bytes = write(fd, text_content, _strlen(text_content));

	if (text_content != NULL)
	{
		if (written_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}
	if (close(fd) == -1)
		return (-1);

	return (1);
}
