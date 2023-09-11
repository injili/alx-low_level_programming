#include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an
 * array of integers using Linear search Algorithm
 * @array: The array to be searched
 * @size: The number of elements on the array
 * @value: The value being looked for
 *
 * Return: An integer indicating the first index the valu is located
 */

int linear_search(int *array, size_t size, int value)
{
	int x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < (int)size; x++)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
