#include "main.h"

/**
 * _abs - convert a value to an absolute value
 * @n: a value to be computed
 * Return: the absolute value of n
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
