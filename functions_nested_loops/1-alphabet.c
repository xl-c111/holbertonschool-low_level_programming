#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * Description: use _putchar to print
 *
 * Return: alwaysz 0 (Success)
 *
 */


void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);

	}

	_putchar('\n');

	return;

}

