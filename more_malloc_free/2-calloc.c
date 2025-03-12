#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: number of elements to be allocated
 * @size: size of each element
 * Return: a pointer to the allocated memory
 *         NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = (unsigned int *)calloc(nmemb, size);

	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
