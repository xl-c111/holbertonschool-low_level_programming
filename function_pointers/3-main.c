#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"
/**
 * main - performs simple operations
 * @argc: argument number
 * @argv: argument vector
 * Return: Always 0 (Success)
 *         98 if the number of arguments is wrong
 *         99 if the operator is none of the above
 *         100 if the user tries to divide (/ or %) by 0
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", op_func(a, b));
	return (0);
}
