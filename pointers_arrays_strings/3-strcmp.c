#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the fisrt string
 * @s2: the second string
 *
 * Return: an interger representing the difference between the first
 *         different characters in ASCII value, or 0 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
