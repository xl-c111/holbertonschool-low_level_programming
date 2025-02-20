#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Description: use _putchar to print, in lowercase
 *
 * Return;
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}


}
