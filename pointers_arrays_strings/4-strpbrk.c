#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates the first occurrence in the string s of any of the
 *            bytes in the string accept
 * @s: the string to be scanned
 * @accept: the string containing characters to match
 * Return: a pointer to the string s that matches one of characters in
 *         accept, otherwise return NULL
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int count = 0;
	int i = 0;

	while (s[count] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[count] == accept[i])
			{
				return (&s[count]);
			}
		}
		count++;
	}
	return (NULL);
}
