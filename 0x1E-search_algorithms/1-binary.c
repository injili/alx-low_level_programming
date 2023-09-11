# include <stddef.h>
# include <stdio.h>
# include "search_algos.h"

/**
 * binary_search - The function that searches for a value in a
 * sorted array using Binary Search Algorithm
 * @array: The pointer to the first integer to the array
 * @size: The size of the entire array
 * @value: The value to be looked for in the array
 *
 * Return: An integer pointing to the first possition the value was found
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0, h = size - 1, x = 0, m;

	if (array == NULL)
		return (-1);

	while (l <= h)
	{
		printf("Search in array:");

		for (x = l; x <= h; x++)
		{
			if (x != h)
				printf(" %d,", array[x]);
			else
				printf(" %d\n", array[x]);
		}

		m = (h + l) / 2;

		if (array[m] > value)
			h = m - 1;
		else if (array[m] < value)
			l = m + 1;
		else
			return (m);

	}

	return (-1);
}
