#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: pointer to the string to be printed
 *
 *
 */
void print_rev(char *s)
{
	int i, length = 0;

	while (s[length] != '\0')
	{
		length++;         // iterate each char of string and increment length by 1
	}

	for (i = length - 1; i >= 0; i--)    // set i to the last index of string, as long as i is non-negative, loop continues
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
