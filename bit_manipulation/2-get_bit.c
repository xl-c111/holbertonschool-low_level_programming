#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the unsigned long int in which to get the bit
 * @index: the given index
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifted = n;
	unsigned long int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	for (i = 0; i < index; i++)
	{
		shifted = shifted / 2;
	}
	return (shifted % 2);
}
