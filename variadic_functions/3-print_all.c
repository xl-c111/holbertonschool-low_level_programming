#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function(a string,
            each char in format str represents a type: c for char, f for float...)
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	print_t ops[] = {            /* an array of print_t structures named ops */
		{"c", print_char},   /* each element of the array consists of two parts: format specifier and corresponding print function */
		{"f", print_float},
		{"i", print_int},
		{"s", print_str}
	};

	int i = 0;                  /* index to iterate over the format string (cfis) */
	int j;                      /* index to iterate over the array ops (4 elements) */
	char *separator = "";

	va_list args;               /* declare a variable args of type va_list */

	va_start(args, format);     /* initialize the variable args to point to the first argument after format */

	while (format != NULL && format[i] != '\0') /* ensure format str is valid and the current char is not null */
	{
		j = 0;

		while (j < 4)        
		{
			/* check if the current char in format str matches the first char of specifier in the current ops[j] element*/
			/* print the current separator string, initially is an empty str */
			/* call the print function associated with the current specifier */
			/* set the separator variable to ", " */
			if (format[i] == ops[j].specifier[0])   
			{
				printf("%s", separator);
				ops[j].print_func(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

/**
 * print_char - print a character from a variable argument list
 * @args: a variable argument list
 */
void print_char(va_list args)
{
	/* arguments passed through an ellipsis (...), types such as char and short are automatically promoted to int */
	int c = va_arg(args, int);  

	printf("%c", c);
}
/**
 * print_float - print a float from a variable argument list
 * @args: a variable argument list
 */
void print_float(va_list args)
{
	double f = va_arg(args, double);    /* float is automatically promoted to double */

	printf("%f", f);
}
/**
 * print_int - print an integer from a variable argument list
 * @args: a variable argument list
 */
void print_int(va_list args)
{
	int n = va_arg(args, int);

	printf("%d", n);
}
/**
 * print_str - print a string from a variable argument list
 * @args: a variable argument list
 */
void print_str(va_list args)
{
	char *str = va_arg(args, char*);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
