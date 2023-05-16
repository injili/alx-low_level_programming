/*
 *       (_)
 *  \____/..
 *   (___/\/
 *   || ||
 *
 *   injili
 */

#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: initial value
 * @max: the final value
 *
 * Return: pointer to the new string
 */

int *array_range(int min, int max)
{
	int *mem, range, index;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	mem = malloc(sizeof(int) * range);
	for (index = 0; index < range; index++)
	{
		mem[index] = min;
		min++;
	}

	return (mem);
}
