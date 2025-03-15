#include "main.h"
#include <stdlib.h>
/**
 * strtow - splits a string into word
 * @str: the given string
 * Return: a pointer to an array of strings;
 *         NULL if fails
 */
char **strtow(char *str)
{
	int i, j = 0, word_count = 0, word_length;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			word_count++;
			while ()
		}
	}





}
