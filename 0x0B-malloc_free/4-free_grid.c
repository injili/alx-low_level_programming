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
	int **s, i, j;

	s = malloc(sizeof(int **) * height);
	for (i = 0; i < height; i++)
		s = malloc(sizeof(int*) * height);
	for (i = 0; i < height; i++)
	{
		for (j = 0; **(grid + j) != 0; i++)
			s[i][j] = grid[i][j];
	}
}
