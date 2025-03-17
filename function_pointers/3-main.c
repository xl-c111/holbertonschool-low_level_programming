#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"
/**
 * main - performs simple operations
 * @argc: argument number (4 command lines in this program)
 * @argv: argument vector 
 *        argv[0]: the name of program - ./calc 
 *	  argv[1]: the first operand
 *        argv[2]: the operator string
 *	  argv[3]: the second operand
 * Return: Always 0 (Success)
 *         98 if the number of arguments is wrong
 *         99 if the operator is none of the above
 *         100 if the user tries to divide (/ or %) by 0
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*op_func)(int, int);  /* declare a func ptr named op_func, point to any function that takes two int arguments*/

	if (argc != 4)              
	{
		printf("Error\n");
		return (98);
	}
	
	/* int (*get_op_func(char *s))(int, int) and int (*op_func)(int, int) both return a func ptr type of int (*)(int, int) */
	/* argv[2] is a string and contains only 1 single operator char */
	/* get_op_func accepts argv[2] as an argument, to determine which arithmetic operation is used */
	/* get_op_func returns the ptr to that function, op_func stores the address of that arithmetic function (like op_add) */
	
	op_func = get_op_func(argv[2]);   
	
	if (!op_func)            /* checks if op_func is NULL(if get_op_func didn't find a matching operation) */
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);       /* converts second and forth command-line arguments from string to int */
	b = atoi(argv[3]);
        
	/* argv[2][0] is a string, starting with one single char, ending with '\0', argv[2][0] is the operator */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", op_func(a, b));       /* calls the function pointed to by op_func with the operands a and b */
	return (0);
}
