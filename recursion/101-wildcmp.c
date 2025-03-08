#include <stdio.h>
/**
 * wildcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if two strings are identical; otherwise 0
 *
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);   //if both strings are empty, identical
	}
	
	// If s2 has a '*', we try to match with s1 in two ways:
        // 1. Skip '*' and match remaining characters of s2 with s1.
        // 2. Include the current character of s1 and check again.
	
	if (*s2 == '*')    
	{
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))    // Skip the '*' and move to the next character in s2
		{
			return (1);                        // Match found by skipping one character in s1
 		}
		return (wildcmp(s1, s2 + 1));              // Or skip the '*' and move to the next character in s2
	}
	if (*s1 == *s2)        // If characters match or s2 has no wildcard, move to the next character
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
