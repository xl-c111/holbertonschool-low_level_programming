#include <stdio.h>

/**
 * main -  a function that adds two integers and returns the result
 *
 * Add - Add two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: The sum of a and b
 */


int add(int a, int b);

int add(int a, int b)
{
	return (a + b);
}

int main(void)
{
	int result = add(10, 20);


	printf("Result is %d\n", result);

	return (0);
}
