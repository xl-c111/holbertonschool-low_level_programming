#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: a pointer to the memory block previously allocated
 * @old_size: the old size of memory block
 * @new_size: the new size of memory block
 * Return: a new pointer point to newly allocated memory;
 *         NULL if allocation fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, copy_size;
	char *src, *dest;

	ptr = malloc(old_size);
	new_ptr = malloc(new_size);

	if (ptr == NULL)
		return (new_ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_ptr == NULL)
		return (NULL);

	if (new_size == old_size)
		return (ptr);

	copy_size = old_size < new_size ? old_size : new_size;
	src =  (char *)ptr;
	dest = (char *)new_ptr;

	for (i = 0; i < copy_size; i++)
	{
		dest[i] = src[i];
	}
	free(ptr);
	return (new_ptr);
}
