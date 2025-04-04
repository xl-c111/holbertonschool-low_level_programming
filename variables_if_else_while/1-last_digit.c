#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: print the last digit of the number stored in the variable n
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;


	if (y > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, y);
	}
	else if (y == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, y);
	}
	return (0);
}
