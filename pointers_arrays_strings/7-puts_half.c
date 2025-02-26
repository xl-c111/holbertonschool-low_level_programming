#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string to be printed
 *
 *
 */


void puts_half(char *str)
{
	int n, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length + 1) / 2;
	}

	for (; n < length; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
