#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of the substring needle
 *           in the string haystack
 * @haystack: pointer to the given string in which to search
 * @needle: pointer to the substring to search for
 * Return: a pointer to the beginning of the located substring
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
