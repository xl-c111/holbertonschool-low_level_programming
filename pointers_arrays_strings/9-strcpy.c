#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 *           including the terminating null byte (\0) to dest
 * @src: pointer to source string
 * @dest: pointer to destination buffer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);


}
