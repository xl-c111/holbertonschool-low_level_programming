#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings, using at most n bytes of s2
 * @s1: pointer the first string
 * @s2: pointer the second string
 * @n: the first number of bytes of s2
 * Return: a pointer point to newly allocated space of memeory
 *         NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length_s1] != '\0')
		length_s1++;
	while (s2[length_s2] != '\0')
		length_s2++;

	p = malloc(length_s1 + n + 1);

	if (n >= length_s2)
	{
		n = length_s2;
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length_s1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		p[i + j] = s2[j];
	}
	p[length_s1 + n] = '\0';
	return (p);
}
