#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * get_bit - returns the bit value at a given index in n
 * @n: the input number
 * @index: the bit position to read
 * Return: the bit value (0 or 1) or -1 if the index is invalid
 * Description: to get the bit value at the given index in n, right-shift n by index positions, then check the LSB 
 *              - shifted = shifted >> index; moves the target bit to the LSB position
 *              - (shifted & 1) extract the value of LSB, check if it's '1' or '0'
 *              - ((n >> index) & 1): shift n right by index bits, so the target bit is now at the position 0(LSB)
 *                                    then (&1) extract its value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifted = n;
	unsigned long int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	for (i = 0; i < index; i++)
	{
		shifted = shifted >>1;       /* shifted = shifted >> index; same as doing index times shifted >> 1 */
	}
	return (shifted & 1);
}
-------------------------------------------------------------------------------------------------
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
        /* (n >> index) means the bit was originally at position index will move to position (index - index = 0) */
	return ((n >> index) & 1);  
}
