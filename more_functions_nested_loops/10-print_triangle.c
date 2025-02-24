#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: is the size of the triangle
 * Description: Use the character # to print the triangle
 * If size is 0 or less, the function should print only a new line
 *
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				if (j < size - i - 1)
				{
					_putchar(' ');
				}
				if (j > size - i - 1 && j <= size)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
