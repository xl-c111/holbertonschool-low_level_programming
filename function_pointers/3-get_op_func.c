#include <stdlib.h>
#include "stdio.h"
#include <stddef.h>
#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform the operation
 * @s: the operator passed an argument to the program
 * Return: a pointer to the function that corresponds to the operator
 *         given as a parameter; if s does not match any of the 5 expected
 *         operators (+, -, *, /, %), return NULL
 */

int (*get_op_func(char *s))(int, int)      /* define the function get_op_func that takes a char * parameter named s */
{
	op_t ops[] = {                     /* an array of op_t structure named ops is declared and initialized */
		{"+", op_add},             /* each element consists of an string operator and a corresponding function pointer */
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}               /* indicated the end of array */
	};
	int i = 0;
	
	if (s == NULL || s[1] != '\0')   /* if the input s is NULL, it means no operator was provided */
		                         /* if s[1] is not '\0', it means the string length is more than one char */
		return (NULL);
	                                /* ops[i].op is the string operator part, to check if the current operator is valid */
               /* s[0] != ops[i].op[0] compare the first char of the input string and the first char of the operator string */
	while (ops[i].op && s[0] != ops[i].op[0]) 		                                    
		i++;                    /* the index i is incremented until a match is found */
	return (ops[i].f);              /* the function returns the function pointer f from the matching ops element */
}
