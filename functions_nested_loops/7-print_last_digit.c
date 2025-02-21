#include "main.h"

/**
 * print_last_digit - print the last digit of number
 * @n: the number to be printed
 * @last_digit: the last digit of n
 * Return: last_digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		return (-last_digit);
	}

	return (last_digit);

}
