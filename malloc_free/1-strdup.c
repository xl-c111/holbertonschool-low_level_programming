#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the given string
 * Return: NULL if str == NULL
 *        a pointer to a new string that duplicates the string str
 *
 *
 */
char *_strdup(char *str)
{
	char *target;
	int length = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0' && *str != 0)
	{
		length++;
	}

	target = malloc(length + 1);

	if (target == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		target[i] = str[i];
	}
	target[i] = '\0';

	return (target);

}
