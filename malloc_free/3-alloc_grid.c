#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a pointer to the allocated 2D array,
 *              with every element initialized to 0
 * @width: width of the grid
 * @height: height of the grid
 * Return: returns a pointer to the allocated 2D array;
 *         NULL if on failure;
 *         NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int h;
	int w;
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);    /* allocates memory for array pointer that holds all row pointers */

	if (grid == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);     /* allocates memory for current row */

		if (grid[h] == NULL)
		{
			for (i = 0; i < h; i++)    /* loop through all previously allocated rows and free them */
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}
