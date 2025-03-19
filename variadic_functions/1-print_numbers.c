#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator:the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: nothing
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int value;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		printf("%d", value);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
