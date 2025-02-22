#include <stdio.h>
#define BASE 1000000000
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

	for (k = 1; k <= 98; k++)
	{

		if (i1 == 0)
			printf("%lu", i);
		else
			printf("%lu%09lu", i1, i);
		if (k < 98)
			printf(", ");	
		sum = (i + j) % BASE;
		sum1 = i1 + j1 + ((i + j) / BASE);
		i = j;
		i1 = j1;
		j = sum;
		j1 = sum1;
	}
	printf("\n");
	return (0);
}
