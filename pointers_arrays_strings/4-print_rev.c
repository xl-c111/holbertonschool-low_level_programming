#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: pointer to the string to be printed
 *
 *
 */
void print_rev(char *s)
{
	int length = 0;
	char *start = s;

	while (*s != '\0')
	{
		length = length + 1;
		s++;
	}
	for (; length >= 0; length--)
	{
		_putchar(start[length - 1]);
	}
	_putchar('\n');
}
