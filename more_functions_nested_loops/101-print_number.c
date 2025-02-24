#include "main.h"

/**
 * print_number - prints an integer using _putchar only
 * @n: The integer to be printed
 *
 * Description: use recursion to print an integer digit by digit
 *              not use printf, arrays, pointers, or the long data type
 *              For negative numbers, it first prints the '-' sign
 *              then recursively prints the digits of the absolute value
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n <= -10)
			print_number(-(n / 10));
		_putchar('0' - (n % 10));
	}
	else
	{
		if (n >= 10)
			print_number(n / 10);
		_putchar('0' + (n % 10));
	}
}

