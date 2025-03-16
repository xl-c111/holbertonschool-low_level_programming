#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"


/**
 * print_name - prints a name
 * @name: a pointer point to a character, used to pass a string
 * @f: a pointer point to a function that takes a char pointer as an argument;
 *     returns void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
