#include "main.h"
#include <stdlib.h>

/**
* free_grid - Frees a 2-dimensional grid.
* @grid: Multidimensional array of integers.
* @height: Height of the grid.
*
* Return: No return.
*/

void free_grid(int **grid, int height)

{
	if (grid != NULL && height > 0)
	{
		for (int i = 0; i < height; i++)

		{
			if (grid[i] != NULL)
			{
				free(grid[i]);
			}
		}
		free(grid);
	}
}
