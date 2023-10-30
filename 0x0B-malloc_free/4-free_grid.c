#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid previously created.
*
* @grid: multidimensional array of integers.
* @height: height of the grid.
*
* Return: No return.
*/

void free_grid(int **grid, int height)

{
	if (grid != NULL && height > 0)
	{
		int i;

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
