#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string to be printed
 *
 */
void puts2(char *str)
{
	int i, length;

	while (str[length] != 0)
	{
		length++;

	}


	for (i = 0; i < length; i = i + 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
