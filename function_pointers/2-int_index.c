#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: a pointer to an array of integers
 * @size: the number of elements in the array
 * @cmp: a pointer to a function that takes an integer as a parameter
 * Return: the index of the first element for which the cmp function
 *         does not return 0; if no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
