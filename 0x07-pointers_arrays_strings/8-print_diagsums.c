#include "main.h"
#include <stdio.h>
/**
 */
void print_diagsums(int *a, int size)
{
	int i, sum, sum1;

	for (i = 0; i < size; i++)
	{
		sum += *(a + i);
	}
	printf("%d, ", sum);
	for (i = size - 1; i >= 0; i--)
	{
		sum1 += a[i][i];
	}
	printf("%d", sum1)
}
