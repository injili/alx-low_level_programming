#include "main.h"

/**
 * swap_int - swaps the values in two integers using their pointers
 * @a: The address to int a
 * @b: The address to int b
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
