#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a grid prior created
 * @grid: the created grid
 * @height: the height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;
	
	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free((int *)grid[i]);
	free(grid);
}
