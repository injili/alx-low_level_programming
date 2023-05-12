#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of diagonal numbers in a 2D string
 * @a: the string passed to the function
 * @size: the size of the string
 *
 * Return: no return value
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
