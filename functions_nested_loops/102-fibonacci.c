#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Description: start with 1 and 2
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	unsigned long i, j, sum, k;

	i = 1;
	j = 2;
	printf("%lu", i);
	printf(", ");
	printf("%lu", j);
	printf(", ");

	for (k = 1; k < 49; k++)
	{
		sum = i + j;
		printf("%lu", sum);
		if (k < 48)
		{
			printf(", ");
		}

		i = j;
		j = sum;
	}

	printf("\n");
	return (0);
}

