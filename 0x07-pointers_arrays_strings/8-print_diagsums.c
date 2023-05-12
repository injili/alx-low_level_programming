#include "main.h"
#include <stdio.h>
/**
 */
void print_diagsums(int *a, int size)
{
	int i, sum0 = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum0 += *(a + i * size + i);
		sum1 += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", sum0, sum1);
}
