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
	unsigned long i1, j1, sum1;

	i = 1;
	j = 2;
	i1 = 0;
	j1 = 0;
	printf("%lu", i);
	printf(", ");
	printf("%lu", j);
	printf(", ");
	for (k = 1; k < 97; k++)
	{
		sum = i + j;
		sum1 = i1 + j1;
		if (sum < i)
			sum1++;
		if (i1 == 0)
			printf("%lu", i);
		else
			printf("%lu%018lu", i1, i);
		if (k < 96)
		{
			printf(", ");
		}
		i = j;
		i1 = j1;
		j = sum;
		j1 = sum1;
	}
	printf("\n");
	return (0);
}
