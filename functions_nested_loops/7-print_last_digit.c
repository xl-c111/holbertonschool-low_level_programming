#include "main.h"

/**
 * print_last_digit - print the last digit of number
 * @n: the number to be printed
 *
 * Return: last_digit of n
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n >= 0)
	{
		last_digit = n % 10;
		_putchar(last_digit + '0');
		return (last_digit);
	}

	else
	{
		last_digit = -(n % 10);
		_putchar(last_digit + '0');
		return (last_digit);
	}

}
