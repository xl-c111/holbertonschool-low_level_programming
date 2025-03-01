#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the input string
 * Return: pointer to the encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr = ((((*ptr & ~32) - 'A' + 13) % 26) + 'A') | (*ptr & 32);
		}
		ptr++;
	}
	return (str);
}

