#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer should point to a newly allocated space in memory which
 *         contains the contents of s1, followed by the contents of s2
 *         and null terminated; NULL on failure
 *
 */
char *str_concat(char *s1, char *s2)
{
	int length1 = 0;
	int length2 = 0;
	char *target;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}

	target = malloc(length1 + length2 + 1);

	if (target == NULL)
	{
		return (0);
	}
	for (i = 0; i < length1; i++)
	{
		target[i] = s1[i];
	}
	for (j = 0; j < length2; j++)
	{
		target[i + j] = s2[j];
	}
	target[length1 + length2] = '\0';
	return (target);
}
