#include <stdio.h>
#include "main.h"
/**
 * clear_bit - set the bit value at a given index pointed to by n to 0
 * @n: a pointer to the unsigned long int in which to claer the bit
 * @index: the given index
 * Return: 1 if it worked, or -1 if an error occurred
 * Description: - mask = ~(1UL << index); (1UL << index) shift the number 1 left by index positions, making a mask with 1 at index
 *                                        ~(...)bitwise NOT, flips all bits, so the target bit 0, other bits 1
 *              - *n = *n & mask; bitwise AND between *n and mask, target bit becomes 0, all other bits remain unchanged
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
