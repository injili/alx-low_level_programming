#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a @D array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointer s to the grid
 */

int **alloc_grid(int width, int height)
{
	int **s, i, j;

	s = malloc(sizeof(int **) * height);
	for (i = 0; i < height; i++)
		s[i] = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}
	return (s);
}
