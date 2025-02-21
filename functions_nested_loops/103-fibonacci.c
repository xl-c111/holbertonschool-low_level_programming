#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Description: in the Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long i, j, n, sum;

	i = 1;
	j = 2;
	while (j <= 4000000)
	{
		if (j % 2 == 0)
		{
			sum = sum + j;
		}
		n = j + i;
		i = j;
		j = n;

	}

	printf("%lu\n", sum);
	return (0);
}
