#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: special char to be initialized
 * Return: a pointer to the array
 *         or NULL if it fails
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = (char *)malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
