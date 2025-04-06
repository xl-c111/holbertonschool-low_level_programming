#include <stdio.h>
#include "main.h"
/**
 * clear_bit - clears the value of a bit at a given index
 * @n: a pointer to the unsigned long int in which to claer the bit
 * @index: the given index
 * Return: 1 if it worked, or -1 if an error occurred
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1UL << index);
	*n = *n & mask;

	return (1);
}
