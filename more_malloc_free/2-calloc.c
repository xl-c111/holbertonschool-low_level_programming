#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: number of elements to be allocated
 * @size: size in bytes of each element
 * Return: a pointer to the allocated memory, which is set to 0;
 *         NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, total_bytes;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_bytes = nmemb * size;
	p = malloc(total_bytes);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_bytes; i++)
	{
		p[i] = 0;
	}
	return (p);
}
