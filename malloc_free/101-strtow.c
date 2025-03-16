#include "main.h"
#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: the given string
 * Return: a pointer to an array of strings;
 *         NULL if fails
 */
char **strtow(char *str)
{
	int i, j, k = 0, word_count = 0, word_length;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0';)
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			word_count++;
			while (str[i] != '\0' && str[i] != ' ')
				i++;
		}
	}
	if (word_count == 0)
		return (NULL);

	words = malloc(word_count + 1);

	if (words == NULL)
		return (NULL);

	i = 0;
	k = 0;

	while (str[i] != '\0' && k < word_count)
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '\0')
			break;

		word_length = 0;
		j = i;

		while (str[j] != '\0' && str[j] != ' ')
		{
			word_length++;
			j++;
		}

		words[k] = malloc(word_length + 1);

		if (words[k] == NULL)
		{
			int t;

			for (t = 0; t < k; t++)
				free(words[t]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < word_length; j++)
			words[k][j] = str[i + j];
		words[k][word_length] = '\0';
		k++;
		i = i + word_length;
	}
	words[k] = NULL;

	return (words);
}

