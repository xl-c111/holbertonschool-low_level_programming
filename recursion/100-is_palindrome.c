#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - recursivel check the length of a string
 * @s: the string to be checked
 * Return: the length of string
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome_recursive - recursively check if a string is a palindrome
 * @s: the input string
 * @left: the index starting at the beginning (left side)
 * @right: the index starting at the end (right side)
 * Return: 1 if the string is a palindrome
 *         0 if not, otherwise recursively call is_palindrome_recursive
 *         to check the next character
 */
int is_palindrome_recursive(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (s[left] != s[right])
	{
		return (0);
	}
	return (is_palindrome_recursive(s, left + 1, right - 1));
}
/**
 * is_palindrome - calculate the length of string and call the helper function
 *                 to check whether a string is a palindrome
 * @s: the string to be checked
 * Return: 1 if the string is a palindrome, 0 if not
 *
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}

