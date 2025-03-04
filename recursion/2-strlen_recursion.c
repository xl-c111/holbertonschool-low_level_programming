#include "main.h"
/**
 *  _strlen_recursion - returns the length of a string
 *  @s: the string to measure
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		_strlen_recursion(s + 1);
	}
	return (1 + (_strlen_recursion(s + 1)));

}
