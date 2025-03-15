#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument number
 * @av: argument vector (an array of strings)
 * Return: a pointer to a new string, NUll if fails
 *
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++;
	}
	total_length++;

	str = malloc(total_length);

	if (str == NULL)
		return (NULL);
	
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);

}
