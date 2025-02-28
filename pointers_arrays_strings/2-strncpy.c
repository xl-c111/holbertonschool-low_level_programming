#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: the destination string
 * @src: the source string to be copied
 * @n: the maximum number to be copied from src
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;

	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
