#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits to flip to convert n to m
 * @n: the first unsigned long int
 * @m: the second unsigned long int
 * Return: the number of bits you need to flip
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int i;
	unsigned long int total_bits;
	unsigned long int bit_n, bit_m;

	total_bits = sizeof(unsigned long int) * 8;

	for (i = 0; i < total_bits; i++)
	{
		bit_n = (n >> i) & 1;
		bit_m = (m >> i) & 1;

		if (bit_n != bit_m)
			count++;
	}
	return (count);
}
