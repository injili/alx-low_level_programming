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

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
		s[i] = malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}
	return (s);
}
