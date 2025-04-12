#include <stdio.h>
#include "main.h"
/**
 * print_binary -  prints the binary representation of a number
 * @n: the number to print
 * Description: - convert an int to binary involves dividing by 2(n >> 1) and taking the reminder(n & 1)
 *              - check if this number > 1, if yes, it means the number has more than one bit 
 *              - (n >> 1) equals (n / 2), shift right, removes the least significant bit(LSB), recursively process higher bits
 *              - (n & 1) equals (n % 2), check if the LSB of current 'n' is '1'
 */
void print_binary(unsigned long int n)
{
	if (n > 1)                        
		print_binary(n >> 1);     
	if (n & 1)                        
		_putchar('1');
	else
		_putchar('0');
}
