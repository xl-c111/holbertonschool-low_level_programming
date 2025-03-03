#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the null-terminated string to be scanned
 * @accept: the string containing the list of characters to match in s
 * Return: returns the number of characters in the initial segment of s
 *         that consist only of characters from accept
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i = 0;

	while (s[count] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[count] == accept[i])
				break;
		}
		if (accept[i] == '\0')
		{
			break;
		}
		count++;
	}
	return (count);
}
