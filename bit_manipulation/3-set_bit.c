#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the bit value at position index pointed to by n to 1 
 * @n: a pointer to the unsigned long int in which to set the bit
 * @index: the given index
 * Return: 1 if it worked, or -1 if an error occurred
 * Description: - mask = 1UL << index; shift the number 1 left by index positions, create a bitmask that has only the bit
 *                                     at position index set to 1, all other bits set to 0 
 *              - *n = *n | mask; *n: deference the pointer n, access to actual value pointed to by n
 *                                mask: a bitmask that has only a 1 at the index position
 *                                *n | mask: a bitwise OR between *n and mask, set the bit at the position to 1, others renain unchanged
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;     /* declare a variable mask to build a bitmask for targeting the desired bit */

	if (index >= sizeof(unsigned long int) * 8)      /* check if index is out of bounds */
		return (-1);
	
	mask = 1UL << index;       /* 1UL == unsigned long 1*/
	*n = *n | mask;      

	return (1);

}
