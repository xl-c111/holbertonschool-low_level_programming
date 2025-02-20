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

	i = 0;
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}


}
