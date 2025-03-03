#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area where the copied
 *        data will be stored
 * @src: pointer to the source memory area which data is to be copied
 * @n: the number of bytes to be copied
 * Return: the destination area dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
