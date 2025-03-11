#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: returns a pointer to a 2 dimensional array of integers
 *         NULL if on failure
 *         NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int h;
	int w;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);

		if (grid[h] == NULL)
		{
			return (NULL);
		}

		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}
