#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: a given string
 * @c: the specific character to be searched in s
 * Return: a pointer to the first occurrence of the character
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0')
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
