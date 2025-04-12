#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits to flip to convert n to m
 * @n: the first unsigned long int
 * @m: the second unsigned long int
 * Return: the number of bits you need to flip
 * Description: -(n ^ m) bitwise XOR, find differing bits, same bits 0, different bits 1
 *              - (&1) to extract the LSB
 *              - (>>= 1) discard the already checked bit
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;         /* store the number of differing bits */
	unsigned long int i;              
	unsigned long int total_bits;
	unsigned long int bit_n, bit_m;      /* store the bit at position i in n and m */

	total_bits = sizeof(unsigned long int) * 8;

	for (i = 0; i < total_bits; i++)
	{
		bit_n = (n >> i) & 1;       /* shift n right by i bits, then AND with 1 to extract the i-th bit */
		bit_m = (m >> i) & 1;

		if (bit_n != bit_m)        /* if the bits at the position i are different, it means a flip is needed */
			count++;
	}
	return (count);
}
-----------------------------------------------------------------------------------------------------------------------------------
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;   /* xor_result marks positions that differ between n and m, 0 are the same, 1 are different */
	unsigned int count = 0;                 /* initialize counter to count how many 1s are in xor_result */

	while (xor_result)                      /* if xor_result is not 0 */
	{
		count += xor_result & 1;        /* use (&1) to get the LSB, if 1 increment count */
		xor_result = xor_resulr >> 1;   /* right shift by 1, dropping the current LSB, to process the next bit */
	}
	return count;
}

