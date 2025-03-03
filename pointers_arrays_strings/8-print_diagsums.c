#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 *                  matrix of integers
 * @a: pointer to the first element of the matrix, stored in row-major order
 * @size: the size of matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int col = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (col = 0; col < size; col++)
	{
		sum1 = sum1 + a[col * size + col];

		sum2 = sum2 + a[col * size + (size - col - 1)];

	}
	printf("%d, %d\n", sum1, sum2);
}
