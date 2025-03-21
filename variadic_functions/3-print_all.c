#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	print_t ops[] = {
		{"c", print_char},
		{"f", print_float},
		{"i", print_int},
		{"s", print_str}
	};

	int i = 0;
	int j;
	char *separator = "";

	va_list args;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (j < 4)
		{
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
	int c = va_arg(args, int);

	printf("%c", c);
}
/**
 * print_float - print a float from a variable argument list
 * @args: a variable argument list
 */
void print_float(va_list args)
{
	double f = va_arg(args, double);

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
