#include "main.h"

/**
 * print_numbers - print numbers from 0-9
 *
 * Description: followed by a new line
 *
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');

}

