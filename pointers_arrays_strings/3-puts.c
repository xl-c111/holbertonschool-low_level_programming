#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer to the string to be printed
 *
 *
 */
void _puts(char *str)
{
	while (*str != '\0')        // int i; for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
