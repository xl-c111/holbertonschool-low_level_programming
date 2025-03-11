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
	int length;
	int i;

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

	while (str[i] != '\0')
	{
		target[i] = str[i];
		i++;
	}
	return (target);

}
