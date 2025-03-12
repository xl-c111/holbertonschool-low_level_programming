#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value of the array
 * @max: maximum value of the array
 * Return: a pointer to the newly created array
 *         If min > max, return NULL
 *         If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	size = max - min + 1;
	if (min > max)
	{	return NULL;
	}
	size = max - min + 1;

	arr = malloc(sizeof(int) * (size));

	if (arr == NULL)
	{	return NULL;
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = i + min;
	}
	return (arr);
}
