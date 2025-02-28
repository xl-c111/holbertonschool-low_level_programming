#include "main.h"
/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: the destination string
 * @src: the source string to be appened to dest
 * @n: the maximum number of bytes to be copied from dest
 *
 * Description: it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * Return:  pointer to the resulting string dest
 */


char *_strncat(char *dest, char *src, int n)
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
