#include "main.h"
/**
 * is_prime_number - to check if an integer is a prime number
 * @n: the input integer
 * Return: if n is a prime number, return 1
 *         otherwise return 0
 *
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
	{
		return (0);
	}
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
