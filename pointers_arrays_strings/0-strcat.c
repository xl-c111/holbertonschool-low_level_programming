#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: the destination string
 * @src: the source string to be appened
 * Return: a pointer to the resulting string dest
 *
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}

	while (*src != '\0')
	{
		*temp = *src;
		src++;
		temp++;
	}
	*temp = '\0';

	return (dest);
}
