#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 *                  of an array
 * @array: a pointer to the array of integers
 * @size: the number of elements in the array
 * @action: a pointer point to the function that can be executed on
 *          each element, returns void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
