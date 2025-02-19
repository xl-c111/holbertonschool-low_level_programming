#include "main.h"
#include <stdio.h>

/**
 * add - Adds two integers and returns the result.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Sum of a and b.
 */


int add(int a, int b)
{
	return (a + b);
}


/**
 * main - add two integers
 * Description: use Prototype int add(int, int) to add
 *
 * Return: always 0 (Success)
 */


int main(void)
{
	int n;

	n = add(89, 9);


	printf("The Sum is %d\n", n);

	return (0);
}
