#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc
 * @b: the number of bytes to allocate
 * Return: a pointer to the allocated memory
 *         exit with a value of 98 when it fails
 *
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	if (b == 0)
	{
		return (NULL);
	}

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
