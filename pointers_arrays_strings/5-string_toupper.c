#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the inout string
 * Description: iterates through the string and converts, all lowercase
 * letters ('a' to 'z') to uppercase ('A' to 'Z') using ASCII arithmetic.
 *
 *
 * Return: a pointer to the modified string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
