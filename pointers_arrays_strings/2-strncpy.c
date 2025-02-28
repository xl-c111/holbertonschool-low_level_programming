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
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0' && n > 0)
	{
		*temp = *src;
		src++;
		temp++;
		n--;
	}
	*temp = '\0';

	return (dest);

}
