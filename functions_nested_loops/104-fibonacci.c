#include <stdio.h>
/*
 * main - print first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Description: finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 *
 * Return: 0
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
	for (k = 1; k < 97; k++)
	{
		sum = i + j;
		printf("%lu", sum);
		if (k < 96)
		{
			printf(", ");
		}
		i = j;
		j = sum;
	}
	printf("\n");
	return (0);
}
