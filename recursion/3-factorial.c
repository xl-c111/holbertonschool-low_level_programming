#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the given number
 * Return: if n < 0, return -1 (error)
 *         if n == 0 or n == 1, return 1
 *         otherwise return the factorial of n
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
