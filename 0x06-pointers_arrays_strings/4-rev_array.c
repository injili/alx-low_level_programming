#include "main.h"

/**
 * reverse_array - reverses the order of array elements
 * @a: the array passed to the function
 * @n: number of elements in the arrray
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp, i = 0, half = n / 2, j = n - 1;

	while (i < half)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
		i++;
	}
}
