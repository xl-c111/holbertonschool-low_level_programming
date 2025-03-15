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

	for (i = 0; i < ac; i++)    /* the outer loop iterates each string of the array */
	{
		for (j = 0; av[i][j] != '\0'; j++)  /* the inner loop counts characters in each string */
			total_length++; 
		total_length++;    /* for each new line after each string */
	}
	total_length++;    /* for the terminating null byte */

	str = malloc(total_length);

	if (str == NULL)
		return (NULL);
	
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];  /* the inner loop copies each character from the current argument into the 
                                               * new string, incrementing k after each character
			                       */
		}
		str[k++] = '\n';   /* after copying an argument, it appends a newline character (\n) and increments k */
	}
	str[k] = '\0';    /* the terminating null byte (\0) to the end of the string */

	return (str);

}
