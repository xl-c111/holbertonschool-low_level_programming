#include "main.h"
/**
 * print_square - prints a square
 * @size: is the size of the square
 * Description: If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 *
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
