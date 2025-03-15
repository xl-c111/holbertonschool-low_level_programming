#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: a pointer to the memory block previously allocated
 * @old_size: the old size of the memory block
 * @new_size: the new size of  the memory block
 * Return: a new pointer point to newly allocated memory;
 *         NULL if allocation fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, copy_size;
	char *src, *dest;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	
	copy_size = old_size < new_size ? old_size : new_size;        /* condition ? expression_if_true : expression_if_false */
	src =  (char *)ptr;                   /* the void pointer ptr is cast to a char pointer */
	dest = (char *)new_ptr;               /* the void pointer new_ptr is cast to a char pointer */

	for (i = 0; i < copy_size; i++)
	{
		dest[i] = src[i];             /* in each iteration, it copies 1 byte from src to dest */
	}
	free(ptr);
	return (new_ptr);
}
