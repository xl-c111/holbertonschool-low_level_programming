#ifndef _3_CALC_H_
#define _3_CALC_H_

/**
 * struct op - Struct op
 *
 * @op: a pointer to char which is used to store a string representing an operator
 * @f: a pointer to a function. This function takes two integer parameters, returns an int
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;                /* op_t is alias name for the structure struct op */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
