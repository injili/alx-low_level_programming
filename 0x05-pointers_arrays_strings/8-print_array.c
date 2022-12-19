#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a specific number of array characters
 * @a: the array passed to the function
 * @n: the number of values to be printed
 *
 * Return 0 on success
 */

void print_array(int *a, int n)
{
	int i = 0;
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", *(a + i));
		if (n - 1 == x)
			break;
		printf(", ");
		i++;
	}
	printf("\n");
}
