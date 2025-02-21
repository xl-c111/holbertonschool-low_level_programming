#include <stdio.h>

/**
 * main -  computes and prints the sum of all the multiples of 3 or 5
 *
 * Description: the sum of all the multiples
 * of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i, j;

	j = 0;
	for (i = 1; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j = j + i;
		}

	}
	printf("%d\n", j);
	return (0);
}
