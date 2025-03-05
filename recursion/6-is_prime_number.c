#include "main.h"
/**
 * is_prime_recursive - to check if an integer is a prime number
 * @n: the input integer
 * @i: the divisor used in the recursive check
 * Return: if n is a prime number, return 1
 *         otherwise return 0
 *
 */
int is_prime_recursive(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, i + 1));
}

/**
 * is_prime_number - to check if an integer is a prime number
 * @n: the input integer
 * Return: if n is a prime number, return 1
 *         otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_recursive(n, 2));   // a prime number is a netural number greater than 1
}
