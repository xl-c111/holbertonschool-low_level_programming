#include "main.h"
/**
 * _sqrt_helper - a function help to find sqrt root
 * @n: the number to find the square root for
 * @canditate: used as the initial candidate
 * Return: if canditate * canditate > n, return -1
 *         if canditate * canditate == n, return canditate
 *         otherwise to recursively calls _sqrt_helper with candidate + 1
 *         to check the next candidate
 */

int _sqrt_helper(int n, int canditate)
{
	if (canditate * canditate == n)
	{
		return (canditate);
	}

	if (canditate * canditate > n)
	{
		return (-1);
	}

	return (_sqrt_helper(n, canditate + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root for
 * Return: if n < 0, return -1
 *         otherwise return to the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
