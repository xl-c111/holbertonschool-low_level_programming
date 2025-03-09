#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to the string whose length to be measured
 *
 * Return: length of the string (excluding '\0')
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
